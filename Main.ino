int led = 13;
int button1 = 2;
int button2 = 3;
int button3 = 4;
int button4 = 5;
int but1;
int but2;
int but3;
int but4;
int rx;
void setup() {
  // put your setup code here, to run once:
  pinMode(led, OUTPUT);
  pinMode(button1, INPUT);
  pinMode(button2, INPUT);
  pinMode(button3, INPUT);
  pinMode(button4, INPUT);
  Serial.begin(9600);
  //Serial.println("All systems cheking done");
}

void loop() {
  // put your main code here, to run repeatedly:
  
    /*digitalWrite(led, HIGH);
    Serial.println("led is now on");
    delay(500);
    digitalWrite(led, LOW);
    Serial.println("led is now off");
    delay(500);


  */
    but1 = digitalRead(button1);
  but2 = digitalRead(button2);
  but3 = digitalRead(button3);
  but4 = digitalRead(button4);
        if (but1 == HIGH)
  {
    rx = 1;
  }
  else if (but2 == HIGH)
  { rx = 2;

  }
  else if (but3 == HIGH)
  { rx = 3;

  }
  else if (but3 == HIGH)
  { rx = 3;

  }
    else if (but4 == HIGH)
  { rx = 4;

  }
  else{
  }


Serial.println(rx);
rx = 0;
delay(500);

}
