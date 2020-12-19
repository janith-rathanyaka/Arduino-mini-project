import controlP5.*;

ControlP5 cp5;
PFont font;

void setup(){
     
  size(300,450);
  cp5 = new ControlP5(this);
  font = createFont("calibri light bold",20);
  cp5.addButton("red")
     .setPosition(100,50)
     .setSize(100, 70)
     .setFont(font)
  ;
  
    cp5.addButton("yellow")
     .setPosition(100,150)
     .setSize(100, 70)
      .setFont(font)
  ;
  
    cp5.addButton("blue")
     .setPosition(100,250)
     .setSize(100, 70)
      .setFont(font)
    ;
    
      cp5.addButton("alloff")
     .setPosition(100,350)
     .setSize(100, 70)
      .setFont(font)
  ;
}

void draw(){
   background(150,0,150);
   textFont(font);
   text("LED CONTROL",80, 30);
}