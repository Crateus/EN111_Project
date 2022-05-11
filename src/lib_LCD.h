#define RS RD4 //entrée RS reliée a RD4
#define RW RD5 //entrée RW reliée à RD5
#define BF RD3 //Entée BF reliée à RD3
#define E  RD6 //entrée E reliée à RD6
#define VCC RD7 //conrôle de l'alimention de l'afficheur lcd
#define S2  RA4 //entrée S3 reliée à RA4
#define S3  RB0 //entrée S2 reliée à RB0
// on introduira ici tous les symboles et macros utiles qui faciliteront la maintenance et la lisibilité du fuchier source correspondant

void Tempo_us ( unsigned short nb_us );
void lcd_init ( void);
void lcd_busy (void);
void lcd_write_instr (unsigned char c);
void lcd_putch (unsigned char c );
void lcd_puts (const unsigned char * s);
void lcd_pos (unsigned char ligne,unsigned char pos);
void lcd_clear (void);
void lcd_home (void);

