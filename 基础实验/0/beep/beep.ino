#define Do 262
#define Re 294
#define Mi 330
#define Fa 349
#define Sol 392
#define La 440
#define Si 494
#define Do_h 523
#define Re_h 587
#define Mi_h 659
#define Fa_h 698
#define Sol_h 784
#define La_h 880
#define Si_h 988
int length;
int scale[]={
Sol,Sol,La,Sol,Do_h,Si,
Sol,Sol,La,Sol,Re_h,Do_h,
Sol,Sol,Sol_h,Mi_h,Do_h,Si,La,
Fa_h,Fa_h,Mi_h,Do_h,Re_h,Do_h}; //生日歌曲谱
float durt[]=
{
0.5,0.5,1,1,1,1+1,
0.5,0.5,1,1,1,1+1,
0.5,0.5,1,1,1,1,1,
0.5,0.5,1,1,1,1+1,
}; //音长
int tonepin=9; //用8号引脚
int ledpin = 13;
void setup()
{
pinMode(tonepin,OUTPUT);
pinMode(ledpin,OUTPUT);
length=sizeof(scale)/sizeof(scale[0]); //计算长度
}

void loop()
{
for(int x=0;x<length;x++)
{
tone(tonepin,scale[x]);
digitalWrite(ledpin,HIGH);
delay(500*durt[x]); //这里用来根据节拍调节延时，500这个指数可以自己调整
digitalWrite(ledpin,LOW);
delay(100*durt[x]);
noTone(tonepin);
}
delay(3000);
}
