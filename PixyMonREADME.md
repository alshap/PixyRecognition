# PixyMon Desktop Program

PixyMon is a desktop program which gives an opportunity to check how Pixy cmuCAM works. Also there is a some functions(objects and colors recognition).

## Installation

Install PixyMon from https://pixycam.com/downloads-pixy1/ and run the program

If camera is not connected error appears

## Connection
Connect Pixy micro-USB port with computer USB.
If camera is in good condition then in PixyMon screen appears image from camera.

![Screenshot](https://github.com/alshap/PixyRecognition/blob/master/images/con2.jpg)

## Responses and errors

**error: No Pixy devices have been detected.**__
If Pixy is not connected to the PixyMon program this error appears. If Pixy is connected but error still happens, check if ports are correctly plugged and all devices are working correctly.

**response: 0(0x0)**__
This response means that on switching program modes no error happened. 

**response: -1 (0xffffffff)**__
Occurs when in console input was written wrong index. For example index 8 for clear signature(because we have only 7 signatures)

**Signature set!**__
This respons occurs after signature setting up. Means that signature set up was successfull.

**error: Pixy has stopped working.**__
Error can occurs in situations when Pixy is overloaded. For example person in signature set up a range more than is camera pixels have.
That will crash the program.

**error: Unable to connect to device.**__
Can occur after Pixy has stopped working error. To solve replug the Pixy.

**error: Unable to open USB device.**__
Problem can be related with 2 previos. Try to replug Pixy.

## PixyMon features

![Screenshot](https://github.com/alshap/PixyRecognition/blob/master/images/guide1.jpg)
![Screenshot](https://github.com/alshap/PixyRecognition/blob/master/images/guide2.jpg)
