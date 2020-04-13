# Pixy Recognition

Working with Pixy cmuCAM we need an camera(Pixy), microcontroller(Arduino) and Arduino IDE.

To start we need an library for Arduino. It can be downloaded from official site https://pixycam.com/downloads-pixy1/
## Example
Check doc_examples

In PixyMonREADME.md you can find PixyMon functionality and connection.

# Objects recognition

## Connection
![Screenshot](https://github.com/alshap/PixyRecognition/blob/master/images/con1.jpg)
## Single color recognition

Single color recognition going on using "Set signature" option.
Also we need hello_world code(location : https://github.com/alshap/PixyRecognition/blob/master/doc_examples/hello_world/hello_world.ino)

We will recognize red heart on the cup
![Screenshot](https://github.com/alshap/PixyRecognition/blob/master/images/cup.jpg)

1. Connect the camera and turn it on
2. Run PixyMon
3. Turn camera on the recognition object and in PixyMon choose Action -> Set signature 1...
![Screenshot](https://github.com/alshap/PixyRecognition/blob/master/images/singlerec1.jpg)
4. Now download hello_world code on the Arduino 
5. Run program and open port monitor
6. In PixyMon start default program(Action -> Default Program)
Camera view become black. Do not worry, it is ok.
7. All is done. In port monitor should be written that object is found.
![Screenshot](https://github.com/alshap/PixyRecognition/blob/master/images/program.jpg)


## Multi color recognition

For Multi color recognition steps are same. Difference in step 3.
If object has some colors(up to 7) for each color we should set CC signature.

![Screenshot](https://github.com/alshap/PixyRecognition/blob/master/images/item.jpg)

For this project was taken item specially with a lot of different colors.
On screen is step by step colors signature and finally result. On step 3 use different CC signatures for each color. Other steps reproduce as in **Single color recognition**.
![Screenshot](https://github.com/alshap/PixyRecognition/blob/master/images/CC1.jpg)
![Screenshot](https://github.com/alshap/PixyRecognition/blob/master/images/CC2.jpg)
![Screenshot](https://github.com/alshap/PixyRecognition/blob/master/images/CC3.jpg)
![Screenshot](https://github.com/alshap/PixyRecognition/blob/master/images/multi1.jpg)
![Screenshot](https://github.com/alshap/PixyRecognition/blob/master/images/multi2.jpg)
