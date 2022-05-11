#define RS RD4 //entrée RS reliée a RD4
#define RW RD5 //entrée RW reliée à RD5
#define E  RD6 //entrée E reliée à RD6
#define VCC RD7 //conrôle de l'alimention de l'afficheur lcd
// on introduira ici tous les symboles et macros utiles qui faciliteront la maintenance et la lisibilité du fuchier source correspondant

void Tempo_us ( unsigned short nb_us );
void lcd_init ( void);
void lcd_busy (void);


