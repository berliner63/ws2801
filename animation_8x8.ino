///////////////create arrays
int RED[64];
int GREEN[64];
int BLUE[64];
///////////////pin map MEGA
int clockpin = 41;
int datapin = 37;
//pin map UNO
//int clockpin = 2;
//int datapin = 3;
//setup code
void setup()
{
pinMode(clockpin, OUTPUT);
pinMode(datapin, OUTPUT);
for (int i=0;i<64;i++)
{
RED[i]=0;
GREEN[i]=0;
BLUE[i]=0;
}
}
void updatestring()
{
for(int i=0;i<64;i++)
{
shiftOut(datapin, clockpin, MSBFIRST, RED[i]);
shiftOut(datapin, clockpin, MSBFIRST, GREEN[i]);
shiftOut(datapin, clockpin, MSBFIRST, BLUE[i]);
}
}
void loop()
{
for(int i=0;i<64;i++){
RED[27]=0;GREEN[27]=0;BLUE[27]=255;
RED[28]=0;GREEN[28]=0;BLUE[28]=255;
RED[35]=0;GREEN[35]=0;BLUE[35]=255;
RED[36]=0;GREEN[36]=0;BLUE[36]=255;
RED[21]=255;GREEN[21]=0;BLUE[21]=0;
RED[26]=255;GREEN[26]=0;BLUE[26]=0;
RED[37]=255;GREEN[37]=0;BLUE[37]=0;
RED[42]=255;GREEN[42]=0;BLUE[42]=0;
RED[43]=255;GREEN[43]=0;BLUE[43]=0;
RED[44]=255;GREEN[44]=0;BLUE[44]=0;
RED[45]=255;GREEN[45]=0;BLUE[45]=0;
RED[34]=255;GREEN[34]=0;BLUE[34]=0;
RED[29]=255;GREEN[29]=0;BLUE[29]=0;
RED[18]=255;GREEN[18]=0;BLUE[18]=0;
RED[19]=255;GREEN[19]=0;BLUE[19]=0;
RED[20]=255;GREEN[20]=0;BLUE[20]=0;
RED[9]=0;GREEN[9]=255;BLUE[9]=0;
RED[22]=0;GREEN[22]=255;BLUE[22]=0;
RED[25]=0;GREEN[25]=255;BLUE[25]=0;
RED[38]=0;GREEN[38]=255;BLUE[38]=0;
RED[41]=0;GREEN[41]=255;BLUE[41]=0;
RED[54]=0;GREEN[54]=255;BLUE[54]=0;
RED[53]=0;GREEN[53]=255;BLUE[53]=0;
RED[52]=0;GREEN[52]=255;BLUE[52]=0;
RED[51]=0;GREEN[51]=255;BLUE[51]=0;
RED[50]=0;GREEN[50]=255;BLUE[50]=0;
RED[49]=0;GREEN[49]=255;BLUE[49]=0;
RED[46]=0;GREEN[46]=255;BLUE[46]=0;
RED[33]=0;GREEN[33]=255;BLUE[33]=0;
RED[30]=0;GREEN[30]=255;BLUE[30]=0;
RED[17]=0;GREEN[17]=255;BLUE[17]=0;
RED[14]=0;GREEN[14]=255;BLUE[14]=0;
RED[13]=0;GREEN[13]=255;BLUE[13]=0;
RED[12]=0;GREEN[12]=255;BLUE[12]=0;
RED[11]=0;GREEN[11]=255;BLUE[11]=0;
RED[10]=0;GREEN[10]=255;BLUE[10]=0;
RED[7]=255;GREEN[7]=255;BLUE[7]=255;
RED[8]=255;GREEN[8]=255;BLUE[8]=255;
RED[23]=255;GREEN[23]=255;BLUE[23]=255;
RED[24]=255;GREEN[24]=255;BLUE[24]=255;
RED[39]=255;GREEN[39]=255;BLUE[39]=255;
RED[40]=255;GREEN[40]=255;BLUE[40]=255;
RED[55]=255;GREEN[55]=255;BLUE[55]=255;
RED[56]=255;GREEN[56]=255;BLUE[56]=255;
RED[57]=255;GREEN[57]=255;BLUE[57]=255;
RED[58]=255;GREEN[58]=255;BLUE[58]=255;
RED[59]=255;GREEN[59]=255;BLUE[59]=255;
RED[60]=255;GREEN[60]=255;BLUE[60]=255;
RED[61]=255;GREEN[61]=255;BLUE[61]=255;
RED[62]=255;GREEN[62]=255;BLUE[62]=255;
RED[63]=255;GREEN[63]=255;BLUE[63]=255;
RED[48]=255;GREEN[48]=255;BLUE[48]=255;
RED[47]=255;GREEN[47]=255;BLUE[47]=255;
RED[32]=255;GREEN[32]=255;BLUE[32]=255;
RED[31]=255;GREEN[31]=255;BLUE[31]=255;
RED[16]=255;GREEN[16]=255;BLUE[16]=255;
RED[15]=255;GREEN[15]=255;BLUE[15]=255;
RED[0]=255;GREEN[0]=255;BLUE[0]=255;
RED[1]=255;GREEN[1]=255;BLUE[1]=255;
RED[2]=255;GREEN[2]=255;BLUE[2]=255;
RED[3]=255;GREEN[3]=255;BLUE[3]=255;
RED[4]=255;GREEN[4]=255;BLUE[4]=255;
RED[5]=255;GREEN[5]=255;BLUE[5]=255;
RED[6]=255;GREEN[6]=255;BLUE[6]=255;
}
//////////////////////////////////// 5 Sekunden Pause
for(int i=0;i<1;i++){
RED[i]=255;GREEN[i]=255;BLUE[i]=255;
updatestring();
RED[i]=255;GREEN[i]=255;BLUE[i]=255;
delay(5000);
}
for(int i=0;i<64;i+=2){
RED[i]=255;GREEN[i]=255;BLUE[i]=0;
updatestring();
RED[i]=255;GREEN[i]=255;BLUE[i]=0;
delay(10);
}
for(int i=63;i>0;i-=2){
RED[i]=0;GREEN[i]=0;BLUE[i]=255;
updatestring();
RED[i]=0;GREEN[i]=0;BLUE[i]=255;
delay(10);
}
for(int i=0;i<64;i+=2){
RED[i]=255;GREEN[i]=0;BLUE[i]=0;
updatestring();
RED[i]=255;GREEN[i]=0;BLUE[i]=0;
delay(10);
}
for(int i=63;i>0;i-=2){
RED[i]=0;GREEN[i]=255;BLUE[i]=255;
updatestring();
RED[i]=0;GREEN[i]=255;BLUE[i]=255;
delay(10);
}
for(int i=0;i<64;i+=2){
RED[i]=255;GREEN[i]=0;BLUE[i]=255;
updatestring();
RED[i]=255;GREEN[i]=0;BLUE[i]=255;
delay(10);
}
for(int i=63;i>-1;i-=2){
RED[i]=0;GREEN[i]=255;BLUE[i]=0;
updatestring();
RED[i]=0;GREEN[i]=255;BLUE[i]=0;
delay(10);
}
for(int i=0;i<64;i+=2){
RED[i]=255;GREEN[i]=255;BLUE[i]=255;
updatestring();
RED[i]=255;GREEN[i]=255;BLUE[i]=255;
delay(10);
}
//////////////////////////////////// 3 Sekunden Pause
for(int i=0;i<1;i++){
RED[i]=255;GREEN[i]=255;BLUE[i]=255;
updatestring();
RED[i]=255;GREEN[i]=255;BLUE[i]=255;
delay(3000);
}
///////////////////////////////// Beginn Schnecke rot
for(int i=0;i<9;i++){
RED[i]=255;GREEN[i]=0;BLUE[i]=0;
updatestring();
RED[i]=255;GREEN[i]=0;BLUE[i]=0;
delay(10);
}
for(int i=23;i<25;i++){
RED[i]=255;GREEN[i]=0;BLUE[i]=0;
updatestring();
RED[i]=255;GREEN[i]=0;BLUE[i]=0;
delay(10);
}
for(int i=39;i<41;i++){
RED[i]=255;GREEN[i]=0;BLUE[i]=0;
updatestring();
RED[i]=255;GREEN[i]=0;BLUE[i]=0;
delay(10);
}
for(int i=55;i<64;i++){
RED[i]=255;GREEN[i]=0;BLUE[i]=0;
updatestring();
RED[i]=255;GREEN[i]=0;BLUE[i]=0;
delay(10);
}
for(int i=48;i>46;i--){
RED[i]=255;GREEN[i]=0;BLUE[i]=0;
updatestring();
RED[i]=255;GREEN[i]=0;BLUE[i]=0;
delay(10);
}
for(int i=32;i>30;i--){
RED[i]=255;GREEN[i]=0;BLUE[i]=0;
updatestring();
RED[i]=255;GREEN[i]=0;BLUE[i]=0;
delay(10);
}
for(int i=16;i>8;i--){
RED[i]=255;GREEN[i]=0;BLUE[i]=0;
updatestring();
RED[i]=255;GREEN[i]=0;BLUE[i]=0;
delay(10);
}
for(int i=22;i<23;i++){
RED[i]=255;GREEN[i]=0;BLUE[i]=0;
updatestring();
RED[i]=255;GREEN[i]=0;BLUE[i]=0;
delay(10);
}
for(int i=25;i<26;i++){
RED[i]=255;GREEN[i]=0;BLUE[i]=0;
updatestring();
RED[i]=255;GREEN[i]=0;BLUE[i]=0;
delay(10);
}
for(int i=38;i<39;i++){
RED[i]=255;GREEN[i]=0;BLUE[i]=0;
updatestring();
RED[i]=255;GREEN[i]=0;BLUE[i]=0;
delay(10);
}
for(int i=41;i<42;i++){
RED[i]=255;GREEN[i]=0;BLUE[i]=0;
updatestring();
RED[i]=255;GREEN[i]=0;BLUE[i]=0;
delay(10);
}
for(int i=54;i>48;i--){
RED[i]=255;GREEN[i]=0;BLUE[i]=0;
updatestring();
RED[i]=255;GREEN[i]=0;BLUE[i]=0;
delay(10);
}
for(int i=46;i>45;i--){
RED[i]=255;GREEN[i]=0;BLUE[i]=0;
updatestring();
RED[i]=255;GREEN[i]=0;BLUE[i]=0;
delay(10);
}
for(int i=33;i>32;i--){
RED[i]=255;GREEN[i]=0;BLUE[i]=0;
updatestring();
RED[i]=255;GREEN[i]=0;BLUE[i]=0;
delay(10);
}
for(int i=30;i>29;i--){
RED[i]=255;GREEN[i]=0;BLUE[i]=0;
updatestring();
RED[i]=255;GREEN[i]=0;BLUE[i]=0;
delay(10);
}
for(int i=17;i<22;i++){
RED[i]=255;GREEN[i]=0;BLUE[i]=0;
updatestring();
RED[i]=255;GREEN[i]=0;BLUE[i]=0;
delay(10);
}
for(int i=26;i<27;i++){
RED[i]=255;GREEN[i]=0;BLUE[i]=0;
updatestring();
RED[i]=255;GREEN[i]=0;BLUE[i]=0;
delay(10);
}
for(int i=37;i<38;i++){
RED[i]=255;GREEN[i]=0;BLUE[i]=0;
updatestring();
RED[i]=255;GREEN[i]=0;BLUE[i]=0;
delay(10);
}
for(int i=42;i<46;i++){
RED[i]=255;GREEN[i]=0;BLUE[i]=0;
updatestring();
RED[i]=255;GREEN[i]=0;BLUE[i]=0;
delay(10);
}
for(int i=34;i>33;i--){
RED[i]=255;GREEN[i]=0;BLUE[i]=0;
updatestring();
RED[i]=255;GREEN[i]=0;BLUE[i]=0;
delay(10);
}
for(int i=29;i>26;i--){
RED[i]=255;GREEN[i]=0;BLUE[i]=0;
updatestring();
RED[i]=255;GREEN[i]=0;BLUE[i]=0;
delay(10);
}
for(int i=36;i>34;i--){
RED[i]=255;GREEN[i]=0;BLUE[i]=0;
updatestring();
RED[i]=255;GREEN[i]=0;BLUE[i]=0;
delay(10);
}
//////////////////////////////// Beginn Schnecke grün
for(int i=0;i<9;i++){
RED[i]=0;GREEN[i]=255;BLUE[i]=0;
updatestring();
RED[i]=0;GREEN[i]=255;BLUE[i]=0;
delay(10);
}
for(int i=23;i<25;i++){
RED[i]=0;GREEN[i]=255;BLUE[i]=0;
updatestring();
RED[i]=0;GREEN[i]=255;BLUE[i]=0;
delay(10);
}
for(int i=39;i<41;i++){
RED[i]=0;GREEN[i]=255;BLUE[i]=0;
updatestring();
RED[i]=0;GREEN[i]=255;BLUE[i]=0;
delay(10);
}
for(int i=55;i<64;i++){
RED[i]=0;GREEN[i]=255;BLUE[i]=0;
updatestring();
RED[i]=0;GREEN[i]=255;BLUE[i]=0;
delay(10);
}
for(int i=48;i>46;i--){
RED[i]=0;GREEN[i]=255;BLUE[i]=0;
updatestring();
RED[i]=0;GREEN[i]=255;BLUE[i]=0;
delay(10);
}
for(int i=32;i>30;i--){
RED[i]=0;GREEN[i]=255;BLUE[i]=0;
updatestring();
RED[i]=0;GREEN[i]=255;BLUE[i]=0;
delay(10);
}
for(int i=16;i>8;i--){
RED[i]=0;GREEN[i]=255;BLUE[i]=0;
updatestring();
RED[i]=0;GREEN[i]=255;BLUE[i]=0;
delay(10);
}
for(int i=22;i<23;i++){
RED[i]=0;GREEN[i]=255;BLUE[i]=0;
updatestring();
RED[i]=0;GREEN[i]=255;BLUE[i]=0;
delay(10);
}
for(int i=25;i<26;i++){
RED[i]=0;GREEN[i]=255;BLUE[i]=0;
updatestring();
RED[i]=0;GREEN[i]=255;BLUE[i]=0;
delay(10);
}
for(int i=38;i<39;i++){
RED[i]=0;GREEN[i]=255;BLUE[i]=0;
updatestring();
RED[i]=0;GREEN[i]=255;BLUE[i]=0;
delay(10);
}
for(int i=41;i<42;i++){
RED[i]=0;GREEN[i]=255;BLUE[i]=0;
updatestring();
RED[i]=0;GREEN[i]=255;BLUE[i]=0;
delay(10);
}
for(int i=54;i>48;i--){
RED[i]=0;GREEN[i]=255;BLUE[i]=0;
updatestring();
RED[i]=0;GREEN[i]=255;BLUE[i]=0;
delay(10);
}
for(int i=46;i>45;i--){
RED[i]=0;GREEN[i]=255;BLUE[i]=0;
updatestring();
RED[i]=0;GREEN[i]=255;BLUE[i]=0;
delay(10);
}
for(int i=33;i>32;i--){
RED[i]=0;GREEN[i]=255;BLUE[i]=0;
updatestring();
RED[i]=0;GREEN[i]=255;BLUE[i]=0;
delay(10);
}
for(int i=30;i>29;i--){
RED[i]=0;GREEN[i]=255;BLUE[i]=0;
updatestring();
RED[i]=0;GREEN[i]=255;BLUE[i]=0;
delay(10);
}
for(int i=17;i<22;i++){
RED[i]=0;GREEN[i]=255;BLUE[i]=0;
updatestring();
RED[i]=0;GREEN[i]=255;BLUE[i]=0;
delay(10);
}
for(int i=26;i<27;i++){
RED[i]=0;GREEN[i]=255;BLUE[i]=0;
updatestring();
RED[i]=0;GREEN[i]=255;BLUE[i]=0;
delay(10);
}
for(int i=37;i<38;i++){
RED[i]=0;GREEN[i]=255;BLUE[i]=0;
updatestring();
RED[i]=0;GREEN[i]=255;BLUE[i]=0;
delay(10);
}
for(int i=42;i<46;i++){
RED[i]=0;GREEN[i]=255;BLUE[i]=0;
updatestring();
RED[i]=0;GREEN[i]=255;BLUE[i]=0;
delay(10);
}
for(int i=34;i>33;i--){
RED[i]=0;GREEN[i]=255;BLUE[i]=0;
updatestring();
RED[i]=0;GREEN[i]=255;BLUE[i]=0;
delay(10);
}
for(int i=29;i>26;i--){
RED[i]=0;GREEN[i]=255;BLUE[i]=0;
updatestring();
RED[i]=0;GREEN[i]=255;BLUE[i]=0;
delay(10);
}
for(int i=36;i>34;i--){
RED[i]=0;GREEN[i]=255;BLUE[i]=0;
updatestring();
RED[i]=0;GREEN[i]=255;BLUE[i]=0;
delay(10);
}
///////////////////////////////// Beginn Schnecke gelb
for(int i=0;i<9;i++){
RED[i]=255;GREEN[i]=255;BLUE[i]=0;
updatestring();
RED[i]=255;GREEN[i]=255;BLUE[i]=0;
delay(10);
}
for(int i=23;i<25;i++){
RED[i]=255;GREEN[i]=255;BLUE[i]=0;
updatestring();
RED[i]=255;GREEN[i]=255;BLUE[i]=0;
delay(10);
}
for(int i=39;i<41;i++){
RED[i]=255;GREEN[i]=255;BLUE[i]=0;
updatestring();
RED[i]=255;GREEN[i]=255;BLUE[i]=0;
delay(10);
}
for(int i=55;i<64;i++){
RED[i]=255;GREEN[i]=255;BLUE[i]=0;
updatestring();
RED[i]=255;GREEN[i]=255;BLUE[i]=0;
delay(10);
}
for(int i=48;i>46;i--){
RED[i]=255;GREEN[i]=255;BLUE[i]=0;
updatestring();
RED[i]=255;GREEN[i]=255;BLUE[i]=0;
delay(10);
}
for(int i=32;i>30;i--){
RED[i]=255;GREEN[i]=255;BLUE[i]=0;
updatestring();
RED[i]=255;GREEN[i]=255;BLUE[i]=0;
delay(10);
}
for(int i=16;i>8;i--){
RED[i]=255;GREEN[i]=255;BLUE[i]=0;
updatestring();
RED[i]=255;GREEN[i]=255;BLUE[i]=0;
delay(10);
}
for(int i=22;i<23;i++){
RED[i]=255;GREEN[i]=255;BLUE[i]=0;
updatestring();
RED[i]=255;GREEN[i]=255;BLUE[i]=0;
delay(10);
}
for(int i=25;i<26;i++){
RED[i]=255;GREEN[i]=255;BLUE[i]=0;
updatestring();
RED[i]=255;GREEN[i]=255;BLUE[i]=0;
delay(10);
}
for(int i=38;i<39;i++){
RED[i]=255;GREEN[i]=255;BLUE[i]=0;
updatestring();
RED[i]=255;GREEN[i]=255;BLUE[i]=0;
delay(10);
}
for(int i=41;i<42;i++){
RED[i]=255;GREEN[i]=255;BLUE[i]=0;
updatestring();
RED[i]=255;GREEN[i]=255;BLUE[i]=0;
delay(10);
}
for(int i=54;i>48;i--){
RED[i]=255;GREEN[i]=255;BLUE[i]=0;
updatestring();
RED[i]=255;GREEN[i]=255;BLUE[i]=0;
delay(10);
}
for(int i=46;i>45;i--){
RED[i]=255;GREEN[i]=255;BLUE[i]=0;
updatestring();
RED[i]=255;GREEN[i]=255;BLUE[i]=0;
delay(10);
}
for(int i=33;i>32;i--){
RED[i]=255;GREEN[i]=255;BLUE[i]=0;
updatestring();
RED[i]=255;GREEN[i]=255;BLUE[i]=0;
delay(10);
}
for(int i=30;i>29;i--){
RED[i]=255;GREEN[i]=255;BLUE[i]=0;
updatestring();
RED[i]=255;GREEN[i]=255;BLUE[i]=0;
delay(10);
}
for(int i=17;i<22;i++){
RED[i]=255;GREEN[i]=255;BLUE[i]=0;
updatestring();
RED[i]=255;GREEN[i]=255;BLUE[i]=0;
delay(10);
}
for(int i=26;i<27;i++){
RED[i]=255;GREEN[i]=255;BLUE[i]=0;
updatestring();
RED[i]=255;GREEN[i]=255;BLUE[i]=0;
delay(10);
}
for(int i=37;i<38;i++){
RED[i]=255;GREEN[i]=255;BLUE[i]=0;
updatestring();
RED[i]=255;GREEN[i]=255;BLUE[i]=0;
delay(10);
}
for(int i=42;i<46;i++){
RED[i]=255;GREEN[i]=255;BLUE[i]=0;
updatestring();
RED[i]=255;GREEN[i]=255;BLUE[i]=0;
delay(10);
}
for(int i=34;i>33;i--){
RED[i]=255;GREEN[i]=255;BLUE[i]=0;
updatestring();
RED[i]=255;GREEN[i]=255;BLUE[i]=0;
delay(10);
}
for(int i=29;i>26;i--){
RED[i]=255;GREEN[i]=255;BLUE[i]=0;
updatestring();
RED[i]=255;GREEN[i]=255;BLUE[i]=0;
delay(10);
}
for(int i=36;i>34;i--){
RED[i]=255;GREEN[i]=255;BLUE[i]=0;
updatestring();
RED[i]=255;GREEN[i]=255;BLUE[i]=0;
delay(10);
}
}
