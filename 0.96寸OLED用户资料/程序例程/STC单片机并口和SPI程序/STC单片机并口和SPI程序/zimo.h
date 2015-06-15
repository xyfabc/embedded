unsigned char code mao[]={0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x0C,0x03,0x0C,0x00,0x00,0x00,0x00,0x00,0x00};//:
unsigned char code o[]={0x07,0xF0,0x08,0x08,0x10,0x04,0x10,0x04,0x10,0x04,0x08,0x08,0x07,0xF0,0x00,0x00};//"O",0//
unsigned char code l[]={0x10,0x04,0x1F,0xFC,0x10,0x04,0x00,0x04,0x00,0x04,0x00,0x04,0x00,0x0C,0x00,0x00};//"L",1//
unsigned char code e[]={0x10,0x04,0x1F,0xFC,0x11,0x04,0x11,0x04,0x17,0xC4,0x10,0x04,0x08,0x18,0x00,0x00};//"E",2//
unsigned char code d[]={0x10,0x04,0x1F,0xFC,0x10,0x04,0x10,0x04,0x10,0x04,0x08,0x08,0x07,0xF0,0x00,0x00};//"D",3//
unsigned char code dian[]={0x00,0x00,0x00,0x00,0x1F,0xF0,0x12,0x20,0x12,0x20,0x12,0x20,0x12,0x20,0xFF,0xFC,
						   0x12,0x22,0x12,0x22,0x12,0x22,0x12,0x22,0x1F,0xF2,0x00,0x02,0x00,0x0E,0x00,0x00};//"电",4//
unsigned char code zi[]={0x00,0x80,0x00,0x80,0x40,0x80,0x40,0x80,0x40,0x80,0x40,0x82,0x40,0x81,0x47,0xFE,
						 0x48,0x80,0x50,0x80,0x60,0x80,0x40,0x80,0x00,0x80,0x01,0x80,0x00,0x80,0x00,0x00};//"子",5//

unsigned char code shi[]={0x00,0x00,0x3F,0xE0,0x22,0x20,0x22,0x20,0x22,0x20,0x3F,0xE0,0x08,0x00,0x09,0x00,
						  0x08,0xC0,0x08,0x02,0x08,0x01,0xFF,0xFE,0x08,0x00,0x08,0x00,0x08,0x00,0x00,0x00};//"时",6//

unsigned char code zhong[]={0x02,0x80,0x0C,0x80,0x34,0x80,0xD7,0xFF,0x14,0x82,0x14,0x84,0x00,0x00,0x1F,0x80,
							0x10,0x80,0x10,0x80,0xFF,0xFF,0x10,0x80,0x10,0x80,0x1F,0x80,0x00,0x00,0x00,0x00};//"钟",7//

unsigned char code year[]={0x02,0x20,0x04,0x20,0x08,0x20,0x30,0x20,0xC7,0xE0,0x44,0x20,0x44,0x20,0x44,0x20,
						   0x7F,0xFF,0x44,0x20,0x44,0x20,0x44,0x20,0x44,0x20,0x40,0x20,0x00,0x20,0x00,0x00};//年
unsigned char code month[]={0x00,0x00,0x00,0x02,0x00,0x04,0x00,0x08,0x00,0x30,0xFF,0xC0,0x88,0x80,0x88,0x80,
							0x88,0x80,0x88,0x84,0x88,0x82,0xFF,0xFC,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};//月
unsigned char code day[]={0x00,0x00,0x00,0x00,0x00,0x00,0x7F,0xFC,0x42,0x08,0x42,0x08,0x42,0x08,0x42,0x08,
						  0x42,0x08,0x42,0x08,0x42,0x08,0x7F,0xFC,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};//日
unsigned char code xing[]={0x00,0x00,0x00,0x12,0x00,0x62,0x7D,0x82,0x54,0x92,0x54,0x92,0x54,0x92,0x57,0xFE,
						   0x54,0x92,0x54,0x92,0x54,0x92,0x54,0x92,0x7C,0x92,0x00,0x82,0x00,0x02,0x00,0x00};//星
unsigned char code qi[]={0x00,0x42,0x20,0x44,0xFF,0xD8,0x2A,0x40,0x2A,0x40,0x2A,0x50,0xFF,0xCC,0x20,0x46,
						 0x00,0x18,0x7F,0xE0,0x44,0x40,0x44,0x44,0x44,0x42,0x7F,0xFC,0x00,0x00,0x00,0x00};//期
