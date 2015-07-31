/* DRIVERS for LCD part*/


/* PIN TABLE FOR LCD USE */
#define PIN_SCE   7
#define PIN_RESET 6
#define PIN_DC    5
#define PIN_SDIN  4
#define PIN_SCLK  3
#define LCD_C     LOW
#define LCD_D     HIGH
#define LCD_X     84
#define LCD_Y     48
#define LCD_DATA  1
/*=====================*/


/* ASCII TABLE for print on LCD SCREEN */
byte ASCII[][5] =
{
 {0x00, 0x00, 0x00, 0x00, 0x00} // 20
,{0x00, 0x00, 0x5f, 0x00, 0x00} // 21 !
,{0x00, 0x07, 0x00, 0x07, 0x00} // 22 "
,{0x14, 0x7f, 0x14, 0x7f, 0x14} // 23 #
,{0x24, 0x2a, 0x7f, 0x2a, 0x12} // 24 $
,{0x23, 0x13, 0x08, 0x64, 0x62} // 25 %
,{0x36, 0x49, 0x55, 0x22, 0x50} // 26 &
,{0x00, 0x05, 0x03, 0x00, 0x00} // 27 '
,{0x00, 0x1c, 0x22, 0x41, 0x00} // 28 (
,{0x00, 0x41, 0x22, 0x1c, 0x00} // 29 )
,{0x14, 0x08, 0x3e, 0x08, 0x14} // 2a *
,{0x08, 0x08, 0x3e, 0x08, 0x08} // 2b +
,{0x00, 0x50, 0x30, 0x00, 0x00} // 2c ,
,{0x08, 0x08, 0x08, 0x08, 0x08} // 2d -
,{0x00, 0x60, 0x60, 0x00, 0x00} // 2e .
,{0x20, 0x10, 0x08, 0x04, 0x02} // 2f /
,{0x3e, 0x51, 0x49, 0x45, 0x3e} // 30 0
,{0x00, 0x42, 0x7f, 0x40, 0x00} // 31 1
,{0x42, 0x61, 0x51, 0x49, 0x46} // 32 2
,{0x21, 0x41, 0x45, 0x4b, 0x31} // 33 3
,{0x18, 0x14, 0x12, 0x7f, 0x10} // 34 4
,{0x27, 0x45, 0x45, 0x45, 0x39} // 35 5
,{0x3c, 0x4a, 0x49, 0x49, 0x30} // 36 6
,{0x01, 0x71, 0x09, 0x05, 0x03} // 37 7
,{0x36, 0x49, 0x49, 0x49, 0x36} // 38 8
,{0x06, 0x49, 0x49, 0x29, 0x1e} // 39 9
,{0x00, 0x36, 0x36, 0x00, 0x00} // 3a :
,{0x00, 0x56, 0x36, 0x00, 0x00} // 3b ;
,{0x08, 0x14, 0x22, 0x41, 0x00} // 3c <
,{0x14, 0x14, 0x14, 0x14, 0x14} // 3d =
,{0x00, 0x41, 0x22, 0x14, 0x08} // 3e >
,{0x02, 0x01, 0x51, 0x09, 0x06} // 3f ?
,{0x32, 0x49, 0x79, 0x41, 0x3e} // 40 @
,{0x7e, 0x11, 0x11, 0x11, 0x7e} // 41 A
,{0x7f, 0x49, 0x49, 0x49, 0x36} // 42 B
,{0x3e, 0x41, 0x41, 0x41, 0x22} // 43 C
,{0x7f, 0x41, 0x41, 0x22, 0x1c} // 44 D
,{0x7f, 0x49, 0x49, 0x49, 0x41} // 45 E
,{0x7f, 0x09, 0x09, 0x09, 0x01} // 46 F
,{0x3e, 0x41, 0x49, 0x49, 0x7a} // 47 G
,{0x7f, 0x08, 0x08, 0x08, 0x7f} // 48 H
,{0x00, 0x41, 0x7f, 0x41, 0x00} // 49 I
,{0x20, 0x40, 0x41, 0x3f, 0x01} // 4a J
,{0x7f, 0x08, 0x14, 0x22, 0x41} // 4b K
,{0x7f, 0x40, 0x40, 0x40, 0x40} // 4c L
,{0x7f, 0x02, 0x0c, 0x02, 0x7f} // 4d M
,{0x7f, 0x04, 0x08, 0x10, 0x7f} // 4e N
,{0x3e, 0x41, 0x41, 0x41, 0x3e} // 4f O
,{0x7f, 0x09, 0x09, 0x09, 0x06} // 50 P
,{0x3e, 0x41, 0x51, 0x21, 0x5e} // 51 Q
,{0x7f, 0x09, 0x19, 0x29, 0x46} // 52 R
,{0x46, 0x49, 0x49, 0x49, 0x31} // 53 S
,{0x01, 0x01, 0x7f, 0x01, 0x01} // 54 T
,{0x3f, 0x40, 0x40, 0x40, 0x3f} // 55 U
,{0x1f, 0x20, 0x40, 0x20, 0x1f} // 56 V
,{0x3f, 0x40, 0x38, 0x40, 0x3f} // 57 W
,{0x63, 0x14, 0x08, 0x14, 0x63} // 58 X
,{0x07, 0x08, 0x70, 0x08, 0x07} // 59 Y
,{0x61, 0x51, 0x49, 0x45, 0x43} // 5a Z
,{0x00, 0x7f, 0x41, 0x41, 0x00} // 5b [
,{0x02, 0x04, 0x08, 0x10, 0x20} // 5c ¥
,{0x00, 0x41, 0x41, 0x7f, 0x00} // 5d ]
,{0x04, 0x02, 0x01, 0x02, 0x04} // 5e ^
,{0x40, 0x40, 0x40, 0x40, 0x40} // 5f _
,{0x00, 0x01, 0x02, 0x04, 0x00} // 60 `
,{0x20, 0x54, 0x54, 0x54, 0x78} // 61 a
,{0x7f, 0x48, 0x44, 0x44, 0x38} // 62 b
,{0x38, 0x44, 0x44, 0x44, 0x20} // 63 c
,{0x38, 0x44, 0x44, 0x48, 0x7f} // 64 d
,{0x38, 0x54, 0x54, 0x54, 0x18} // 65 e
,{0x08, 0x7e, 0x09, 0x01, 0x02} // 66 f
,{0x0c, 0x52, 0x52, 0x52, 0x3e} // 67 g
,{0x7f, 0x08, 0x04, 0x04, 0x78} // 68 h
,{0x00, 0x44, 0x7d, 0x40, 0x00} // 69 i
,{0x20, 0x40, 0x44, 0x3d, 0x00} // 6a j
,{0x7f, 0x10, 0x28, 0x44, 0x00} // 6b k
,{0x00, 0x41, 0x7f, 0x40, 0x00} // 6c l
,{0x7c, 0x04, 0x18, 0x04, 0x78} // 6d m
,{0x7c, 0x08, 0x04, 0x04, 0x78} // 6e n
,{0x38, 0x44, 0x44, 0x44, 0x38} // 6f o
,{0x7c, 0x14, 0x14, 0x14, 0x08} // 70 p
,{0x08, 0x14, 0x14, 0x18, 0x7c} // 71 q
,{0x7c, 0x08, 0x04, 0x04, 0x08} // 72 r
,{0x48, 0x54, 0x54, 0x54, 0x20} // 73 s
,{0x04, 0x3f, 0x44, 0x40, 0x20} // 74 t
,{0x3c, 0x40, 0x40, 0x20, 0x7c} // 75 u
,{0x1c, 0x20, 0x40, 0x20, 0x1c} // 76 v
,{0x3c, 0x40, 0x30, 0x40, 0x3c} // 77 w
,{0x44, 0x28, 0x10, 0x28, 0x44} // 78 x
,{0x0c, 0x50, 0x50, 0x50, 0x3c} // 79 y
,{0x44, 0x64, 0x54, 0x4c, 0x44} // 7a z
,{0x00, 0x08, 0x36, 0x41, 0x00} // 7b {
,{0xff, 0xff, 0xff, 0xff, 0xff} // 7c | modified
,{0x1c, 0xf6, 0x3f, 0xf6, 0x1c} // 7d } modified
,{0x10, 0x08, 0x08, 0x10, 0x08} // 7e ←
,{0x78, 0x46, 0x41, 0x46, 0x78} // 7f →
};
/*=============================================*/


