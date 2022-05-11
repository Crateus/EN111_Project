#define RS RD4 //entr�e RS reli�e a RD4
#define RW RD5 //entr�e RW reli�e � RD5
#define BF RD3 //Ent�e BF reli�e � RD3
#define E  RD6 //entr�e E reli�e � RD6
#define VCC RD7 //conr�le de l'alimention de l'afficheur lcd
#define S2  RA4 //entr�e S3 reli�e � RA4
#define S3  RB0 //entr�e S2 reli�e � RB0
// on introduira ici tous les symboles et macros utiles qui faciliteront la maintenance et la lisibilit� du fuchier source correspondant

void Tempo_us ( unsigned short nb_us );
void lcd_init ( void);
void lcd_busy (void);
void lcd_write_instr (unsigned char c);
void lcd_putch (unsigned char c );
void lcd_puts (const unsigned char * s);
void lcd_pos (unsigned char ligne,unsigned char pos);
void lcd_clear (void);
void lcd_home (void);

