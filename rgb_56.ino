//create arrays
//
int RED[56];
int GREEN[56];
int BLUE[56];
//
//pin map MEGA
//int clockpin = 41;
//int datapin = 37;
//pin map UNO
int clockpin = 2;
int datapin = 3;
//setup code
void setup()
{
pinMode(clockpin, OUTPUT);
pinMode(datapin, OUTPUT);
for (int i=0;i<56;i++)
{
RED[i]=0;
GREEN[i]=0;
BLUE[i]=0;
}
}
void updatestring()
{
for(int i=0;i<56;i++)
{
shiftOut(datapin, clockpin, MSBFIRST, RED[i]);
shiftOut(datapin, clockpin, MSBFIRST, GREEN[i]);
shiftOut(datapin, clockpin, MSBFIRST, BLUE[i]);
}
}
void loop()
{
for(int i=0;i<500;i++){
int k=random(0,56);
RED[k]=255;GREEN[k]=255;BLUE[k]=255;
updatestring();
RED[k]=0;GREEN[k]=0;BLUE[k]=0;
delay(1);
}
for(int i=0;i<56;i++){
RED[i]=255;GREEN[i]=255;BLUE[i]=255;
updatestring();
RED[i]=255;GREEN[i]=255;BLUE[i]=255;
delay(1);
}
for(int i=55;i>-1;i--){
RED[i]=255;GREEN[i]=0;BLUE[i]=0;
updatestring();
RED[i]=255;GREEN[i]=0;BLUE[i]=0;
delay(1);
}
for(int i=0;i<56;i++){
RED[i]=255;GREEN[i]=255;BLUE[i]=0;
updatestring();
RED[i]=255;GREEN[i]=255;BLUE[i]=0;
delay(1);
}
for(int i=55;i>-1;i--){
RED[i]=0;GREEN[i]=-1;BLUE[i]=255;
updatestring();
RED[i]=0;GREEN[i]=0;BLUE[i]=255;
delay(1);
}
for(int i=0;i<56;i++){
RED[i]=0;GREEN[i]=255;BLUE[i]=0;
updatestring();
RED[i]=0;GREEN[i]=255;BLUE[i]=0;
delay(1);
}
for(int i=55;i>-1;i--){
RED[i]=255;GREEN[i]=0;BLUE[i]=255;
updatestring();
RED[i]=255;GREEN[i]=0;BLUE[i]=255;
delay(1);
}
for(int i=0;i<56;i++){
RED[i]=255;GREEN[i]=255;BLUE[i]=255;
updatestring();
RED[i]=0;GREEN[i]=0;BLUE[i]=0;
delay(1);
}
for(int i=55;i>-1;i--){
RED[i]=255;GREEN[i]=0;BLUE[i]=0;
updatestring();
RED[i]=0;GREEN[i]=0;BLUE[i]=0;
delay(1);
}
for(int i=0;i<56;i++){
RED[i]=255;GREEN[i]=255;BLUE[i]=0;
updatestring();
RED[i]=0;GREEN[i]=0;BLUE[i]=0;
delay(1);
}
for(int i=55;i>-1;i--){
RED[i]=0;GREEN[i]=0;BLUE[i]=255;
updatestring();
RED[i]=0;GREEN[i]=0;BLUE[i]=0;
delay(1);
}
for(int i=0;i<56;i++){
RED[i]=0;GREEN[i]=255;BLUE[i]=0;
updatestring();
RED[i]=0;GREEN[i]=0;BLUE[i]=0;
delay(1);
}
for(int i=55;i>-1;i--){
RED[i]=255;GREEN[i]=0;BLUE[i]=255;
updatestring();
RED[i]=0;GREEN[i]=0;BLUE[i]=0;
delay(1);
}
//Abschluss
for(int i=0;i<56;i++){
RED[i]=0;GREEN[i]=0;BLUE[i]=0;
updatestring();
RED[i]=0;GREEN[i]=0;BLUE[i]=0;
delay(1);
}
for(int i=0;i<100;i++){
int k=random(0,56);
RED[k]=255;GREEN[k]=0;BLUE[k]=0;
updatestring();
RED[k]=0;GREEN[k]=0;BLUE[k]=0;
delay(1);
}
for(int i=0;i<100;i++){
int k=random(0,56);
RED[k]=0;GREEN[k]=255;BLUE[k]=0;
updatestring();
RED[k]=0;GREEN[k]=0;BLUE[k]=0;
delay(1);
}
for(int i=0;i<100;i++){
int k=random(0,56);
RED[k]=0;GREEN[k]=0;BLUE[k]=255;
updatestring();
RED[k]=0;GREEN[k]=0;BLUE[k]=0;
delay(1);
}
for(int i=0;i<100;i++){
int k=random(0,56);
RED[k]=255;GREEN[k]=255;BLUE[k]=0;
updatestring();
RED[k]=0;GREEN[k]=0;BLUE[k]=0;
delay(1);
}
for(int i=0;i<18;i++){
RED[i]=255;GREEN[i]=0;BLUE[i]=0;
updatestring();
RED[i]=255;GREEN[i]=0;BLUE[i]=0;
delay(1);
}
for(int i=19;i<37;i++){
RED[i]=0;GREEN[i]=255;BLUE[i]=0;
updatestring();
RED[i]=0;GREEN[i]=255;BLUE[i]=0;
delay(1);
}
for(int i=38;i<56;i++){
RED[i]=0;GREEN[i]=0;BLUE[i]=255;
updatestring();
RED[i]=0;GREEN[i]=0;BLUE[i]=255;
delay(1);
}
//Abschluss
for(int i=0;i<56;i++){
RED[i]=0;GREEN[i]=0;BLUE[i]=0;
updatestring();
RED[i]=0;GREEN[i]=0;BLUE[i]=0;
delay(1);
}
for(int i=0;i<112;i++){
int k=random(0,56);
RED[k]=255;GREEN[k]=255;BLUE[k]=255;
updatestring();
RED[k]=0;GREEN[k]=0;BLUE[k]=0;
delay(10);
k=random(0,56);
RED[k]=255;GREEN[k]=0;BLUE[k]=0;
updatestring();
RED[k]=0;GREEN[k]=0;BLUE[k]=0;
delay(10);
k=random(0,56);
RED[k]=0;GREEN[k]=255;BLUE[k]=0;
updatestring();
RED[k]=0;GREEN[k]=0;BLUE[k]=0;
delay(10);
k=random(0,56);
RED[k]=0;GREEN[k]=0;BLUE[k]=255;
updatestring();
RED[k]=0;GREEN[k]=0;BLUE[k]=0;
delay(10);
}
//Abschluss
for(int i=0;i<56;i++){
RED[i]=0;GREEN[i]=0;BLUE[i]=0;
updatestring();
RED[i]=0;GREEN[i]=0;BLUE[i]=0;
delay(1);
}
for(int i=0;i<56;i++){
RED[i]=255;GREEN[i]=255;BLUE[i]=255;
updatestring();
RED[i]=255;GREEN[i]=255;BLUE[i]=255;
delay(20);
}
for(int i=0;i<56;i++){
RED[i]=255;GREEN[i]=0;BLUE[i]=0;
updatestring();
RED[i]=255;GREEN[i]=0;BLUE[i]=0;
delay(20);
}
for(int i=0;i<56;i++){
RED[i]=0;GREEN[i]=255;BLUE[i]=0;
updatestring();
RED[i]=0;GREEN[i]=255;BLUE[i]=0;
delay(20);
}
for(int i=0;i<56;i++){
RED[i]=0;GREEN[i]=0;BLUE[i]=255;
updatestring();
RED[i]=0;GREEN[i]=0;BLUE[i]=255;
delay(20);
}
//Abschluss
for(int i=0;i<56;i++){
RED[i]=0;GREEN[i]=0;BLUE[i]=0;
updatestring();
RED[i]=0;GREEN[i]=0;BLUE[i]=0;
delay(10);
}
for(int i=0;i<56;i+=2){
RED[i]=255;GREEN[i]=255;BLUE[i]=255;
updatestring();
RED[i]=255;GREEN[i]=255;BLUE[i]=255;
delay(10);
}
for(int i=1;i<55;i+=2){
RED[i]=0;GREEN[i]=255;BLUE[i]=0;
updatestring();
RED[i]=0;GREEN[i]=255;BLUE[i]=0;
delay(10);
}
for(int i=0;i<56;i+=2){
RED[i]=255;GREEN[i]=0;BLUE[i]=0;
updatestring();
RED[i]=255;GREEN[i]=0;BLUE[i]=0;
delay(10);
}
for(int i=1;i<55;i+=2){
RED[i]=0;GREEN[i]=0;BLUE[i]=255;
updatestring();
RED[i]=0;GREEN[i]=0;BLUE[i]=255;
delay(10);
}
for(int i=0;i<56;i+=2){
RED[i]=255;GREEN[i]=255;BLUE[i]=0;
updatestring();
RED[i]=255;GREEN[i]=255;BLUE[i]=0;
delay(10);
}
}

