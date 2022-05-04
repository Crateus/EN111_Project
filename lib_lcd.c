//**************************************************************
//Initialisation générale de l'afficheur en mode 4 bits
//**************************************************************
void lcd_init (void)
{
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
