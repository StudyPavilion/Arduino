void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);//设置波特率为9600
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("Hello World !");
  delay(1000);//延迟1000毫秒
}
