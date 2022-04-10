
/****************************************
            AFFICHEUR LCD 
          sur carte PICDEM2+
*****************************************

            Library LCD
  
****************************************/

#ifndef __LIB_LCD
#define	__LIB_LCD

#include <xc.h>  


// Etape 1 : Simplification des acc�s
// On introduira ici tous les symboles et macros utiles qui faciliteront 
// la maintenance et la lisibilit� du fichier source correspondant
#define RS RD4 // entr�e RS reli�e � RD4
//...

// Etape 2 : D�veloppement de fonctions d'envoi de n'importe quelle instruction
void lcd_write_instr_4bits(unsigned char operation, unsigned char c);
void lcd_write_instr_8bits(unsigned char operation, unsigned char c);
void lcd_busy();

// Etape 3 : D�veloppement des fonctions correspondant aux diff�rentes instructions
void lcd_home();
void lcd_clear();
void lcd_entry_mode_set(unsigned char inc_dec, unsigned char shift);
void lcd_display_control(unsigned char display, unsigned char cursor, unsigned char blink);
void lcd_shift_cursor(signed char amount);
void lcd_function_set(unsigned char data_length, unsigned char lines, unsigned char font);

// Etape 4 : D�veloppement de la fonction d'initialisation
void lcd_init();

// Etape 5 : D�veloppement des fonctions utilisateur restantes.
void lcd_putch(unsigned char c);
void lcd_puts(const unsigned char *s);
void lcd_pos(unsigned char ligne, unsigned char pos);

#endif	/* __LIB_LCD */
