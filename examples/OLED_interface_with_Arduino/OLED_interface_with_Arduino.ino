/*                                                                    786
 *                                                               www.ucbeginner.com
 *                                                              Author: Rizwan Khalid
 *                                                           Microcontroller: Atsamd21g18a 
 *                                                             Arduino MKRzero Board
*/

#include "NEWHAVEN_OLED_UCBEGINNER_lib.h"

const unsigned char Logo_bm[] = {};





void setup()
{
 
  Serial.begin(9600);
  delay(500);

  SPI.begin();
  delay(500);

//For OLED Initilization
  Init_OLED(); 

//logo....
  Display_Logo(Logo_bm);
  delay(2000);
}



void loop()
 {
   clear_screen(BLACK);// Clear_screen();
   display_heading(" UCBEGINNER",0,H_row1 ,GREEN,BLACK);
   display_string("  ucbeginner.com",0,S_row1 ,BROWN,BLACK);
   
   delay(2000);
   Draw_box(40,120, 50,10,BROWN,false);
   delay(1000);
   Draw_box(40,120, 50,10,BROWN,true);
   delay(1000);
   display_string("   Thanks...",0,S_row2 ,BLUE,BLACK);
   while(1);

 }
