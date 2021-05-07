int gnd[]={A1,A0,8,9,10,11,12,13};
int vcc[]={0,1,2,3,4,5,6,7};
int t=50;

//For name initials
// 1 represents turn led on in 8*8 matrix
int D[8][8]={
  {0,0,0,0,0,0,0,0},
  {0,1,1,1,1,1,0,0},
  {0,1,0,0,0,0,1,0},
  {0,1,0,0,0,0,1,0},
  {0,1,0,0,0,0,1,0},
  {0,1,0,0,0,0,1,0},
  {0,1,1,1,1,1,0,0},
  {0,0,0,0,0,0,0,0}
};


void reset(){
 for(int ca=0;ca<=7;ca++){
    digitalWrite(gnd[ca],HIGH);
  }
  
  for(int an=0;an<=7;an++){
    digitalWrite(vcc[an],LOW);
  } 
  delay(t);
}

void setup()
{
  //Declare gnd pin
  for(int ca=0;ca<=7;ca++){
    pinMode(gnd[ca],OUTPUT);
  }
  for(int an=0;an<=7;an++){
    pinMode(vcc[an],OUTPUT);
  }
  
  reset();
  
  
}

void loop()
{
  //Name initial
  
  for(int an=0;an<8;an++){
    for(int cn=0;cn<8;cn++){
      if(D[an][cn]==1){
        digitalWrite(gnd[cn],LOW);
        digitalWrite(vcc[an],HIGH);
        delay(10);
      }
      digitalWrite(gnd[cn],HIGH);
      digitalWrite(vcc[an],LOW);
      delay(1);
    }
    
  }
  
}
