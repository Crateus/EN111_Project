#include <pic.h>
#include "lcd_init.h" 


//**************************************************************
//Temporisation de x us
//**************************************************************
void Tempo_us (unsigned short nb_us)
{
    	T2CON=0x04; //Activation de TIMER2
	T2CKPS1 = 0;
	T2CKPS0 = 0;

	if (nb_us > 1023)
		{
			T2CKPS1 = 1;
			T2CKPS0 = 1;
			nb_us /= 16;
		}
	else if (nb_us > 255)
		{
			T2CKPS1 = 0;
			T2CKPS0 = 1;
			nb_us /= 4;
		}
	
	TMR2 = 0;
	while ( TMR2 < nb_us );
}

void lcd_write(void){ //On active simplement le signal de validation pendant une courte période et on l'éteint ensuite pour effectuer d'autres opérations
	E=1; 
	Tempo_us(2);
	E=0; 
}
//**************************************************************
//Initialisation générale de l'afficheur en mode 4 bits
//**************************************************************
void lcd_init (void)
{
    TRISD=0X00; // LCD en  sortie
    PORTD=0x00;
    VCC=1;
    Tempo_us(4000);Tempo_us(4000);Tempo_us(4000);Tempo_us(4000);Tempo_us(4000);//attente 15ms
    
    RS=0;RW=0; //Ecriture d'instructions
	PORTD &= 0xF0; PORTD |= 0x03; //Mode 8 bits

	lcd_write();
	Tempo_us(4000);Tempo_us(1000);
 	lcd_write();
	Tempo_us(200);
	lcd_write();
	Tempo_us(80);

	PORTD &= 0xF0; PORTD |= 0x02; //Mode 4 bits
	lcd_write();
	Tempo_us(80);

	PORTD &= 0xF0; PORTD |= 0x02;  //2 lignes et matrice de 8x5 pixels
	lcd_write();
    Tempo_us(80);
	PORTD &= 0xF0; PORTD |= 0x08;
	lcd_write();
	Tempo_us(80);

	PORTD &= 0xF0; PORTD |= 0x00;  //effacement de l'ecran
	lcd_write();
	PORTD &= 0xF0; PORTD |= 0x01;
	lcd_write();
	Tempo_us(3000);
	Tempo_us(2000);

	PORTD &= 0xF0; PORTD |= 0x00;  //curseur visible, pas de clignotement
	lcd_write();
    Tempo_us(80);
	PORTD &= 0xF0; PORTD |= 0x0C;
	lcd_write();
	Tempo_us(80);

	PORTD &= 0xF0; PORTD |=0x00; //Auto-incrémentation du curseur
	lcd_write();
    Tempo_us(80);
	PORTD &= 0xF0; PORTD |=0x06;
	lcd_write();
	Tempo_us(80);
    lcd_busy();
}

//**************************************************************
//Test le bit  BF jusqu'à ce que l'afficheur soit prêt
//**************************************************************
void lcd_busy (void)
{
	int  busy;
	TRISD = 0x0F;
	RW = 1 ; 
	RS = 0;
	do {
			E = 1;
			Tempo_us(1);
			busy=PORTD;
			E = 0;
	   }
	while ( ( busy & 0x0F ) >= 0x08 );
	TRISD = 0x00;
}
