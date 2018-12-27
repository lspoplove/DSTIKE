//DSTIKE Deauth Detector V3

int buzzer=5;//GPIO 5 Control buzzer

void setup()

{

  pinMode(buzzer,OUTPUT);

}

void loop()

{

  unsigned char i,j;

  while(1)

  {

    for(i=0;i<200;i++)

    {

      digitalWrite(buzzer,HIGH);

      delay(1);//Change this could adjust voice

      digitalWrite(buzzer,LOW);

      delay(1);

    }

    for(i=0;i<100;i++)

    {

      digitalWrite(buzzer,HIGH);

      delay(2);

      digitalWrite(buzzer,LOW);

      delay(2);

    }

  }

}

 
