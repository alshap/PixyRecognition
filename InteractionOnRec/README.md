# Recognition project with interactions

This project is modified hello_world.ino from samples. Pixy recognize objects and Arduino shows found object color. This project can be modified more to the sorting machine which sortes items based on their color.

## Introduction

In this readme are shown project schema, PixyMon settings and advices to reproduce the project. Also some code explanation will be presented.

## Connection schema

![Screenshot](https://github.com/alshap/PixyRecognition/blob/master/InteractionOnRec/images/schema.png)
![Screenshot](https://github.com/alshap/PixyRecognition/blob/master/InteractionOnRec/images/schema_photo.jpg)

## Dataset

We are using 4 objects with different colors. Blue, orange, yellow and green objects. We choose object colors same as LED colors. 

![Screenshot](https://github.com/alshap/PixyRecognition/blob/master/InteractionOnRec/images/dataset.jpg)

## PixyMon signatures set

Create signatures as was explained in **Simple color recognition** tutorial. You can create own signatures set with other colors.

## Code explanation

```
pixy.blocks[j].signature
```
Returns found signature integer value
```
ledControl(int , int, int, int)
```
Function to create less code. Change state of all LED's.
```
int control
```
Variable created to control if no blocks found. 20000 selected randomly and shows good result. Try other options to get the best perfomance.


## Results

<details><summary>**No objects**</summary>
  
![Screenshot](https://github.com/alshap/PixyRecognition/blob/master/InteractionOnRec/images/result0.jpg)

</details>

<details><summary>**Orange object**</summary>
  
 ![Screenshot](https://github.com/alshap/PixyRecognition/blob/master/InteractionOnRec/images/result1.jpg)

</details>

<details><summary>**Yellow object**</summary>
  
![Screenshot](https://github.com/alshap/PixyRecognition/blob/master/InteractionOnRec/images/result2.jpg)

</details>

<details><summary>**Green object**</summary>
  
![Screenshot](https://github.com/alshap/PixyRecognition/blob/master/InteractionOnRec/images/result3.jpg)

</details>

<details><summary>**Blue object**</summary>
  
![Screenshot](https://github.com/alshap/PixyRecognition/blob/master/InteractionOnRec/images/result4.jpg)

</details>
