void MF()//for move forward if check point
{ analogWrite(EnA,45);
  digitalWrite(In1,HIGH);
  digitalWrite(In2,LOW);
  digitalWrite(In3,HIGH);
  digitalWrite(In4,LOW);
  analogWrite(EnB,45);}

void Mf()
////move forward////  
 { analogWrite(EnA,150);
  digitalWrite(In1,HIGH);
  digitalWrite(In2,LOW);
  digitalWrite(In3,HIGH);
  digitalWrite(In4,LOW);
  analogWrite(EnB,150);}

void MR()
//////move right//////////
 { analogWrite(EnA,100);
  digitalWrite(In1,HIGH);
  digitalWrite(In2,LOW);
  digitalWrite(In3,LOW);
  digitalWrite(In4,HIGH);
  analogWrite(EnB,100);}

void ML()
///////move left/////////////
 { analogWrite(EnA,240);
  digitalWrite(In1,LOW);
  digitalWrite(In2,HIGH);
  digitalWrite(In3,HIGH);
  digitalWrite(In4,LOW);
  analogWrite(EnB,240);}

void MB()
///////////////////////////////back////////////////////////////
{  analogWrite(EnA,50);
  digitalWrite(In1,LOW);
  digitalWrite(In2,HIGH);
  digitalWrite(In3,LOW);
  digitalWrite(In4,HIGH);
  analogWrite(EnB,50);}
  
void Stop()
 /////////////////Stop//////////////////////
 { analogWrite(EnA,0);
  digitalWrite(In1,HIGH);
  digitalWrite(In2,HIGH);
  digitalWrite(In3,HIGH);
  digitalWrite(In4,HIGH);
  analogWrite(EnB,0);}

void SL()
/// slight left///
 {analogWrite(EnA,100);
  digitalWrite(In1,LOW);
  digitalWrite(In2,HIGH);
  digitalWrite(In3,HIGH);
  digitalWrite(In4,LOW);
  analogWrite(EnB,100);} 

void SR()
/// move slight right///
{
  analogWrite(EnA,80);
  digitalWrite(In1,HIGH);
  digitalWrite(In2,LOW);
  digitalWrite(In3,LOW);
  digitalWrite(In4,HIGH);
  analogWrite(EnB,80);}
  
  
  
  
  
