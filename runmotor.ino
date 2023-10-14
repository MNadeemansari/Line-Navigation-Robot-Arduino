int EnA=2;  // motor driver module
int EnB=6;
int In1=50;
int In2=51;
int In3=52;
int In4=53;
int s1=30; // Sensors
int s2=31;
int s3=32;
int s4=33;
int s5=48;
int s6=49; 
boolean A;
boolean B;
boolean C;
boolean D;
boolean E;
boolean F;
int bzrp=39;
int bzrn=45;
///  colour sensor part
int S0=25;
int S1=24;
int S2=23;
int S3=22;
int sensorOut=7;
int blue=0;
int green=0;
int red=0;
boolean redobject,blueobject,greenobject;
int checkpoint=0;

void setup() {
  pinMode(EnA,OUTPUT);
  pinMode(EnB,OUTPUT);
  pinMode(In1,OUTPUT);
  pinMode(In2,OUTPUT);
  pinMode(In3,OUTPUT);
  pinMode(In4,OUTPUT);
  pinMode(s1,INPUT);
  pinMode(s2,INPUT);
  pinMode(s3,INPUT);
  pinMode(s4,INPUT);
  pinMode(s5,INPUT);
  pinMode(s6,INPUT);
  pinMode(bzrp,OUTPUT);
  pinMode(bzrn,OUTPUT);
  
// colour sensor part
 pinMode(S0,OUTPUT);
 pinMode(S1,OUTPUT);
 pinMode(S2,OUTPUT);
 pinMode(S3,OUTPUT);
 pinMode(sensorOut,INPUT);
 pinMode(S0,HIGH); 
 pinMode(S1,LOW);
 
 
  // put your setup code here, to run once:

}
void loop(){
  digitalWrite(S2,LOW);
  digitalWrite(S3,LOW);
  red = pulseIn(sensorOut, LOW);
  digitalWrite(S2,HIGH);
  digitalWrite(S3,HIGH);
  green = pulseIn(sensorOut, LOW);
  digitalWrite(S2,LOW);
  digitalWrite(S3,HIGH);
  blue = pulseIn(sensorOut, LOW);
  redobject= red<green && red<blue;
  greenobject= green<red && green<blue;
  blueobject= blue<green && blue<red;
  /////////////////////main code///////////////////////////
if(redobject==1)
{
  while(true)
  {redlfr();}
  
  }
if(blueobject==1)
{
  
  while(true)
  {bluelfr();}
  
  }
if(greenobject==1)
{
  while(true)
  {greenlfr();}
  
  }



















}

  
  
  // put your main code here, to run repeatedly:
