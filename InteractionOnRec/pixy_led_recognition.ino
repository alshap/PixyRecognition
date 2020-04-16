
#include <SPI.h>  
#include <Pixy.h>

Pixy pixy;

//LED Definition
int orange_led = 4;
int yellow_led = 6;
int green_led = 8;
int blue_led = 10;
//Check frames
int control = 0;

void setup()
{
  pinMode(orange_led, OUTPUT);
  pinMode(yellow_led, OUTPUT);
  pinMode(green_led, OUTPUT);
  pinMode(blue_led, OUTPUT);
  Serial.begin(9600);
  Serial.print("Starting...\n");

  pixy.init();
}

void loop()
{ 
  static int i = 0;
  int j;
  uint16_t blocks;
  char buf[32]; 
  
  blocks = pixy.getBlocks();
  
  if (blocks)
  {
    i++;
    
    if (i%50==0)
    {
      control = 0;
      sprintf(buf, "Detected %d:\n", blocks);
      Serial.print(buf);
      for (j=0; j<blocks; j++)
      {
        sprintf(buf, "  block %d: ", j);
        Serial.print(buf); 
        pixy.blocks[j].print();

        if (pixy.blocks[j].signature == 1){ //if blue found
          ledWrite(0, 0, 0, 1);
          break;
        }
        else if (pixy.blocks[j].signature == 2){ //if orange found
          ledWrite(1, 0, 0, 0);
          break;
        }
        else if (pixy.blocks[j].signature == 3){ //if green found
          ledWrite(0, 0, 1, 0);
          break;
        }
        else if (pixy.blocks[j].signature == 4){ //if yellow found
          ledWrite(0, 1, 0, 0);
          break;
        }
      }
    }
    
  }else{
    control++;
    if (control == 20000){ //If 20000 frames ~0.4sec without blocks then all LED turn off
      control = 0;
      ledWrite(0, 0, 0, 0);
      Serial.println("No blocks found");
    }
  }
    
}

/*
 * Changes all LED voltage
 */
void ledWrite(int orange_voltage,int yellow_voltage,int green_voltage,int blue_voltage){
  digitalWrite(orange_led, orange_voltage);
  digitalWrite(yellow_led, yellow_voltage);
  digitalWrite(green_led, green_voltage);
  digitalWrite(blue_led, blue_voltage);
}

  
