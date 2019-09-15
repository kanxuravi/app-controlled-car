void up()
  {
    digitalWrite(3,HIGH);
    digitalWrite(4,LOW);
    digitalWrite(5,HIGH);
    digitalWrite(6,LOW);
    Serial.println("UP");
  }

void down()
  {
    digitalWrite(3,LOW);
    digitalWrite(4,HIGH);
    digitalWrite(5,LOW);
    digitalWrite(6,HIGH);
    Serial.println("DOWN");
  }  

void pause()
  {
    digitalWrite(3,LOW);
    digitalWrite(4,LOW);
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
    Serial.println("PAUSED");
  } 

void left()
  {
    digitalWrite(3,LOW);
    digitalWrite(4,LOW);
    digitalWrite(5,HIGH);
    digitalWrite(6,LOW);
    Serial.println("LEFT");
  } 

void right()
  {
    digitalWrite(3,HIGH);
    digitalWrite(4,LOW);
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
    Serial.println("RIGHT");
  }   



void setup()
{
    pinMode(3,OUTPUT);
    pinMode(4,OUTPUT);
    pinMode(5,OUTPUT);
    pinMode(6,OUTPUT);
    Serial.begin(9600);
}



void loop()
{
  if(Serial.available() > 0)
  {
    char ch = Serial.read();
    if (ch == 'w') 
    {
      up();
    }
    
     else if(ch == 'a'){
           left();
        }

     else if(ch == 's'){
           down();
        } 

     else if(ch == 'd'){
           right();
        } 

     else if (ch == 'q'){
        pause();
      }        
  
}}


     
