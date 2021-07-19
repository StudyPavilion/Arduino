/***********************************************************************
 *       __                                                          _
 *      / /        _____  __    __  _          _   (_)   ________   | |
 *     / /____   / _____) \ \  / / | |   __   | |  | |  (  ______)  | |_____
 *    / / ___/  | |_____   \ \/ /  | |  /  \  | |  | |  | |______   |  ___  |
 *   / /\ \     | |_____|   \  /   | | / /\ \ | |  | |  (_______ )  | |   | |
 *  / /  \ \__  | |_____    / /    | |/ /  \ \| |  | |   ______| |  | |   | |
 * /_/    \___\  \______)  /_/      \__/    \__/   |_|  (________)  |_|   |_|
 *
 *
 * KeyWay Tech firmware
 *
 * Copyright (C) 2015-2020
 *
 * This program is free software: you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation, in version 3.
 * learn more you can see <http://www.gnu.org/licenses/>.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 * or FITNESS FOR A PARTICULAR PURPOSE.
 *
 *
 * [Title]    keypad control led light
 * [diagram]
 *         Arduino PIN 11  ===================  led control gpio
 *         Arduino PIN 7   ===================  keypad pin
 */

void setup()
{
    pinMode(11,OUTPUT);          // 初始化LED引脚输出
    pinMode(7,INPUT);          // 初始化键引脚输入
    digitalWrite(11,LOW); 
}

void loop()
{
  while(1)
  {
    if (digitalRead(7) == LOW)
    {
        delay(20);                  //延时，消除按键抖动
        if (digitalRead(7) == LOW)
        {
            digitalWrite(11, LOW);  // 如果key DigitalRead（7）未按下，则关闭LED  
        } else {
            digitalWrite(11, HIGH); // 如果key DigitalRead（7）按下，则打开LED
        }
    }
  }
}
