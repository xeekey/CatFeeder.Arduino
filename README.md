<a name="readme-top"></a>
[![Contributors][contributors-shield]][contributors-url]
[![Forks][forks-shield]][forks-url]
[![Stargazers][stars-shield]][stars-url]
[![Issues][issues-shield]][issues-url]
[![Linkedin][linkedin-shield]][linkedin-url]

<!-- PROJECT LOGO -->
<br />
<div align="center">
  <!--<a href="https://github.com/xeekey/CatFeeder.Arduino">
    <img src="images/logo.png" alt="Logo" width="80" height="80">
  </a> -->

<h3 align="center">CatFeeder.Arduino</h3>

  <p align="center">
    An Arduino-based component of the CatFeeder project, handling the hardware interaction for automated feeding.
    <br />
    <a href="https://github.com/xeekey/CatFeeder.Arduino"><strong>Explore the docs »</strong></a>
    <br />
    <br />
    <a href="https://github.com/xeekey/CatFeeder.Arduino">View Demo</a>
    ·
    <a href="https://github.com/xeekey/CatFeeder.Arduino/issues">Report Bug</a>
    ·
    <a href="https://github.com/xeekey/CatFeeder.Arduino/issues">Request Feature</a>
  </p>
</div>

<!-- TABLE OF CONTENTS -->
<details>
  <summary>Table of Contents</summary>
  <ol>
    <li>
      <a href="#about-the-project">About The Project</a>
      <ul>
        <li><a href="#built-with">Built With</a></li>
      </ul>
    </li>
    <li><a href="#usage">Usage</a></li>
    <li><a href="#contributing">Contributing</a></li>
    <li><a href="#license">License</a></li>
    <li><a href="#contact">Contact</a></li>
  </ol>
</details>

<!-- ABOUT THE PROJECT -->
## About The Project

CatFeeder.Arduino is a crucial part of the CatFeeder system, responsible for the physical operation of the cat feeder. It uses an Arduino MKR WiFi 1010 board to control a servo motor based on commands received over MQTT.

Key Components:
1. **Main Program ([main.cpp](https://github.com/xeekey/CatFeeder.Arduino/blob/master/src/main.cpp)):** 
   - Connects to WiFi and MQTT server.
   - Listens for feeding commands and operates the servo motor accordingly.

2. **Configuration ([platformio.ini](https://github.com/xeekey/CatFeeder.Arduino/blob/master/platformio.ini)):**
   - Defines the environment and dependencies for the Arduino project.

3. **Project Structure:**
   - [Include Directory](https://github.com/xeekey/CatFeeder.Arduino/blob/master/include/README): For project header files.
   - [Lib Directory](https://github.com/xeekey/CatFeeder.Arduino/blob/master/lib/README): For project-specific libraries.
   - [Test Directory](https://github.com/xeekey/CatFeeder.Arduino/blob/master/test/README): For PlatformIO Test Runner and project tests.

<p align="right">(<a href="#readme-top">back to top</a>)</p>

### Built With

* [![C++][C++-shield]][C++-url]
* [![PlatformIO][PlatformIO-shield]][PlatformIO-url]

<p align="right">(<a href="#readme-top">back to top</a>)</p>

<!-- USAGE EXAMPLES -->
## Usage

To use CatFeeder.Arduino, upload the code to an Arduino MKR WiFi 1010 board. Ensure it's connected to the same network as the CatFeeder application for seamless communication.

_For more examples, please refer to the [Documentation](https://github.com/xeekey/CatFeeder.Arduino)_

<p align="right">(<a href="#readme-top">back to top</a>)</p>

<!-- CONTRIBUTING -->
## Contributing

Contributions to CatFeeder.Arduino are welcome. Please follow the standard GitHub pull request process to submit your changes.

<p align="right">(<a href="#readme-top">back to top</a>)</p>

<!-- LICENSE -->
## License

Distributed under the MIT License. See `LICENSE.txt` for more information.

<p align="right">(<a href="#readme-top">back to top</a>)</p>

<!-- CONTACT -->
## Contact
Project Link: [https://github.com/xeekey/CatFeeder.Arduino](https://github.com/xeekey/CatFeeder.Arduino)

<p align="right">(<a href="#readme-top">back to top</a>)</p>


<!-- MARKDOWN LINKS & IMAGES -->
<!-- https://www.markdownguide.org/basic-syntax/#reference-style-links -->
[contributors-shield]: https://img.shields.io/github/contributors/xeekey/CatFeeder.Arduino.svg?style=for-the-badge
[contributors-url]: https://github.com/xeekey/CatFeeder.Arduino/graphs/contributors
[forks-shield]: https://img.shields.io/github/forks/xeekey/CatFeeder.Arduino.svg?style=for-the-badge
[forks-url]: https://github.com/xeekey/CatFeeder.Arduino/network/members
[stars-shield]: https://img.shields.io/github/stars/xeekey/CatFeeder.Arduino.svg?style=for-the-badge
[stars-url]: https://github.com/xeekey/CatFeeder.Arduino/stargazers
[issues-shield]: https://img.shields.io/github/issues/xeekey/CatFeeder.Arduino.svg?style=for-the-badge
[issues-url]: https://github.com/xeekey/CatFeeder.Arduino/issues
[license-shield]: https://img.shields.io/github/license/xeekey/CatFeeder.Arduino.svg?style=for-the-badge
[license-url]: https://github.com/xeekey/CatFeeder.Arduino/main/LICENSE.txt
[linkedin-shield]: https://img.shields.io/badge/-LinkedIn-black.svg?style=for-the-badge&logo=linkedin&colorB=555
[linkedin-url]: https://linkedin.com/in/kasper-hjort-jæger
[product-screenshot]: images/screenshot.png
[C++-shield]: https://img.shields.io/badge/C++-00599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white
[C++-url]: https://cplusplus.com/
[PlatformIO-shield]: https://img.shields.io/badge/PlatformIO-222222.svg?style=for-the-badge&logo=platformio&logoColor=white
[PlatformIO-url]: https://platformio.org/
