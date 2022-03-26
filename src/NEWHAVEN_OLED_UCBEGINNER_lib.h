/*                                                                    786
 *                                                               www.ucbeginner.com
 *                                                              Author: Rizwan Khalid
 *                                                           Microcontroller: Atsamd21g18a 
 *                                                             Arduino MKRzero Board
*/


 
#include <arduino.h>
#include <SPI.h>
#include <stdio.h>

// for pin see MMI schematic
#define   SDI_PIN   8    // MOSI
#define   SCL_PIN   9    // SCK
#define    RS_PIN   A5    // D/C
#define   RES_PIN   A3    // /RES
#define    CS_PIN   A4    // OLEDCS

#define    RED  0x0000FF
#define  GREEN  0x00FF00
#define   BLUE  0xFF0000
#define  WHITE  0xFFFFFF
#define  BLACK  0x000000
#define  BROWN  0x1261D4 // In MS WORD  #D46112
#define  PURPAL 0xD87EB1 // In MS WORD  #B17ED8
#define YELLOW  0X00FFFF // In MS WORD  #FFFF00



#define H_row1 128
#define H_row2 108
#define H_row3 88
#define H_row4 68
#define H_row5 48
#define H_row6 28

#define S_row1 105
#define S_row2 86
#define S_row3 67
#define S_row4 48
#define S_row5 29
#define S_row6 10


void Init_OLED(void);
void Command(unsigned char c); 
void Data(unsigned char d);
void Setcoladd(unsigned char x_start, unsigned char x_end);
void Setrowadd(unsigned char y_start, unsigned char y_end);
void Fillscreen(unsigned long color);
void Setposition(unsigned char x_pos, unsigned char y_pos);
void Write_mem_start(void);
void Pixel(unsigned long color);
void Serial_pixel_data(unsigned char d);
void clear_screen(unsigned long color);
void screen_off();
void screen_on();


void H_line(int start,int end,uint8_t ypos,unsigned long color );
void V_line(int start,int end,uint8_t xpos,unsigned long color );


void Draw_box(int a,int b, int c, int d,unsigned long color,boolean fill);



void display_string( char str[], uint8_t xpos, uint8_t ypos, unsigned long color, unsigned long bgcolor);
void display_heading( char str[], uint8_t xpos, uint8_t ypos, unsigned long color, unsigned long bgcolor);
void Display_Logo(const unsigned char bm[]);
