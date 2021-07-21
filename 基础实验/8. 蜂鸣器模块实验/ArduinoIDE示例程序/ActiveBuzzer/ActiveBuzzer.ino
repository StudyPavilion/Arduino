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
 * [Title]    product two frequeces sound
 * [diagram]
 *           Arduino  pin8  ===================   buzzer positive wire
 *
 */
int buzzer = 9;
int a[3][7]={
  {131,147,165,175,196,221,248},
  {262,294,330,250,393,441,495},
  {525,589,661,700,786,882,990}
  
};

void setup()
{
	  pinMode(buzzer,OUTPUT);
}
void loop() 
{
   /* int i,j;
    for(i=0; i<3; i++)
    {
      for(j=0; j<7; j++)
      {
         analogWrite(buzzer,a[i][j]);  //sound production
         delay(10000);
      }
    }*/
    analogWrite(buzzer,131);  //sound production
  	delay(1000);
  	analogWrite(buzzer,147);
    delay(1000);
    analogWrite(buzzer,165);
    delay(1000);
    analogWrite(buzzer,175);
    delay(1000);
    analogWrite(buzzer,196);
    delay(1000);
    analogWrite(buzzer,221);
    delay(1000);
    analogWrite(buzzer,248);
    delay(1000);
}
