
#define bit_get(p,m) ((p) & _BV(m))
#define bit_set(p,m) ((p) |= _BV(m))
#define bit_clear(p,m) ((p) &= ~_BV(m))
 
#define Keyboadport1 PINC
#define Keyboadpin1 0
#define Keyboardddr1 DDRC

#define Keyboadport2 PINC 
#define Keyboadpin2 1
#define Keyboardddr2 DDRC

#define Keyboadport3 PINC  
#define Keyboadpin3 2
#define Keyboardddr3 DDRC
 
#define Keyboadport4 PINC  
#define Keyboadpin4 3
#define Keyboardddr4 DDRC

#define Keyboadport6 PORTD	 
#define Keyboadpin6 3
#define Keyboardddr6 DDRD

#define Keyboadport7 PORTD
#define Keyboadpin7 4
#define Keyboardddr7 DDRD

#define Keyboadport8 PORTD
#define Keyboadpin8 5
#define Keyboardddr8 DDRD
 
 void init_keypad(){
	 bit_clear(Keyboardddr1,Keyboadpin1);
	 bit_clear(Keyboardddr2,Keyboadpin2);
	 bit_clear(Keyboardddr3,Keyboadpin3);
	 bit_clear(Keyboardddr4,Keyboadpin4);//entradas

	 bit_set(Keyboardddr6,Keyboadpin6);
	 bit_set(Keyboardddr7,Keyboadpin7);
	 bit_set(Keyboardddr8,Keyboadpin8);//saídas	 
	 
 }
 
 
 int get_keypad(){
	 

	 
	 bit_clear(Keyboadport6,Keyboadpin6);
	 bit_clear(Keyboadport7,Keyboadpin7);
	 bit_clear(Keyboadport8,Keyboadpin8);	 
	 bit_set(Keyboadport7,Keyboadpin7);
	 bit_set(Keyboadport7,Keyboadpin7);
	 _delay_ms(100);
	 if (Keyboadport1 & (0x01<<Keyboadpin1))
	 {
		 return 2;
	 } else if (Keyboadport2 & (0x01<<Keyboadpin2))
	 {
		 return 5;
	 } else if (Keyboadport3 & (0x01<<Keyboadpin3))
	 {
		 return 8;
	 } else if (Keyboadport4 & (0x01<<Keyboadpin4))
	 {
		 return 0;
	 }
	 
	 
	 
	 bit_clear(Keyboadport6,Keyboadpin6);
	 bit_clear(Keyboadport7,Keyboadpin7);
	 bit_clear(Keyboadport8,Keyboadpin8);
	 bit_set(Keyboadport8,Keyboadpin8);
	 bit_set(Keyboadport8,Keyboadpin8);
	 _delay_ms(100);	 
	 if (Keyboadport1 & (0x01<<Keyboadpin1))
	 {
		 return 1;
	 } else if (Keyboadport2 & (0x01<<Keyboadpin2))
	 {
		 return 4;
	 } else if (Keyboadport3 & (0x01<<Keyboadpin3))
	 {
		 return 7;
	 } else if (Keyboadport4 & (0x01<<Keyboadpin4))
	 {
		 return 10;
	 }
	 
	 bit_clear(Keyboadport6,Keyboadpin6);
	 bit_clear(Keyboadport7,Keyboadpin7);
	 bit_clear(Keyboadport8,Keyboadpin8);
	 bit_set(Keyboadport6,Keyboadpin6);
	 bit_set(Keyboadport6,Keyboadpin6);
	 _delay_ms(100);
	 if (Keyboadport1 & (0x01<<Keyboadpin1))
	 {
		 return 3;
	 } else if (Keyboadport2 & (0x01<<Keyboadpin2))
	 {
		 return 6;
	 } else if (Keyboadport3 & (0x01<<Keyboadpin3))
	 {
		 return 9;
	 } else if (Keyboadport4 & (0x01<<Keyboadpin4))
	 {
		 return 11;
	 }	 else return 255;
	 
	 	 

 }