//控制2 , 3 , 4 , 5 , 6 , 7 , 8 , 9八个引脚
int led_array[8] = { 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 } ;
int flash_speed = 500 ;//延迟时间

/* flash led form left to right one by one */
void led_flash(void)
{
    int i ;
    for( i = 0 ; i < 8 ; i++ )
    {
        digitalWrite(led_array[i],LOW);//8个引脚依次置为低电平
        delay(flash_speed);
        digitalWrite(led_array[i],HIGH);//8个引脚依次置为高电平
    }
}

/* turn on all led form left to right */
void led_turn_on(void)
{
    int i ;
    for( i = 0 ; i < 8 ; i++ )
    {
        digitalWrite(led_array[i],LOW);
        delay(flash_speed);
    }
}

/* turn off all led  */
void led_turn_off(void)
{
    int i ;
    for( i = 0 ; i < 8 ; i++ )
    {
        digitalWrite(led_array[i],HIGH);
        delay(flash_speed);
    }
}
void setup() {
  // put your setup code here, to run once:
    int i ;
    Serial.begin(115200);//设置波特率为115200
    
    for( i = 0 ; i < 8 ; i++ )
    {
        pinMode(led_array[i],OUTPUT);//将八个引脚设置为输出模式
        digitalWrite(led_array[i],HIGH);    // set led control pin defalut HIGH turn off all LED
    }
}

void loop() {
  // put your main code here, to run repeatedly:
    Serial.println("start flash led !");
    led_flash();
    led_turn_off();
    led_turn_on();
}