void knockdown()
{
	for (int index = 0 ; index < 72 ; index++)
	{
  	LcdString(" ");
		delay(20);
	}
}

void LcdCharacter(char character)
{
	LcdWrite(LCD_D, 0x00);
	for (int index = 0; index < 5; index++)
  {
		LcdWrite(LCD_D, ASCII[character - 0x20][index]);
	}
	LcdWrite(LCD_D, 0x00);
}

void LcdClear(void)
{
	for (int index = 0; index < 504; index++)
	{
		LcdWrite(LCD_D, 0x00);
	}
}

void LcdInitialise(void)
{
	pinMode(PIN_SCE, OUTPUT);
  pinMode(PIN_RESET, OUTPUT);
  pinMode(PIN_DC, OUTPUT);
  pinMode(PIN_SDIN, OUTPUT);
  pinMode(PIN_SCLK, OUTPUT);
  digitalWrite(PIN_RESET, LOW);
  digitalWrite(PIN_RESET, HIGH);
  LcdWrite(LCD_C, 0x21 );  // LCD Extended Commands.
  LcdWrite(LCD_C, 0xB5 );  // Set LCD Vop (Contrast).
  LcdWrite(LCD_C, 0x14 );  // LCD bias mode 1:48. //0x13
  LcdWrite(LCD_C, 0x20 );
  LcdWrite(LCD_C, 0x0C );
}
void LcdString(char *characters)
{
	while (*characters)
	{
    LcdCharacter(*characters++);
	}
}

