#include <WiFiNINA.h>
#include <Servo.h>
#include <PubSubClient.h>
#include <ctime>

const char* ssid = "Gillesal";
const char* password = "1009toni";
const char* mqttServer = "kasp827b.cloud.shiftr.io";
const int mqttPort = 1883;
const char* mqttUser = "kasp827b";
const char* mqttPassword = "54q8XajqeRHAFT5W";
const char* mqttTopic = "feed";

WiFiClient wifiClient;
PubSubClient mqttClient(wifiClient);

Servo servoMotor;
int servoPin = 12;

bool mqttFirstConnect = true; // Add this variable

void setupWiFi();
void setupMQTT();
void mqttCallback(char* topic, byte* payload, unsigned int length);
void feed();

void setup() {
  Serial.begin(9600);
  servoMotor.attach(servoPin);

  setupWiFi();
  setupMQTT();
}

void loop() {
  if (!mqttClient.connected()) {
    setupMQTT();
  }
  mqttClient.loop();
}

void setupWiFi() {
  delay(10);
  Serial.print("Connecting to ");
  Serial.println(ssid);
  WiFi.begin(ssid, password);

  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".t");
  }

  Serial.println("");
  Serial.println("WiFi connected");
  Serial.print("IP address: ");
  Serial.println(WiFi.localIP());
}

void setupMQTT() {
  mqttClient.setServer(mqttServer, mqttPort);
  mqttClient.setCallback(mqttCallback);

  // Generate a unique client ID by appending the MAC address to the base client ID
  String clientId = "CatFeeder-";
  byte mac[6];
  WiFi.macAddress(mac);
  for (int i = 0; i < 6; ++i) {
    clientId += String(mac[i], HEX);
  }

  Serial.print("Attempting MQTT connection...");

  if (mqttClient.connect(clientId.c_str(), mqttUser, mqttPassword)) {
    Serial.println("connected");
    mqttClient.subscribe(mqttTopic);
  } else {
    Serial.print("failed, rc=");
    Serial.print(mqttClient.state());
    Serial.println(" MQTT connection failed");
  }
}

void mqttCallback(char* topic, byte* payload, unsigned int length) {
  String receivedTopic = String(topic);
  String receivedMessage = "";
  for (unsigned int i = 0; i < length; i++) {
    char c = (char)payload[i];
    receivedMessage += c;
  }

  if (receivedTopic == mqttTopic && receivedMessage == "feedingtime") {
    feed();
    
    time_t currentTime = time(NULL);
    String currentTimeStr = ctime(&currentTime);
    currentTimeStr.trim(); // Remove newline character at the end of the string

    Serial.println("Feeding the cat... at " + currentTimeStr);
  }
}

void feed() {
  int stopPulse = 1500;       // Pulse width in microseconds for the stopped state (may vary for different servos)
  int clockwisePulse = 1300;  // Pulse width in microseconds for clockwise rotation (may vary for different servos)
  int rotationTime = 1000;    // Time in milliseconds for a full 360-degree rotation (may vary for different servos)

  // Start clockwise rotation
  servoMotor.writeMicroseconds(clockwisePulse);
  delay(rotationTime);

  // Stop the servo
  servoMotor.writeMicroseconds(stopPulse);
}