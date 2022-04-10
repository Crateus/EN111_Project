
/****************************************
            AFFICHEUR LCD 
          sur carte PICDEM2+
*****************************************

            Library LCD
  
****************************************/

#include "lib_LCD.h"

/************************************************************************
                                ETAPE 1
 Simplification des acc�s 
************************************************************************/

// voir dans "Header Files" => lib_LCD.h


/************************************************************************
                                ETAPE 2
 D�veloppement de fonctions d'envoi de n'importe quelle instruction
************************************************************************/

// Envoi d'une instruction au format 4 bits (initialisation) vers le module LCD
void lcd_write_instr_4bits(unsigned char operation, unsigned char c){
    
}

// Envoi d'une instruction au format 8 bits vers le module LCD
void lcd_write_instr_8bits(unsigned char operation, unsigned char c) {
    
}

// Test le bit BF jusqu'� ce que l'afficheur soit pr�t
void lcd_busy() {
    
}


/************************************************************************
                                ETAPE 3
 D�veloppement des fonctions correspondant aux diff�rentes instructions
************************************************************************/

// voir DS_Afficheurs_Sunplus.pdf p5, p6 et p7

// Effacement de l'�cran
void lcd_clear() {
    
}

// Retour du curseur � l'origine
void lcd_home() {
    
}

// Direction du curseur et d�calage pendant l'ecriture
void lcd_entry_mode_set(unsigned char inc_dec, unsigned char shift) {
    
}

// Ecran ON/OFF, Curseur ON/OFF, Clignotement ON/OFF
void lcd_display_control(unsigned char display, unsigned char cursor, unsigned char blink) {
    
}

// D�placement du curseur
void lcd_shift_cursor(signed char amount) {
    
}

// Taille des donn�es (4 / 8 bits), nombre de lignes, taille des caract�res
void lcd_function_set(unsigned char data_length, unsigned char lines, unsigned char font) {
    
}


/************************************************************************
                                ETAPE 4
 D�veloppement de la fonction d'initialisation
************************************************************************/

// voir DS_Afficheurs_Sunplus.pdf p10 et p11

// Initialisation g�n�rale de l'afficheur
void lcd_init() {
    
}


/************************************************************************
                                ETAPE 5
 D�veloppement des fonctions utilisateur restantes.
************************************************************************/

// Ecriture d'un caract�re sur l'afficheur
void lcd_putch(unsigned char c) {
    
}

// Ecriture d'une chaine de caract�res sur l'afficheur
void lcd_puts(const unsigned char *s) {
    
}

// Positionnement du curseur en (x,y) - origine en (1,1)
void lcd_pos(unsigned char ligne, unsigned char pos) {
    
}
