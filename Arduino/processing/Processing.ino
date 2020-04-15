int cambien = 10;// khai báo chân digital 10 cho cảm biến
int Led = 13;//kháo báo chân digital 8 cho đèn LED
int relay = 7;  
void setup () {
  Serial.begin(9600);
  pinMode(Led, OUTPUT); //pinMode xuất tín hiệu đầu ra cho led
  pinMode(cambien, INPUT); //pinMode nhận tín hiệu đầu vào cho cảm biến
  pinMode(relay, OUTPUT);
   pinMode(8, OUTPUT);   //set pin as output , den bat tay
  pinMode(11, OUTPUT);   //set pin as output , quạt

}
void loop () {
  int value = digitalRead(cambien);//lưu giá trị cảm biến vào biến value
  digitalWrite(Led, value); //xuất giá trị ra đèn LED
  if (value == 0)
  {
    Serial.println("trời sáng");
    digitalWrite(relay, HIGH);
  }
  else
  {
    Serial.println("trời tối");
    digitalWrite(relay, LOW);
  }
    if(Serial.available()){  //chờ tín hiệu được gửi đến serial

    char val = Serial.read();

    if(val == 'd'){       //if d received
      digitalWrite(8, HIGH); //turn on dèn
      }
    if(val == 'q'){       //if q received
      digitalWrite(11, HIGH); //turn on quat
      }
//    if(val == 't'){       //if t received
//      digitalWrite(10, HIGH); //turn on tivi
//      }
    if(val == 'f'){       //if f received
      digitalWrite(8, LOW); //turn off all led
      digitalWrite(11, LOW);
    //  digitalWrite(10, LOW);
      }      
    }
}