unsigned char code yi[]={0x00,0x00,0x01,0x00,0x01,0x00,0x01,0x00,0x01,0x00,0x01,0x00,0x01,0x00,0x01,0x00,
0x01,0x00,0x01,0x00,0x01,0x00,0x01,0x00,0x01,0x00,0x03,0x00,0x01,0x00,0x00,0x00};//一 
unsigned char code er[]={0x00,0x00,0x00,0x08,0x20,0x08,0x20,0x08,0x20,0x08,0x20,0x08,0x20,0x08,0x20,0x08,
0x20,0x08,0x20,0x08,0x20,0x08,0x60,0x08,0x20,0x08,0x00,0x18,0x00,0x08,0x00,0x00};//二
unsigned char code san[]={0x00,0x00,0x20,0x04,0x21,0x04,0x21,0x04,0x21,0x04,0x21,0x04,0x21,0x04,0x21,0x04,
0x21,0x04,0x21,0x04,0x21,0x04,0x21,0x04,0x21,0x04,0x20,0x04,0x00,0x04,0x00,0x00};//三 */
unsigned char code si[]={0x00,0x00,0x7F,0xFE,0x40,0x14,0x40,0x24,0x40,0xC4,0x7F,0x04,0x40,0x04,0x40,0x04,
						 0x7F,0x84,0x40,0x44,0x40,0x44,0x40,0x44,0x40,0x44,0x7F,0xFE,0x00,0x00,0x00,0x00};//四
unsigned char code wu[]={0x00,0x04,0x40,0x04,0x41,0x04,0x41,0x04,0x41,0x04,0x41,0xFC,0x7F,0x04,0x41,0x04,
0x41,0x04,0x41,0x04,0x43,0xFC,0x41,0x04,0x40,0x04,0x00,0x0C,0x00,0x04,0x00,0x00};//五
unsigned char code liu[]={0x08,0x00,0x08,0x02,0x08,0x04,0x08,0x08,0x08,0x30,0x89,0xC0,0x48,0x80,0x78,0x00,
0x29,0x00,0x08,0x80,0x08,0x40,0x08,0x30,0x08,0x1E,0x08,0x0C,0x08,0x00,0x00,0x00};//六
unsigned char code ri[]={0x00,0x00,0x00,0x00,0x00,0x00,0x7F,0xFC,0x42,0x08,0x42,0x08,0x42,0x08,0x42,0x08,
0x42,0x08,0x42,0x08,0x42,0x08,0x7F,0xFC,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};//日*/
unsigned char code num[10][16]={
{0x00,0x00,0x07,0xF0,0x08,0x08,0x10,0x04,0x10,0x04,0x08,0x08,0x07,0xF0,0x00,0x00},/*"0"*/
{0x00,0x00,0x08,0x04,0x08,0x04,0x1F,0xFC,0x00,0x04,0x00,0x04,0x00,0x00,0x00,0x00},/*"1"*/
{0x00,0x00,0x0E,0x0C,0x10,0x14,0x10,0x24,0x10,0x44,0x11,0x84,0x0E,0x0C,0x00,0x00},/*"2"*/
{0x00,0x00,0x0C,0x18,0x10,0x04,0x11,0x04,0x11,0x04,0x12,0x88,0x0C,0x70,0x00,0x00},/*"3"*/
{0x00,0x00,0x00,0xE0,0x03,0x20,0x04,0x24,0x08,0x24,0x1F,0xFC,0x00,0x24,0x00,0x00},/*"4"*/
{0x00,0x00,0x1F,0x98,0x10,0x84,0x11,0x04,0x11,0x04,0x10,0x88,0x10,0x70,0x00,0x00},/*"5"*/
{0x00,0x00,0x07,0xF0,0x08,0x88,0x11,0x04,0x11,0x04,0x18,0x88,0x00,0x70,0x00,0x00},/*"6"*/
{0x00,0x00,0x1C,0x00,0x10,0x00,0x10,0xFC,0x13,0x00,0x1C,0x00,0x10,0x00,0x00,0x00},/*"7"*/
{0x00,0x00,0x0E,0x38,0x11,0x44,0x10,0x84,0x10,0x84,0x11,0x44,0x0E,0x38,0x00,0x00},/*"8"*/
{0x00,0x00,0x07,0x00,0x08,0x8C,0x10,0x44,0x10,0x44,0x08,0x88,0x07,0xF0,0x00,0x00} /*"9"*/
};
