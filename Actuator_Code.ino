const int potentiometer3 = 13;
const int potentiometer4 = 9;
const int motorPin3 = 12;
const int motorPin4 = 11;
const int pulldown2 = 8;
int signalwire1 = A1;
const int potentiometer1 = 2;
const int potentiometer2 = 3;
const int motorPin1 = 7;
const int motorPin2 = 6;
const int enablePin = 5;
const int enablePin1 = 10;
const int pulldown1 = 4;
int signalwire = A0;
int num = 0;

void setup() {
  //inputs
  
  pinMode(signalwire, INPUT);
  pinMode(signalwire1, INPUT);
  pinMode(pulldown1, INPUT);
  pinMode(pulldown2, INPUT);
  //outputs
  pinMode(potentiometer1, OUTPUT);
  pinMode(potentiometer2, OUTPUT);
  pinMode(potentiometer3, OUTPUT);
  pinMode(potentiometer4, OUTPUT);
  pinMode(motorPin1, OUTPUT);
  pinMode(motorPin2, OUTPUT);
  pinMode(motorPin3, OUTPUT);
  pinMode(motorPin4, OUTPUT);
  pinMode(enablePin, OUTPUT);
  pinMode(enablePin1, OUTPUT);
  // set enablePin high:
  digitalWrite(enablePin, HIGH);
  digitalWrite(enablePin1, HIGH);
  digitalWrite (motorPin1, LOW);
  digitalWrite (motorPin2, LOW);
  digitalWrite (motorPin3, LOW);
  digitalWrite (motorPin4, LOW);
  Serial.begin(9600);

}
void serialEvent(){
  num = Serial.read();
}
void loop()
{int potentiometer = analogRead(signalwire); //reading the resistance value from the potentiometer
    int potentiometerb = analogRead(signalwire1);
    digitalWrite(potentiometer1, LOW);
    digitalWrite(potentiometer2, HIGH);
    digitalWrite(potentiometer3, LOW);
    digitalWrite(potentiometer4, HIGH);
  if (num == '1')
 {   potentiometer = analogRead(signalwire);
         potentiometerb = analogRead(signalwire1);
        while (potentiometer > 1022)
        {  potentiometer = analogRead(signalwire);
          digitalWrite (motorPin1, HIGH);
          digitalWrite (motorPin2, LOW);
        }
        while (potentiometer < 1020)
        {  potentiometer = analogRead(signalwire);
          digitalWrite (motorPin1, LOW);
          digitalWrite (motorPin2, HIGH);
        } 
         { digitalWrite (motorPin1, LOW);
          digitalWrite (motorPin2, LOW);
         }
            while (potentiometerb > 1022)
        {  potentiometerb = analogRead(signalwire1);
          digitalWrite (motorPin3, HIGH);
          digitalWrite (motorPin4, LOW);
        }
        while (potentiometerb < 1020)
        {  potentiometerb = analogRead(signalwire1);
          digitalWrite (motorPin3, LOW);
          digitalWrite (motorPin4, HIGH);
        }
          digitalWrite (motorPin3, LOW);
          digitalWrite (motorPin4, LOW);
         }
 else if (num == '2') //bottom left
        {   potentiometer = analogRead(signalwire);
         potentiometerb = analogRead(signalwire1);
        while (potentiometer > 1022)
        {  potentiometer = analogRead(signalwire);
          digitalWrite (motorPin1, HIGH);
          digitalWrite (motorPin2, LOW);
        }
        while (potentiometer < 1020)
        {  potentiometer = analogRead(signalwire);
          digitalWrite (motorPin1, LOW);
          digitalWrite (motorPin2, HIGH);
        } 
         { digitalWrite (motorPin1, LOW);
          digitalWrite (motorPin2, LOW);
         }
        while (potentiometerb > 620)
        {  potentiometerb = analogRead(signalwire1);
          digitalWrite (motorPin3, HIGH);
          digitalWrite (motorPin4, LOW);
        }
        while (potentiometerb < 615)
        {  potentiometerb = analogRead(signalwire1);
          digitalWrite (motorPin3, LOW);
          digitalWrite (motorPin4, HIGH);
        }
          digitalWrite (motorPin3, LOW);
          digitalWrite (motorPin4, LOW);
         } 
  
  else if (num == '3') //bottom left
        {   potentiometer = analogRead(signalwire);
         potentiometerb = analogRead(signalwire1);
        while (potentiometer > 1022)
        {  potentiometer = analogRead(signalwire);
          digitalWrite (motorPin1, HIGH);
          digitalWrite (motorPin2, LOW);
        }
        while (potentiometer < 1020)
        {  potentiometer = analogRead(signalwire);
          digitalWrite (motorPin1, LOW);
          digitalWrite (motorPin2, HIGH);
        } 
         { digitalWrite (motorPin1, LOW);
          digitalWrite (motorPin2, LOW);
         }
          while (potentiometerb > 310)
        {  potentiometerb = analogRead(signalwire1);
          digitalWrite (motorPin3, HIGH);
          digitalWrite (motorPin4, LOW);
        }
        while (potentiometerb < 305)
        {  potentiometerb = analogRead(signalwire1);
          digitalWrite (motorPin3, LOW);
          digitalWrite (motorPin4, HIGH);
        }
          digitalWrite (motorPin3, LOW);
          digitalWrite (motorPin4, LOW);
         }  
         
      else if (num == '4')
     {   potentiometer = analogRead(signalwire);
         potentiometerb = analogRead(signalwire1);
        while (potentiometer > 485)
        {  potentiometer = analogRead(signalwire);
          digitalWrite (motorPin1, HIGH);
          digitalWrite (motorPin2, LOW);
        }
        while (potentiometer < 480)
        {  potentiometer = analogRead(signalwire);
          digitalWrite (motorPin1, LOW);
          digitalWrite (motorPin2, HIGH);
        } 
         { digitalWrite (motorPin1, LOW);
          digitalWrite (motorPin2, LOW);
         }
          while (potentiometerb > 1022)
        {  potentiometerb = analogRead(signalwire1);
          digitalWrite (motorPin3, HIGH);
          digitalWrite (motorPin4, LOW);
        }
        while (potentiometerb < 1020)
        {  potentiometerb = analogRead(signalwire1);
          digitalWrite (motorPin3, LOW);
          digitalWrite (motorPin4, HIGH);
        }
          digitalWrite (motorPin3, LOW);
          digitalWrite (motorPin4, LOW);
         }
         
      else if (num == '5')
     {   potentiometer = analogRead(signalwire);
         potentiometerb = analogRead(signalwire1);
        while (potentiometer > 485)
        {  potentiometer = analogRead(signalwire);
          digitalWrite (motorPin1, HIGH);
          digitalWrite (motorPin2, LOW);
        }
        while (potentiometer < 480)
        {  potentiometer = analogRead(signalwire);
          digitalWrite (motorPin1, LOW);
          digitalWrite (motorPin2, HIGH);
        } 
         { digitalWrite (motorPin1, LOW);
          digitalWrite (motorPin2, LOW);
         }
          while (potentiometerb > 620)
        {  potentiometerb = analogRead(signalwire1);
          digitalWrite (motorPin3, HIGH);
          digitalWrite (motorPin4, LOW);
        }
        while (potentiometerb < 615)
        {  potentiometerb = analogRead(signalwire1);
          digitalWrite (motorPin3, LOW);
          digitalWrite (motorPin4, HIGH);
        }
          digitalWrite (motorPin3, LOW);
          digitalWrite (motorPin4, LOW);
         }
         
      else if (num == '6')
         {   potentiometer = analogRead(signalwire);
         potentiometerb = analogRead(signalwire1);
        while (potentiometer > 485)
        {  potentiometer = analogRead(signalwire);
          digitalWrite (motorPin1, HIGH);
          digitalWrite (motorPin2, LOW);
        }
        while (potentiometer < 480)
        {  potentiometer = analogRead(signalwire);
          digitalWrite (motorPin1, LOW);
          digitalWrite (motorPin2, HIGH);
        } 
         { digitalWrite (motorPin1, LOW);
          digitalWrite (motorPin2, LOW);
         }
          while (potentiometerb > 310)
        {  potentiometerb = analogRead(signalwire1);
          digitalWrite (motorPin3, HIGH);
          digitalWrite (motorPin4, LOW);
        }
        while (potentiometerb < 305)
        {  potentiometerb = analogRead(signalwire1);
          digitalWrite (motorPin3, LOW);
          digitalWrite (motorPin4, HIGH);
        }
          digitalWrite (motorPin3, LOW);
          digitalWrite (motorPin4, LOW);
         }
         
      else if (num == '7')
          {   potentiometer = analogRead(signalwire);
         potentiometerb = analogRead(signalwire1);
        while (potentiometer > 2)
        {  potentiometer = analogRead(signalwire);
          digitalWrite (motorPin1, HIGH);
          digitalWrite (motorPin2, LOW);
        }
        while (potentiometer < 5)
        {  potentiometer = analogRead(signalwire);
          digitalWrite (motorPin1, LOW);
          digitalWrite (motorPin2, HIGH);
        } 
         { digitalWrite (motorPin1, LOW);
          digitalWrite (motorPin2, LOW);
         }
while (potentiometerb > 1022)
        {  potentiometerb = analogRead(signalwire1);
          digitalWrite (motorPin3, HIGH);
          digitalWrite (motorPin4, LOW);
        }
        while (potentiometerb < 1020)
        {  potentiometerb = analogRead(signalwire1);
          digitalWrite (motorPin3, LOW);
          digitalWrite (motorPin4, HIGH);
        }
          digitalWrite (motorPin3, LOW);
          digitalWrite (motorPin4, LOW);
         }
          
      else if (num == '8')
         {   potentiometer = analogRead(signalwire);
         potentiometerb = analogRead(signalwire1);
        while (potentiometer > 2)
        {  potentiometer = analogRead(signalwire);
          digitalWrite (motorPin1, HIGH);
          digitalWrite (motorPin2, LOW);
        }
        while (potentiometer < 5)
        {  potentiometer = analogRead(signalwire);
          digitalWrite (motorPin1, LOW);
          digitalWrite (motorPin2, HIGH);
        } 
         { digitalWrite (motorPin1, LOW);
          digitalWrite (motorPin2, LOW);
         }
          while (potentiometerb > 620)
        {  potentiometerb = analogRead(signalwire1);
          digitalWrite (motorPin3, HIGH);
          digitalWrite (motorPin4, LOW);
        }
        while (potentiometerb < 615)
        {  potentiometerb = analogRead(signalwire1);
          digitalWrite (motorPin3, LOW);
          digitalWrite (motorPin4, HIGH);
        }
          digitalWrite (motorPin3, LOW);
          digitalWrite (motorPin4, LOW);
         }
          
      else if (num == '9')
         {   potentiometer = analogRead(signalwire);
         potentiometerb = analogRead(signalwire1);
        while (potentiometer > 2)
        {  potentiometer = analogRead(signalwire);
          digitalWrite (motorPin1, HIGH);
          digitalWrite (motorPin2, LOW);
        }
        while (potentiometer < 5)
        {  potentiometer = analogRead(signalwire);
          digitalWrite (motorPin1, LOW);
          digitalWrite (motorPin2, HIGH);
        } 
         { digitalWrite (motorPin1, LOW);
          digitalWrite (motorPin2, LOW);
         }
          while (potentiometerb > 310)
        {  potentiometerb = analogRead(signalwire1);
          digitalWrite (motorPin3, HIGH);
          digitalWrite (motorPin4, LOW);
        }
        while (potentiometerb < 305)
        {  potentiometerb = analogRead(signalwire1);
          digitalWrite (motorPin3, LOW);
          digitalWrite (motorPin4, HIGH);
        }
          digitalWrite (motorPin3, LOW);
          digitalWrite (motorPin4, LOW);
         }
}
          
      


  