void LcdWrite(byte dc, byte data)
{
	digitalWrite(PIN_DC, dc);
  digitalWrite(PIN_SCE, LOW);
  shiftOut(PIN_SDIN, PIN_SCLK, MSBFIRST, data);
  digitalWrite(PIN_SCE, HIGH);
}

void posmarker(int x, int y)
{
  LcdWrite( 0, 0x80 | x);  // Column.
  LcdWrite( 0, 0x40 | y);  // Row
}

void rectangle()
{
  unsigned char  j;
  for(j=0; j<84; j++) // top
	{
		posmarker (j,0);
	  LcdWrite (1,0x01);
	}
  for(j=0; j<84; j++) //Bottom
	{
		posmarker (j,5);
	  LcdWrite (1,0x80);
	}
  for(j=0; j<6; j++) // Right
	{
		posmarker (83,j);
	  LcdWrite (1,0xff);
	}
	for(j=0; j<6; j++) // Left
	{
		posmarker (0,j);
	  LcdWrite (1,0xff);
	}
}

void setup(void)
{
	LcdInitialise();
	LcdClear();
	lcdMessage();
	/*delay(20000);
	LcdClear();*/
}

void loop(void)
{/*
  delay(500);
	LcdClear();
	LcdInitialise();
  LcdString("The original intention  of your LCD was as Nokia 5110 phone screens...");
	delay(5000);
  LcdClear();
	LcdInitialise();
  LcdString("            ");
	LcdString(" But it can  be used on your Arduino    too.");
	delay(5000);
  delay(5000);
	LcdClear();
	LcdInitialise();
  LcdString("Let's make a box and put some text   in it....");
	delay(5000);
	LcdClear();
	LcdInitialise();
	rectangle();
	delay(2000);
	posmarker(18,2);////////18th PIXEL not bank and third row
	LcdCharacter('A');
	LcdCharacter('r');
	LcdCharacter('d');
	LcdCharacter('u');
	LcdCharacter('i');
	LcdCharacter('n');
  LcdCharacter('o');
	delay(3000);
	knockdown();
	delay(500);
	LcdInitialise();
	LcdString("            ");
	LcdString("  How about    smaller     boxes?");
	delay(3000);
  LcdClear();
	LcdInitialise();
	LcdString("            ");
	LcdString(" No problem.");
  for(int j=0; j<84; j++) // top
	{
		posmarker (j,0);
		LcdWrite (1,0x01);
	}
  for(int j=0; j<84; j++) //Bottom
	{
		posmarker (j,2);
		LcdWrite (1,0x80);
	}
  for(int j=0; j<3; j++) // Right
	{
		posmarker (83,j);
		LcdWrite (1,0xff);
	}
	for(int j=0; j<3; j++) // Left
	{
		posmarker (0,j);
		LcdWrite (1,0xff);
	}
	delay(1000);
  for(int j=0; j<36; j++) // top
	{
		posmarker (j,4);
	  LcdWrite (1,0x01);
	}
  for(int j=0; j<36; j++) //Bottom
	{
		posmarker (j,5);
	  LcdWrite (1,0x80);
	}
  for(int j=4; j<6; j++) // Right
	{
		posmarker (35,j);
	  LcdWrite (1,0xff);
	}
	for(int j=4; j<6; j++) // Left
	{
		posmarker (0,j);
	  LcdWrite (1,0xff);
	}
	delay(1000);
  for(int j=40; j<84; j++) // top
	{
		posmarker (j,4);
	  LcdWrite (1,0x01);
	}
  for(int j=40; j<84; j++) //Bottom
	{
		posmarker (j,5);
	  LcdWrite (1,0x80);
	}
  for(int j=4; j<6; j++) // Right
	{
		posmarker (83,j);
	  LcdWrite (1,0xff);
	}
	for(int j=4; j<6; j++) // Left
	{
		posmarker (40,j);
	  LcdWrite (1,0xff);
	}
	delay(3000);
	LcdClear();
	LcdInitialise();
  LcdString("             Let's do    some text   effects...");
  delay(3000);
	LcdClear();
	LcdInitialise();
	for (int index = 0 ; index < 72 ; index++)
	{
  	LcdString("|");
		delay(20);
	}
	LcdInitialise();
	for (int index = 0 ; index<72 ; index++)
	{
  	LcdString(" ");
		delay(20);
	}
	delay(500);
	int drop=200;
	for(int j=0;j<4;j++)
	{
  	posmarker(18,j);
		LcdCharacter('D');
		posmarker(18,j-1);
		LcdCharacter(' ');
		delay(drop);
	}
  for(int j=0;j<4;j++)
	{
  	posmarker(25,j);
		LcdCharacter('r');
		posmarker(25,j-1);
		LcdCharacter(' ');
		delay(drop);
	}
 	for(int j=0;j<4;j++)
	{
  	posmarker(32,j);
		LcdCharacter('o');
		posmarker(32,j-1);
		LcdCharacter(' ');
		delay(drop);
	}
  for(int j=0;j<4;j++)
	{
		posmarker(39,j);
		LcdCharacter('p');
		posmarker(39,j-1);
		LcdCharacter(' ');
		delay(drop);
	}
	posmarker(46,3);
	LcdCharacter(' ');
  for(int j=0;j<4;j++)
	{
		posmarker(53,j);
		LcdCharacter('i');
		posmarker(53,j-1);
		LcdCharacter(' ');
		delay(drop);
	}
	for(int j=0;j<4;j++)
	{
		posmarker(60,j);
		LcdCharacter('n');
		posmarker(60,j-1);
		LcdCharacter(' ');
		delay(drop);
	}
	delay(2000);
  for(int j=3;j>-1;j--)
	{
  	posmarker(18,j);
		LcdCharacter('D');
		posmarker(18,j+1);
		LcdCharacter(' ');
		delay(drop);
	}
	for(int j=3;j>-1;j--)
	{
  	posmarker(25,j);
		LcdCharacter('r');
		posmarker(25,j+1);
		LcdCharacter(' ');
		delay(drop);
	}
 	for(int j=3;j>-1;j--)
	{
  	posmarker(32,j);
		LcdCharacter('o');
		posmarker(32,j+1);
		LcdCharacter(' ');
		delay(drop);
	}
  for(int j=3;j>-1;j--)
	{
		posmarker(39,j);
		LcdCharacter('p');
		posmarker(39,j+1);
		LcdCharacter(' ');
		delay(drop);
	}
	posmarker(46,3);LcdCharacter(' ');
  for(int j=3;j>-1;j--)
	{
		posmarker(53,j);
		LcdCharacter('i');
		posmarker(53,j+1);
		LcdCharacter(' ');
		delay(drop);
	}
	for(int j=3;j>-1;j--)
	{
		posmarker(60,j);
		LcdCharacter('n');
		posmarker(60,j+1);
		LcdCharacter(' ');
		delay(drop);
	}
	delay(2000);
 	for(int j=0;j<4;j++)
	{
  	posmarker(18,j);
		LcdCharacter('D');
		posmarker(18,j-1);
		LcdCharacter(' ');
  	posmarker(25,j);
		LcdCharacter('r');
		posmarker(25,j-1);
		LcdCharacter(' ');
  	posmarker(32,j);
		LcdCharacter('o');
		posmarker(32,j-1);
		LcdCharacter(' ');
		posmarker(39,j);
		LcdCharacter('p');
		posmarker(39,j-1);
		LcdCharacter(' ');
		posmarker(46,3);
		LcdCharacter(' ');
		posmarker(53,j);
		LcdCharacter('i');
		posmarker(53,j-1);
		LcdCharacter(' ');
		posmarker(60,j);
		LcdCharacter('n');
		posmarker(60,j-1);
		LcdCharacter(' ');
		delay(drop);
	}
	delay(3000);
  LcdInitialise();
  for (int index = 0 ; index < 72 ; index++)
	{
  	LcdString("|");
		delay(20);
	}
  for (int index = 72 ; index>-1 ; index--)
	{
  	LcdString(" ");
		delay(20);
	}
*/}
