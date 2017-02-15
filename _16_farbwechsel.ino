//create arrays
int RED[16];
int GREEN[16];
int BLUE[16];
//
//pin map MEGA
//int clockpin = 41;
//int datapin = 37;
//pin map UNO
int clockpin = 2;
int datapin = 3;
//
//setup code
void setup()
{
pinMode(clockpin, OUTPUT);
pinMode(datapin, OUTPUT);
for (int i=0;i<16;i++)
{
RED[i]=0;
GREEN[i]=0;
BLUE[i]=0;
}
}
//
void updatestring()
{
for(int i=0;i<16;i++)
{
shiftOut(datapin, clockpin, MSBFIRST, RED[i]);
shiftOut(datapin, clockpin, MSBFIRST, GREEN[i]);
shiftOut(datapin, clockpin, MSBFIRST, BLUE[i]);
}
}
//
void loop()
{

for(int i=0;i<50;i++){
RED[0]=50;GREEN[0]=i;BLUE[0]=0;
RED[1]=50;GREEN[1]=i;BLUE[1]=0;
RED[2]=50;GREEN[2]=i;BLUE[2]=0;
RED[3]=50;GREEN[3]=i;BLUE[3]=0;
RED[4]=50;GREEN[4]=i;BLUE[4]=0;
RED[5]=50;GREEN[5]=i;BLUE[5]=0;
RED[6]=50;GREEN[6]=i;BLUE[6]=0;
RED[7]=50;GREEN[7]=i;BLUE[7]=0;
RED[8]=50;GREEN[8]=i;BLUE[8]=0;
RED[9]=50;GREEN[9]=i;BLUE[9]=0;
RED[10]=50;GREEN[10]=i;BLUE[10]=0;
RED[11]=50;GREEN[11]=i;BLUE[11]=0;
RED[12]=50;GREEN[12]=i;BLUE[12]=0;
RED[13]=50;GREEN[13]=i;BLUE[13]=0;
RED[14]=50;GREEN[14]=i;BLUE[14]=0;
RED[15]=50;GREEN[15]=i;BLUE[15]=0;
updatestring();
RED[i]=50;GREEN[i]=50;BLUE[i]=0;
delay(20);
}
for(int i=49;i>-1;i--){
RED[0]=i;GREEN[0]=50;BLUE[0]=0;
RED[1]=i;GREEN[1]=50;BLUE[1]=0;
RED[2]=i;GREEN[2]=50;BLUE[2]=0;
RED[3]=i;GREEN[3]=50;BLUE[3]=0;
RED[4]=i;GREEN[4]=50;BLUE[4]=0;
RED[5]=i;GREEN[5]=50;BLUE[5]=0;
RED[6]=i;GREEN[6]=50;BLUE[6]=0;
RED[7]=i;GREEN[7]=50;BLUE[7]=0;
RED[8]=i;GREEN[8]=50;BLUE[8]=0;
RED[9]=i;GREEN[9]=50;BLUE[9]=0;
RED[10]=i;GREEN[10]=50;BLUE[10]=0;
RED[11]=i;GREEN[11]=50;BLUE[11]=0;
RED[12]=i;GREEN[12]=50;BLUE[12]=0;
RED[13]=i;GREEN[13]=50;BLUE[13]=0;
RED[14]=i;GREEN[14]=50;BLUE[14]=0;
RED[15]=i;GREEN[15]=50;BLUE[15]=0;
updatestring();
RED[i]=0;GREEN[i]=50;BLUE[i]=0;
delay(20);
}
for(int i=0;i<50;i++){
RED[0]=0;GREEN[0]=50;BLUE[0]=i;
RED[1]=0;GREEN[1]=50;BLUE[1]=i;
RED[2]=0;GREEN[2]=50;BLUE[2]=i;
RED[3]=0;GREEN[3]=50;BLUE[3]=i;
RED[4]=0;GREEN[4]=50;BLUE[4]=i;
RED[5]=0;GREEN[5]=50;BLUE[5]=i;
RED[6]=0;GREEN[6]=50;BLUE[6]=i;
RED[7]=0;GREEN[7]=50;BLUE[7]=i;
RED[8]=0;GREEN[8]=50;BLUE[8]=i;
RED[9]=0;GREEN[9]=50;BLUE[9]=i;
RED[10]=0;GREEN[10]=50;BLUE[10]=i;
RED[11]=0;GREEN[11]=50;BLUE[11]=i;
RED[12]=0;GREEN[12]=50;BLUE[12]=i;
RED[13]=0;GREEN[13]=50;BLUE[13]=i;
RED[14]=0;GREEN[14]=50;BLUE[14]=i;
RED[15]=0;GREEN[15]=50;BLUE[15]=i;
updatestring();
RED[i]=0;GREEN[i]=50;BLUE[i]=50;
delay(20);
}
for(int i=49;i>-1;i--){
RED[0]=0;GREEN[0]=i;BLUE[0]=50;
RED[1]=0;GREEN[1]=i;BLUE[1]=50;
RED[2]=0;GREEN[2]=i;BLUE[2]=50;
RED[3]=0;GREEN[3]=i;BLUE[3]=50;
RED[4]=0;GREEN[4]=i;BLUE[4]=50;
RED[5]=0;GREEN[5]=i;BLUE[5]=50;
RED[6]=0;GREEN[6]=i;BLUE[6]=50;
RED[7]=0;GREEN[7]=i;BLUE[7]=50;
RED[8]=0;GREEN[8]=i;BLUE[8]=50;
RED[9]=0;GREEN[9]=i;BLUE[9]=50;
RED[10]=0;GREEN[10]=i;BLUE[10]=50;
RED[11]=0;GREEN[11]=i;BLUE[11]=50;
RED[12]=0;GREEN[12]=i;BLUE[12]=50;
RED[13]=0;GREEN[13]=i;BLUE[13]=50;
RED[14]=0;GREEN[14]=i;BLUE[14]=50;
RED[15]=0;GREEN[15]=i;BLUE[15]=50;
updatestring();
RED[i]=0;GREEN[i]=0;BLUE[i]=50;
delay(20);
}
for(int i=0;i<50;i++){
RED[0]=i;GREEN[0]=0;BLUE[0]=50;
RED[1]=i;GREEN[1]=0;BLUE[1]=50;
RED[2]=i;GREEN[2]=0;BLUE[2]=50;
RED[3]=i;GREEN[3]=0;BLUE[3]=50;
RED[4]=i;GREEN[4]=0;BLUE[4]=50;
RED[5]=i;GREEN[5]=0;BLUE[5]=50;
RED[6]=i;GREEN[6]=0;BLUE[6]=50;
RED[7]=i;GREEN[7]=0;BLUE[7]=50;
RED[8]=i;GREEN[8]=0;BLUE[8]=50;
RED[9]=i;GREEN[9]=0;BLUE[9]=50;
RED[10]=i;GREEN[10]=0;BLUE[10]=50;
RED[11]=i;GREEN[11]=0;BLUE[11]=50;
RED[12]=i;GREEN[12]=0;BLUE[12]=50;
RED[13]=i;GREEN[13]=0;BLUE[13]=50;
RED[14]=i;GREEN[14]=0;BLUE[14]=50;
RED[15]=i;GREEN[15]=0;BLUE[15]=50;
updatestring();
RED[i]=50;GREEN[i]=0;BLUE[i]=50;
delay(20);
}
for(int i=49;i>-1;i--){
RED[0]=50;GREEN[0]=0;BLUE[0]=i;
RED[1]=50;GREEN[1]=0;BLUE[1]=i;
RED[2]=50;GREEN[2]=0;BLUE[2]=i;
RED[3]=50;GREEN[3]=0;BLUE[3]=i;
RED[4]=50;GREEN[4]=0;BLUE[4]=i;
RED[5]=50;GREEN[5]=0;BLUE[5]=i;
RED[6]=50;GREEN[6]=0;BLUE[6]=i;
RED[7]=50;GREEN[7]=0;BLUE[7]=i;
RED[8]=50;GREEN[8]=0;BLUE[8]=i;
RED[9]=50;GREEN[9]=0;BLUE[9]=i;
RED[10]=50;GREEN[10]=0;BLUE[10]=i;
RED[11]=50;GREEN[11]=0;BLUE[11]=i;
RED[12]=50;GREEN[12]=0;BLUE[12]=i;
RED[13]=50;GREEN[13]=0;BLUE[13]=i;
RED[14]=50;GREEN[14]=0;BLUE[14]=i;
RED[15]=50;GREEN[15]=0;BLUE[15]=i;
updatestring();
RED[i]=50;GREEN[i]=0;BLUE[i]=0;
delay(20);
}
for(int i=0;i<50;i++){
RED[0]=50;GREEN[0]=i;BLUE[0]=i;
RED[1]=50;GREEN[1]=i;BLUE[1]=i;
RED[2]=50;GREEN[2]=i;BLUE[2]=i;
RED[3]=50;GREEN[3]=i;BLUE[3]=i;
RED[4]=50;GREEN[4]=i;BLUE[4]=i;
RED[5]=50;GREEN[5]=i;BLUE[5]=i;
RED[6]=50;GREEN[6]=i;BLUE[6]=i;
RED[7]=50;GREEN[7]=i;BLUE[7]=i;
RED[8]=50;GREEN[8]=i;BLUE[8]=i;
RED[9]=50;GREEN[9]=i;BLUE[9]=i;
RED[10]=50;GREEN[10]=i;BLUE[10]=i;
RED[11]=50;GREEN[11]=i;BLUE[11]=i;
RED[12]=50;GREEN[12]=i;BLUE[12]=i;
RED[13]=50;GREEN[13]=i;BLUE[13]=i;
RED[14]=50;GREEN[14]=i;BLUE[14]=i;
RED[15]=50;GREEN[15]=i;BLUE[15]=i;
updatestring();
RED[i]=50;GREEN[i]=50;BLUE[i]=50;
delay(20);
}
for(int i=49;i>-1;i--){
RED[0]=50;GREEN[0]=i;BLUE[0]=i;
RED[1]=50;GREEN[1]=i;BLUE[1]=i;
RED[2]=50;GREEN[2]=i;BLUE[2]=i;
RED[3]=50;GREEN[3]=i;BLUE[3]=i;
RED[4]=50;GREEN[4]=i;BLUE[4]=i;
RED[5]=50;GREEN[5]=i;BLUE[5]=i;
RED[6]=50;GREEN[6]=i;BLUE[6]=i;
RED[7]=50;GREEN[7]=i;BLUE[7]=i;
RED[8]=50;GREEN[8]=i;BLUE[8]=i;
RED[9]=50;GREEN[9]=i;BLUE[9]=i;
RED[10]=50;GREEN[10]=i;BLUE[10]=i;
RED[11]=50;GREEN[11]=i;BLUE[11]=i;
RED[12]=50;GREEN[12]=i;BLUE[12]=i;
RED[13]=50;GREEN[13]=i;BLUE[13]=i;
RED[14]=50;GREEN[14]=i;BLUE[14]=i;
RED[15]=50;GREEN[15]=i;BLUE[15]=i;
updatestring();
RED[i]=50;GREEN[i]=0;BLUE[i]=0;
delay(20);
}
}





