void bluelfr()
{
  A=digitalRead(s1);
  B=digitalRead(s2);
  C=digitalRead(s3);
  D=digitalRead(s4);
  E=digitalRead(s5);

if(A==1 && B==1 && C==1 && D==1)
   { MF();
    buzz();
    checkpoint+=1;
    delay(200);
    digitalWrite(bzrp,LOW);
    digitalWrite(bzrn,LOW);
   }
else if
(A==0 && B==1 && C==1 && D==0)
{  Mf();
  
  } 


else if(A==0 && B==1 && C==1 && D==1)
    { MR();
    }
else if(A==0 && B==0 && C==0 && D==0)
    { 
     MB();
}
else if(A==0 && B==0 && C==0 && D==1){
     MR();
  
  }
else if(A==0 && B==0 && C==1 && D==0){
  SR();
}
else if(A==0 && B==0 && C==1 && D==1){
  SR();
}
else if(A==0 && B==1 && C==0 && D==0){
  SL();
}
else if (A==1 && B==0 && C==0 && D==0){
 if( checkpoint==4 or checkpoint>4)
  {ML();}
}


else if (A==1 && B==1 && C==0 && D==0){
   if( checkpoint==4 or checkpoint>4)
  {ML();}
}
else if(A==0 && B==1 && C==0 && D==1){ if( checkpoint==4 or checkpoint>4)
  {ML();}}

else if(A==1 && B==1 && C==1 && D==1 && E==1){
  Stop();
  
}
else if(A==1 && B==1 && C==1 && D==0 )
{ 
  if( checkpoint==4 or checkpoint>4)
  {ML();}
 
}







}
