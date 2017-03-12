/*
 * IncFile1.h
 *
 * Created: 11/06/2016 21:49:48
 *  Author: Jéfferson
*/


void bignumberswrite(uint8_t number, uint8_t pos){
	
	if (pos==1)
	{
		pos=4;
	}
	
	if (pos==2)
	{
		pos=12;
	}
	
	if (pos==3)
	{
		pos=16;
	}
	
	
	
	if (number==0)
	{
	lcd_writec_xy(255,0+pos,1);
	lcd_writec_xy(255,1+pos,1);
	lcd_writec_xy(255,2+pos,1);
	
	lcd_writec_xy(255,0+pos,4);
	lcd_writec_xy(255,1+pos,4);
	lcd_writec_xy(255,2+pos,4);
	
	lcd_writec_xy(255,0+pos,2);
	lcd_writec_xy(255,0+pos,3);
	
	lcd_writec_xy(255,2+pos,2);
	lcd_writec_xy(255,2+pos,3);
	}
	
	if (number==1){
	lcd_writec_xy(255,0+pos,4);	
	lcd_writec_xy(255,1+pos,4);	
	lcd_writec_xy(255,2+pos,4);	
	
	lcd_writec_xy(255,1+pos,1);
	lcd_writec_xy(255,1+pos,2);
	lcd_writec_xy(255,1+pos,3);
	
	lcd_writec_xy(255,0+pos,1);
	}
	
	if (number==2){	
	lcd_writec_xy(255,0+pos,1);
	lcd_writec_xy(255,1+pos,1);
	lcd_writec_xy(255,2+pos,1);	
	
	lcd_writec_xy(255,0+pos,4);
	lcd_writec_xy(255,1+pos,4);
	lcd_writec_xy(255,2+pos,4);
	
	lcd_writec_xy(255,2+pos,2);
	lcd_writec_xy(255,1+pos,3);	
	}
	
	if (number==3){
	lcd_writec_xy(255,0+pos,1);
	lcd_writec_xy(255,1+pos,1);
	lcd_writec_xy(255,2+pos,1);
	
	lcd_writec_xy(255,0+pos,4);
	lcd_writec_xy(255,1+pos,4);
	lcd_writec_xy(255,2+pos,4);
	
	lcd_writec_xy(255,2+pos,2);
	lcd_writec_xy(255,2+pos,3);
	lcd_writec_xy(255,1+pos,2);
			
	}
	
	if (number==4){	
	lcd_writec_xy(255,0+pos,1);
	lcd_writec_xy(255,0+pos,2);
	lcd_writec_xy(255,0+pos,3);
	
	lcd_writec_xy(255,2+pos,1);
	lcd_writec_xy(255,2+pos,2);
	lcd_writec_xy(255,2+pos,3);
	lcd_writec_xy(255,2+pos,4);	
	
	lcd_writec_xy(255,1+pos,3);
		
	}
	
	if (number==5){
	lcd_writec_xy(255,0+pos,1);
	lcd_writec_xy(255,1+pos,1);
	lcd_writec_xy(255,2+pos,1);
	
	lcd_writec_xy(255,0+pos,2);
	lcd_writec_xy(255,1+pos,2);
	lcd_writec_xy(255,2+pos,2);
	
	lcd_writec_xy(255,0+pos,4);
	lcd_writec_xy(255,1+pos,4);
	lcd_writec_xy(255,2+pos,4);
	
	lcd_writec_xy(255,2+pos,3);	
		
	}
	
	if (number==6){
	lcd_writec_xy(255,0+pos,1);	
	
	lcd_writec_xy(255,0+pos,2);
	lcd_writec_xy(255,1+pos,2);
	lcd_writec_xy(255,2+pos,2);
	
	lcd_writec_xy(255,0+pos,4);
	lcd_writec_xy(255,1+pos,4);
	lcd_writec_xy(255,2+pos,4);
	
	lcd_writec_xy(255,0+pos,3);
	lcd_writec_xy(255,2+pos,3);

	
	}
	
	if (number==7){
	lcd_writec_xy(255,0+pos,1);
	lcd_writec_xy(255,1+pos,1);
	lcd_writec_xy(255,2+pos,1);
	
	lcd_writec_xy(255,1+pos,4);
	lcd_writec_xy(255,1+pos,3);
	
	lcd_writec_xy(255,2+pos,2);
	}
	
	if (number==8){
	lcd_writec_xy(255,0+pos,1);
	lcd_writec_xy(255,1+pos,1);
	lcd_writec_xy(255,2+pos,1);	
		
	lcd_writec_xy(255,0+pos,2);
	lcd_writec_xy(255,1+pos,2);
	lcd_writec_xy(255,2+pos,2);
	
	lcd_writec_xy(255,0+pos,4);
	lcd_writec_xy(255,1+pos,4);
	lcd_writec_xy(255,2+pos,4);
	
	lcd_writec_xy(255,0+pos,3);
	lcd_writec_xy(255,2+pos,3);
	}
	
	if (number==9){
	lcd_writec_xy(255,0+pos,1);
	lcd_writec_xy(255,1+pos,1);
	lcd_writec_xy(255,2+pos,1);
	
	lcd_writec_xy(255,0+pos,2);
	lcd_writec_xy(255,1+pos,2);
	lcd_writec_xy(255,2+pos,2);
	
	lcd_writec_xy(255,0+pos,4);
	lcd_writec_xy(255,1+pos,4);
	lcd_writec_xy(255,2+pos,4);	
	
	lcd_writec_xy(255,2+pos,3);
	}

	if (number==10){
		lcd_writec_xy(255,9,1);
		lcd_writec_xy(255,9,3);

	}	
}
  