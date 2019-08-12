# FTP Client for the ESP32

[![GitHub version](https://img.shields.io/github/release/blackcodetavern/ESP32_FTPClient.svg)](https://github.com/blackcodetavern/ESP32_FTPClient/releases/latest)
[![License: MIT](https://img.shields.io/badge/License-MIT-green.svg)](https://github.com/blackcodetavern/ESP32_FTPClient/blob/master/LICENSE)
[![GitHub last commit](https://img.shields.io/github/last-commit/blackcodetavern/ESP32_FTPClient.svg?style=social)](https://github.com/blackcodetavern/ESP32_FTPClient)

# Description
I use this client to write sensordata into a log file and to upload images for my rabbit-webcam.

I took the changes from ldab. Thank you very much for that. However, I want to keep the directory structure as simple as possible so that the examples can be executed without problems.

I also noticed some problems with my 8 month old espressif library. You need to update the library for the example to work.

# TODO
[ ] Better errorhandling

[ ] Less redundant code

[ ] Recursive folder delete

## Imageupload
* For the uploading example we will use the GitHub Octocat, which binary file is [here](./octocat.h):

 <img src="https://github.githubassets.com/images/modules/logos_page/Octocat.png" alt="Octocat" width="50%"> 
