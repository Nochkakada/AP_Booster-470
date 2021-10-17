unsigned long t1, t2;
int val0, val1,val,v,v1;
int q10=0,q1=1,q2=0,q3=0,q4=0,q5=0,q6=0,q7=0,q8=0,q9=0;
void setup() {
  TCCR0B = TCCR0B & B11111000 | B00000001; // for PWM frequency of 62500.00 Hz
  pinMode(5, OUTPUT); //pinMode(A2, INPUT_PULLUP);
  pinMode(6, OUTPUT); pinMode(A1, INPUT);pinMode(A2, INPUT);
  pinMode(A3, INPUT); pinMode(13, OUTPUT);pinMode(7, OUTPUT);pinMode(8,OUTPUT); 
  Serial.begin(9600);
  Serial.setTimeout(100);
}
void loop() { 
 
 int VAL = analogRead(A2);
 int  VAL1 = analogRead(A1);
 int val = VAL+1;
 int val1 = VAL1+1;
 float VPA1 = val1 *0.00485;
 float VPA = val *0.0049; //Serial.println(VPA); Serial.println(VPA1); delay(1000)
val0 = map(val,0, 1023, 0 , 255);v  = map(val1,0, 1023, 0 , 255);analogWrite(5,val0);analogWrite(6,v);
 digitalWrite(8,1);
  if(VPA1<=2.3){
  digitalWrite(7,1);
 }else{  digitalWrite(7,0);}

if (Serial.available() > 0) {
 String data = Serial.readString ();
 int S = data.toInt();//Serial.println(S);

  if (S==0){
     q1=0;q2=0;q3=0;q4=0;q5=0;q6=0;q7=0;q8=0;q9=0;q10=1;
    }
      if (S==1){
     q1=1;q2=0;q3=0;q4=0;q5=0;q6=0;q7=0;q8=0;q9=0;q10=0;
    }
        if (S==2){
    q1=0;q2=1;q3=0;q4=0;q5=0;q6=0;q7=0;q8=0;q9=0;q10=0;
    }
        if (S==3){
      q1=0;q2=0;q3=1;q4=0;q5=0;q6=0;q7=0;q8=0;q9=0;q10=0;
    }
        if (S==4){
      q1=0;q2=0;q3=0;q4=1;q5=0;q6=0;q7=0;q8=0;q9=0;q10=0;
    }
        if (S==5){
      q1=0;q2=0;q3=0;q4=0;q5=1;q6=0;q7=0;q8=0;q9=0;q10=0;
    }
        if (S==6){
      q1=0;q2=0;q3=0;q4=0;q5=0;q6=1;q7=0;q8=0;q9=0;q10=0;
    }
        if (S==7){
      q1=0;q2=0;q3=0;q4=0;q5=0;q6=0;q7=1;q8=0;q9=0;q10=0;
    }
        if (S==8){
      q1=0;q2=0;q3=0;q4=0;q5=0;q6=0;q7=0;q8=1;q9=0;q10=0;
    }
        if (S==9){
      q1=0;q2=0;q3=0;q4=0;q5=0;q6=0;q7=0;q8=0;q9=1;q10=0;
    }
  }
   if (VPA1 <2){ 
   val0  = map(val,0, 1023, 0 , 255);
    v1 =  val0+58; v = v1*1.28;analogWrite(5,val0);analogWrite(6,v);}

 if (q10==1){
   if (VPA1 <2.3){  val0  = map(val,0, 1023, 0 , 255);  v1 =  val0+58; v = v1*1.28;analogWrite(5,val0);analogWrite(6,v);}
   if (VPA1 >=2.3&&VPA1<2.34 ){ val0  = map(val,0, 1040, 0 , 255);  v1 =  val0+58; v = v1*1.28;analogWrite(5,val0);analogWrite(6,v);}
   if (VPA1 >=2.34&&VPA1<2.38 ){ val0  = map(val,0, 1060, 0 , 255);  v1 =  val0+58; v = v1*1.28;analogWrite(5,val0);analogWrite(6,v);}
   if (VPA1 >=2.38&&VPA1<2.42 ){ val0  = map(val,0, 1080, 0 , 255);  v1 =  val0+58; v = v1*1.28;analogWrite(5,val0);analogWrite(6,v);}
   if (VPA1 >=2.45&&VPA1<2.48 ){ val0  = map(val,0, 1100, 0 , 255);  v1 =  val0+58; v = v1*1.28;analogWrite(5,val0);analogWrite(6,v);}
   if (VPA1 >=2.48&&VPA1<2.51 ){ val0  = map(val,0, 1120, 0 , 255);  v1 =  val0+58; v = v1*1.28;analogWrite(5,val0);analogWrite(6,v);} 
   if (VPA1 >=2.51&&VPA1<2.54 ){ val0  = map(val,0, 1140, 0 , 255);  v1 =  val0+58; v = v1*1.28;analogWrite(5,val0);analogWrite(6,v);}
   if (VPA1 >=2.54&&VPA1<2.57 ){ val0  = map(val,0, 1155, 0 , 255);  v1 =  val0+58; v = v1*1.28;analogWrite(5,val0);analogWrite(6,v);}
   if (VPA1 >=2.57&&VPA1<2.59 ){ val0  = map(val,0, 1170, 0 , 255);  v1 =  val0+58; v = v1*1.28;analogWrite(5,val0);analogWrite(6,v);}
   if (VPA1 >=2.59&&VPA1<2.61 ){ val0  = map(val,0, 1185, 0 , 255);  v1 =  val0+58; v = v1*1.28;analogWrite(5,val0);analogWrite(6,v);}
   if (VPA1 >=2.61&&VPA1<2.63 ){ val0  = map(val,0, 1200, 0 , 255);  v1 =  val0+58; v = v1*1.28;analogWrite(5,val0);analogWrite(6,v);}
   if (VPA1 >=2.63&&VPA1<2.65 ){ val0  = map(val,0, 1215, 0 , 255);  v1 =  val0+58; v = v1*1.28;analogWrite(5,val0);analogWrite(6,v);}
   if (VPA1 >=2.65&&VPA1<2.67 ){ val0  = map(val,0, 1240, 0 , 255);  v1 =  val0+58; v = v1*1.28;analogWrite(5,val0);analogWrite(6,v);}
   if (VPA1 >=2.67&&VPA1<2.69 ){ val0  = map(val,0, 1255, 0 , 255);  v1 =  val0+58; v = v1*1.28;analogWrite(5,val0);analogWrite(6,v);}
   if (VPA1 >=2.69&&VPA1<2.71 ){ val0  = map(val,0, 1270, 0 , 255);  v1 =  val0+58; v = v1*1.28;analogWrite(5,val0);analogWrite(6,v);}
   if (VPA1 >=2.71&&VPA1<2.73 ){ val0  = map(val,0, 1285, 0 , 255);  v1 =  val0+58; v = v1*1.28;analogWrite(5,val0);analogWrite(6,v);}
   if (VPA1 >=2.73){ val0  = map(val,0, 1300, 0 , 255);  v1 =  val0+58; v = v1*1.28;analogWrite(5,val0);analogWrite(6,v);}
   }
  
  if (q1==1){val0 = map(val,0, 1023, 0 , 255);v  = map(val1,0, 1023, 0 , 255);analogWrite(5,val0);analogWrite(6,v);}

  
    
   if (q2=1){
   if (VPA1 <2.3){        val0  = map(val,0, 1023, 0 , 255);  v1 =  val0+58; v = v1*1.28;analogWrite(5,val0);analogWrite(6,v);}
   if (VPA1 >=2.3&&VPA1<3.6){ val0=map(val, 0 , 950 , 0 , 255);  v1=val0+58; v = v1*1.28;analogWrite(5,val0);analogWrite(6,v);}
   if (VPA1 >=3.6&&VPA1<4.5 ){ val0 = map(val,0, 900, 0 , 255); v1= val0+58; v = v1*1.28;analogWrite(5,val0);analogWrite(6,v);}
   if (VPA1 >=4.5&&VPA1<4.6 ){ analogWrite(5,131);analogWrite(6,231);}
   if (VPA1 >=4.6){ val0 = map(val,0, 1023, 0 , 255);v  = map(val1,0, 1023, 0 , 255);analogWrite(5,val0);analogWrite(6,v);}
   }
   if (q3==1){
   if (VPA1 <2.3){             val0  = map(val,0, 1023, 0 , 255);  v1 =  val0+58; v = v1*1.28;analogWrite(5,val0);analogWrite(6,v);}
   if (VPA1 >=2.3&&VPA1<2.34 ) { val0  = map(val,0, 950, 0 , 255);  v1 =  val0+58; v = v1*1.28;analogWrite(5,val0);analogWrite(6,v);}
   if (VPA1 >=2.34&&VPA1<2.38 ){ val0  = map(val,0, 900, 0 , 255);  v1 =  val0+58; v = v1*1.28;analogWrite(5,val0);analogWrite(6,v);}
   if (VPA1 >=2.38&&VPA1<2.46 ){ val0  = map(val,0, 870, 0 , 255);  v1 =  val0+58; v = v1*1.28;analogWrite(5,val0);analogWrite(6,v);}
   if (VPA1 >=2.46&&VPA1<4.3)  { val0  = map(val,0, 850, 0 , 255);  v1 =  val0+58; v = v1*1.28;analogWrite(5,val0);analogWrite(6,v);}
   if (VPA1 >=4.3&&VPA1<4.6 )  { analogWrite(5,131);analogWrite(6,231);}
   if (VPA1 >=4.6)             { val0  = map(val,0, 1023, 0 , 255);v  = map(val1,0, 1023, 0 , 255);analogWrite(5,val0);analogWrite(6,v);}
 }

    if (q4==1){
   if (VPA1 <2.3){  val0  = map(val,0, 1023, 0 , 255);  v1 =  val0+58; v = v1*1.28;analogWrite(5,val0);analogWrite(6,v);}
   if (VPA1 >=2.3&&VPA1<2.34 ){ val0  = map(val,0, 950, 0 , 255);  v1 =  val0+58; v = v1*1.28;analogWrite(5,val0);analogWrite(6,v);}
   if (VPA1 >=2.34&&VPA1<2.38 ){ val0  = map(val,0, 900, 0 , 255);  v1 =  val0+58; v = v1*1.28;analogWrite(5,val0);analogWrite(6,v);}
   if (VPA1 >=2.38&&VPA1<2.45 ){ val0  = map(val,0, 870, 0 , 255);  v1 =  val0+58; v = v1*1.28;analogWrite(5,val0);analogWrite(6,v);}
   if (VPA1 >=2.45&&VPA1<2.48 ){ val0  = map(val,0, 850, 0 , 255);  v1 =  val0+58; v = v1*1.28;analogWrite(5,val0);analogWrite(6,v);}
   if (VPA1 >=2.48&&VPA1<2.51 ){ val0  = map(val,0, 830, 0 , 255);  v1 =  val0+58; v = v1*1.28;analogWrite(5,val0);analogWrite(6,v);}
   if (VPA1 >=2.51&&VPA1<4){ val0  = map(val,0, 810, 0 , 255);  v1 =  val0+58; v = v1*1.28;analogWrite(5,val0);analogWrite(6,v);}
   if (VPA1 >=4&&VPA1<4.55 ){ analogWrite(5,131);analogWrite(6,231);}
   if (VPA1 >=4.55){ val0  = map(val,0, 1023, 0 , 255);v  = map(val1,0, 1023, 0 , 255);analogWrite(5,val0);analogWrite(6,v);}
 }
    if (q5==1){
   if (VPA1 <2.3){  val0  = map(val,0, 1023, 0 , 255);  v1 =  val0+58; v = v1*1.28;analogWrite(5,val0);analogWrite(6,v);}
   if (VPA1 >=2.3&&VPA1<2.34 ){ val0  = map(val,0, 950, 0 , 255);  v1 =  val0+58; v = v1*1.28;analogWrite(5,val0);analogWrite(6,v);}
   if (VPA1 >=2.34&&VPA1<2.38 ){ val0  = map(val,0, 900, 0 , 255);  v1 =  val0+58; v = v1*1.28;analogWrite(5,val0);analogWrite(6,v);}
   if (VPA1 >=2.38&&VPA1<2.45 ){ val0  = map(val,0, 870, 0 , 255);  v1 =  val0+58; v = v1*1.28;analogWrite(5,val0);analogWrite(6,v);}
   if (VPA1 >=2.45&&VPA1<2.48 ){ val0  = map(val,0, 850, 0 , 255);  v1 =  val0+58; v = v1*1.28;analogWrite(5,val0);analogWrite(6,v);}
   if (VPA1 >=2.48&&VPA1<2.51 ){ val0  = map(val,0, 830, 0 , 255);  v1 =  val0+58; v = v1*1.28;analogWrite(5,val0);analogWrite(6,v);}
   if (VPA1 >=2.51&&VPA1<2.54 ){ val0  = map(val,0, 810, 0 , 255);  v1 =  val0+58; v = v1*1.28;analogWrite(5,val0);analogWrite(6,v);}
   if (VPA1 >=2.54&&VPA1<2.6 ) { val0  = map(val,0, 795, 0 , 255);  v1 =  val0+58; v = v1*1.28;analogWrite(5,val0);analogWrite(6,v);}
   if (VPA1 >=2.6&& VPA1<4)    { val0  = map(val,0, 780, 0 , 255);  v1 =  val0+58; v = v1*1.28;analogWrite(5,val0);analogWrite(6,v);}
   if (VPA1 >=4&&VPA1<4.7 ){ analogWrite(5,122);analogWrite(6,230);}
   if (VPA1>=4.7){ val0  = map(val,0, 1023, 0 , 255);v  = map(val1,0, 1023, 0 , 255);analogWrite(5,val0);analogWrite(6,v);}
 }
 
   if (q6==1)
   {
   if (VPA1 <2.3){  val0  = map(val,0, 1023, 0 , 255);  v1 =  val0+58; v = v1*1.28;analogWrite(5,val0);analogWrite(6,v);}
   if (VPA1 >=2.3&&VPA1<2.34 ){ val0  = map(val,0, 950, 0 , 255);  v1 =  val0+58; v = v1*1.28;analogWrite(5,val0);analogWrite(6,v);}
   if (VPA1 >=2.34&&VPA1<2.38 ){ val0  = map(val,0, 900, 0 , 255);  v1 =  val0+58; v = v1*1.28;analogWrite(5,val0);analogWrite(6,v);}
   if (VPA1 >=2.38&&VPA1<2.45 ){ val0  = map(val,0, 870, 0 , 255);  v1 =  val0+58; v = v1*1.28;analogWrite(5,val0);analogWrite(6,v);}
   if (VPA1 >=2.45&&VPA1<2.48 ){ val0  = map(val,0, 850, 0 , 255);  v1 =  val0+58; v = v1*1.28;analogWrite(5,val0);analogWrite(6,v);}
   if (VPA1 >=2.48&&VPA1<2.61 ){ val0  = map(val,0, 830, 0 , 255);  v1 =  val0+58; v = v1*1.28;analogWrite(5,val0);analogWrite(6,v);}
   if (VPA1 >=2.61&&VPA1<2.64 ){ val0  = map(val,0, 810, 0 , 255);  v1 =  val0+58; v = v1*1.28;analogWrite(5,val0);analogWrite(6,v);}
   if (VPA1 >=2.64&&VPA1<2.67 ){ val0  = map(val,0, 795, 0 , 255);  v1 =  val0+58; v = v1*1.28;analogWrite(5,val0);analogWrite(6,v);}
   if (VPA1 >=2.67&&VPA1<2.7 ) { val0  = map(val,0, 780, 0 , 255);  v1 =  val0+58; v = v1*1.28;analogWrite(5,val0);analogWrite(6,v);}
   if (VPA1 >=2.7 &&VPA1<2.7 ) { val0  = map(val,0, 765, 0 , 255);  v1 =  val0+58; v = v1*1.28;analogWrite(5,val0);analogWrite(6,v);}
   if (VPA1 >=2.7&&VPA1<3.6)   { val0  = map(val,0, 750, 0 , 255);  v1 =  val0+58; v = v1*1.28;analogWrite(5,val0);analogWrite(6,v);}
   if (VPA1 >=3.6&&VPA1<4.7 ){ analogWrite(5,122);analogWrite(6,230);}
   if (VPA1>=4.7)          { val0  = map(val,0, 1023, 0 , 255);v  = map(val1,0, 1023, 0 , 255);analogWrite(5,val0);analogWrite(6,v);}
 }
     if (q7==1){
   if (VPA1 <2.3){  val0  = map(val,0, 1023, 0 , 255);  v1 =  val0+58; v = v1*1.28;analogWrite(5,val0);analogWrite(6,v);}
   if (VPA1 >=2.3&&VPA1<2.34 ){ val0  = map(val,0, 950, 0 , 255);  v1 =  val0+58; v = v1*1.28;analogWrite(5,val0);analogWrite(6,v);}
   if (VPA1 >=2.34&&VPA1<2.38 ){ val0  = map(val,0, 900, 0 , 255);  v1 =  val0+58; v = v1*1.28;analogWrite(5,val0);analogWrite(6,v);}
   if (VPA1 >=2.38&&VPA1<2.35 ){ val0  = map(val,0, 870, 0 , 255);  v1 =  val0+58; v = v1*1.28;analogWrite(5,val0);analogWrite(6,v);}
   if (VPA1 >=2.35&&VPA1<2.38 ){ val0  = map(val,0, 850, 0 , 255);  v1 =  val0+58; v = v1*1.28;analogWrite(5,val0);analogWrite(6,v);}
   if (VPA1 >=2.38&&VPA1<2.51 ){ val0  = map(val,0, 830, 0 , 255);  v1 =  val0+58; v = v1*1.28;analogWrite(5,val0);analogWrite(6,v);}
   if (VPA1 >=2.51&&VPA1<2.54 ){ val0  = map(val,0, 810, 0 , 255);  v1 =  val0+58; v = v1*1.28;analogWrite(5,val0);analogWrite(6,v);}
   if (VPA1 >=2.54&&VPA1<2.57 ){ val0  = map(val,0, 795, 0 , 255);  v1 =  val0+58; v = v1*1.28;analogWrite(5,val0);analogWrite(6,v);}
   if (VPA1 >=2.57&&VPA1<2.59 ){ val0  = map(val,0, 780, 0 , 255);  v1 =  val0+58; v = v1*1.28;analogWrite(5,val0);analogWrite(6,v);}
   if (VPA1 >=2.59&&VPA1<2.61 ){ val0  = map(val,0, 765, 0 , 255);  v1 =  val0+58; v = v1*1.28;analogWrite(5,val0);analogWrite(6,v);}
   if (VPA1 >=2.61&&VPA1<2.63 ){ val0  = map(val,0, 750, 0 , 255);  v1 =  val0+58; v = v1*1.28;analogWrite(5,val0);analogWrite(6,v);}
   if (VPA1 >=2.63&&VPA1<2.65 ){ val0  = map(val,0, 740, 0 , 255);  v1 =  val0+58; v = v1*1.28;analogWrite(5,val0);analogWrite(6,v);}
   if (VPA1 >=2.65&&VPA1<3.70){ val0  = map(val,0, 730, 0 , 255);  v1 =  val0+58; v = v1*1.28;analogWrite(5,val0);analogWrite(6,v);}
   if (VPA1 >=3.70&&VPA1<4.6 ){ analogWrite(5,122);analogWrite(6,230);}
   if (VPA1>=4.6){ val0  = map(val,0, 1023, 0 , 255);v  = map(val1,0, 1023, 0 , 255);analogWrite(5,val0);analogWrite(6,v);}
 }
     if (q8==1){
   if (VPA1 <2.3){  val0  = map(val,0, 1023, 0 , 255);  v1 =  val0+58; v = v1*1.28;analogWrite(5,val0);analogWrite(6,v);}
   if (VPA1 >=2.3&&VPA1<2.34 ){ val0  = map(val,0, 950, 0 , 255);  v1 =  val0+58; v = v1*1.28;analogWrite(5,val0);analogWrite(6,v);}
   if (VPA1 >=2.34&&VPA1<2.38 ){ val0  = map(val,0, 900, 0 , 255);  v1 =  val0+58; v = v1*1.28;analogWrite(5,val0);analogWrite(6,v);}
   if (VPA1 >=2.38&&VPA1<2.42 ){ val0  = map(val,0, 870, 0 , 255);  v1 =  val0+58; v = v1*1.28;analogWrite(5,val0);analogWrite(6,v);}
   if (VPA1 >=2.42&&VPA1<2.48 ){ val0  = map(val,0, 850, 0 , 255);  v1 =  val0+58; v = v1*1.28;analogWrite(5,val0);analogWrite(6,v);}
   if (VPA1 >=2.48&&VPA1<2.51 ){ val0  = map(val,0, 830, 0 , 255);  v1 =  val0+58; v = v1*1.28;analogWrite(5,val0);analogWrite(6,v);}
   if (VPA1 >=2.51&&VPA1<2.54 ){ val0  = map(val,0, 810, 0 , 255);  v1 =  val0+58; v = v1*1.28;analogWrite(5,val0);analogWrite(6,v);}
   if (VPA1 >=2.54&&VPA1<2.57 ){ val0  = map(val,0, 795, 0 , 255);  v1 =  val0+58; v = v1*1.28;analogWrite(5,val0);analogWrite(6,v);}
   if (VPA1 >=2.57&&VPA1<2.59 ){ val0  = map(val,0, 780, 0 , 255);  v1 =  val0+58; v = v1*1.28;analogWrite(5,val0);analogWrite(6,v);}
   if (VPA1 >=2.59&&VPA1<2.61 ){ val0  = map(val,0, 765, 0 , 255);  v1 =  val0+58; v = v1*1.28;analogWrite(5,val0);analogWrite(6,v);}
   if (VPA1 >=2.61&&VPA1<2.63 ){ val0  = map(val,0, 750, 0 , 255);  v1 =  val0+58; v = v1*1.28;analogWrite(5,val0);analogWrite(6,v);}
   if (VPA1 >=2.63&&VPA1<2.65 ){ val0  = map(val,0, 740, 0 , 255);  v1 =  val0+58; v = v1*1.28;analogWrite(5,val0);analogWrite(6,v);}
   if (VPA1 >=2.65&&VPA1<2.67 ){ val0  = map(val,0, 730, 0 , 255);  v1 =  val0+58; v = v1*1.28;analogWrite(5,val0);analogWrite(6,v);}
   if (VPA1 >=2.67&&VPA1<2.69 ){ val0  = map(val,0, 720, 0 , 255);  v1 =  val0+58; v = v1*1.28;analogWrite(5,val0);analogWrite(6,v);}
   if (VPA1 >=2.69&&VPA1<3.60){ val0  = map(val,0, 710, 0 , 255);  v1 =  val0+58; v = v1*1.28;analogWrite(5,val0);analogWrite(6,v);}
   if (VPA1 >=3.60&&VPA1<4.6 ){ analogWrite(5,122);analogWrite(6,230);}
   if (VPA1>=4.6){ val0  = map(val,0, 1023, 0 , 255);v  = map(val1,0, 1023, 0 , 255);analogWrite(5,val0);analogWrite(6,v);}
 }
 
     if (q9==1){
   if (VPA1 <2.3){  val0  = map(val,0, 1023, 0 , 255);  v1 =  val0+58; v = v1*1.28;analogWrite(5,val0);analogWrite(6,v);}
   if (VPA1 >=2.3&&VPA1<2.34 ){ val0  = map(val,0, 950, 0 , 255);  v1 =  val0+58; v = v1*1.28;analogWrite(5,val0);analogWrite(6,v);}
   if (VPA1 >=2.34&&VPA1<2.38 ){ val0  = map(val,0, 900, 0 , 255);  v1 =  val0+58; v = v1*1.28;analogWrite(5,val0);analogWrite(6,v);}
   if (VPA1 >=2.38&&VPA1<2.45 ){ val0  = map(val,0, 870, 0 , 255);  v1 =  val0+58; v = v1*1.28;analogWrite(5,val0);analogWrite(6,v);}
   if (VPA1 >=2.45&&VPA1<2.48 ){ val0  = map(val,0, 850, 0 , 255);  v1 =  val0+58; v = v1*1.28;analogWrite(5,val0);analogWrite(6,v);}
   if (VPA1 >=2.48&&VPA1<2.51 ){ val0  = map(val,0, 830, 0 , 255);  v1 =  val0+58; v = v1*1.28;analogWrite(5,val0);analogWrite(6,v);} 
   if (VPA1 >=2.51&&VPA1<2.54 ){ val0  = map(val,0, 810, 0 , 255);  v1 =  val0+58; v = v1*1.28;analogWrite(5,val0);analogWrite(6,v);}
   if (VPA1 >=2.54&&VPA1<2.57 ){ val0  = map(val,0, 795, 0 , 255);  v1 =  val0+58; v = v1*1.28;analogWrite(5,val0);analogWrite(6,v);}
   if (VPA1 >=2.57&&VPA1<2.59 ){ val0  = map(val,0, 780, 0 , 255);  v1 =  val0+58; v = v1*1.28;analogWrite(5,val0);analogWrite(6,v);}
   if (VPA1 >=2.59&&VPA1<2.61 ){ val0  = map(val,0, 765, 0 , 255);  v1 =  val0+58; v = v1*1.28;analogWrite(5,val0);analogWrite(6,v);}
   if (VPA1 >=2.61&&VPA1<2.63 ){ val0  = map(val,0, 750, 0 , 255);  v1 =  val0+58; v = v1*1.28;analogWrite(5,val0);analogWrite(6,v);}
   if (VPA1 >=2.63&&VPA1<2.65 ){ val0  = map(val,0, 735, 0 , 255);  v1 =  val0+58; v = v1*1.28;analogWrite(5,val0);analogWrite(6,v);}
   if (VPA1 >=2.65&&VPA1<2.67 ){ val0  = map(val,0, 710, 0 , 255);  v1 =  val0+58; v = v1*1.28;analogWrite(5,val0);analogWrite(6,v);}
   if (VPA1 >=2.67&&VPA1<2.69 ){ val0  = map(val,0, 695, 0 , 255);  v1 =  val0+58; v = v1*1.28;analogWrite(5,val0);analogWrite(6,v);}
   if (VPA1 >=2.69&&VPA1<2.71 ){ val0  = map(val,0, 685, 0 , 255);  v1 =  val0+58; v = v1*1.28;analogWrite(5,val0);analogWrite(6,v);}
   if (VPA1 >=2.71&&VPA1<2.75 ){ val0  = map(val,0, 670, 0 , 255);  v1 =  val0+58; v = v1*1.28;analogWrite(5,val0);analogWrite(6,v);}
   if (VPA1 >=2.75&&VPA1<3.6 ){ val0  = map(val,0, 655, 0 , 255);  v1 =  val0+58; v = v1*1.28;analogWrite(5,val0);analogWrite(6,v);}
   if (VPA1 >=3.6&&VPA1<4.67 ){ analogWrite(5,131);analogWrite(6,241);}
   if (VPA1>=4.67){ val0  = map(val,0, 1023, 0 , 255);v  = map(val1,0, 1023, 0 , 255);analogWrite(5,val0);analogWrite(6,v);}
 }
//Serial.println(val0);Serial.println(v);
}
