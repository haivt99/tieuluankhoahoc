import controlP5.*; //các bạn cần phai add thư viện controlP5
import processing.serial.*;
Serial port;
ControlP5 cp5; //create ControlP5 object
PFont font;
void setup(){ 
  size(450, 600);    //Kích thước giao diện rộng và cao
  printArray(Serial.list());   
  port = new Serial(this, "COM4", 9600);  // các bạn cần chú ý đến cổng COM  thay cho đúng nhé
  cp5 = new ControlP5(this);
  font = createFont("Arial", 25);    
  cp5.addButton("Light1")     //"QUẠT" is the name of button
    .setPosition(135, 50)  //x and y coordinates of upper left corner of button
    .setSize(150, 70)      //(width, height)
    .setFont(font)
  ;   

  cp5.addButton("Light2")     //"ĐÈN" is the name of button
    .setPosition(135, 150)  //x and y coordinates of upper left corner of button
    .setSize(150, 70)      //(width, height)
    .setFont(font)
  ;

  cp5.addButton("OffLight1")     //"TIVI" is the name of button
    .setPosition(135, 250)  //x and y coordinates of upper left corner of button
    .setSize(150, 70)      //(width, height)
    .setFont(font)
  ;
  
  cp5.addButton("OffLight2")     //"alloff" is the name of button
    .setPosition(135, 350)  //x and y coordinates of upper left corner of button
    .setSize(150, 70)      //(width, height)
    .setFont(font)
  ;
  cp5.addButton("ALLOFF")     //"alloff" is the name of button
    .setPosition(135, 450)  //x and y coordinates of upper left corner of button
    .setSize(150, 70)      //(width, height)
    .setFont(font)
  ;
}
void draw(){  //same as loop in arduino
  background(23, 151, 81); // background color of window (r, g, b) or (0 to 255)
  //lets give title to our window
  fill(0, 255, 0);               //chỉnh màu text (r, g, b)
  textFont(font);
  text("ĐIỀU KHIỂN THIẾT BỊ ĐIỆN", 55, 30);  // ("text", x coordinate, y co  ordinat)
}
void Light1(){
  port.write('q');
}
void Light2(){
  port.write('d');
}
void OffLight2(){
  port.write('f');
}
void OffLight1(){
  port.write('t');
}
void ALLOFF() {
  port.write('a');
}
