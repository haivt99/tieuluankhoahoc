int relay = 7; //khai báo chân digital 7 cho relay
int den2 = 8;  //khai báo chân digital 8 cho đèn số 2
int den1 = 11;  //khai báo chân digital 11 cho đèn số 1
int cambien = 10;// khai báo chân digital 10 cho cảm biến
int Led = 13;//kháo báo chân digital 8 cho đèn LED
 
void setup () {
  Serial.begin(9600);
  pinMode(Led, OUTPUT); //pinMode xuất tín hiệu đầu ra cho led
  pinMode(cambien, INPUT); //pinMode nhận tín hiệu đầu vào cho cảm biến
  pinMode(relay, OUTPUT); //pinMode nhận tín hiệu đầu ra cho relay
  pinMode(den2, OUTPUT);   //pinMode nhận tín hiệu đầu ra cho đèn số 2
  pinMode(den1, OUTPUT);   //pinMode nhận tín hiệu đầu ra cho đèn số 1
}
void loop () {
  int value = digitalRead(cambien);//lưu giá trị cảm biến vào biến value
  digitalWrite(Led, value); //xuất giá trị ra đèn LED
  if (value == 0)
  {
    digitalWrite(relay, HIGH);
  }
  else
  {
    digitalWrite(relay, LOW);
  }
    if(Serial.available()){  //chờ tín hiệu được gửi đến serial

    char val = Serial.read();

    if(val == 'd'){       //if d received
      digitalWrite(8, HIGH); //bật đèn 2
      }
    if(val == 'q'){       //if q received
      digitalWrite(11, HIGH); // bật đèn 1
      }
    if(val == 'f'){       //if f received
      digitalWrite(8, LOW); //tắt đèn 2
      }      
     if(val == 't'){       //if f received
      digitalWrite(11, LOW); //tắt đèn 1
      }
      if(val == 'a') {
       digitalWrite(8, LOW);  // tắt tất cả
       digitalWrite(11, LOW);
      }
   
    }
}
