#define RS RD4 //entr�e RS reli�e a RD4
#define RW RD5 //entr�e RW reli�e � RD5
#define E  RD6 //entr�e E reli�e � RD6
#define VCC RD7 //conr�le de l'alimention de l'afficheur lcd
// on introduira ici tous les symboles et macros utiles qui faciliteront la maintenance et la lisibilit� du fuchier source correspondant

void Tempo_us ( unsigned short nb_us );
void lcd_init ( void);
void lcd_busy (void);


