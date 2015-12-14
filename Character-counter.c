//INFO: I wrote this for linux (KALI)
#include <stdio.h>
#include <string.h>
#define NORMAL  "\x1B[0m"
#define RED  "\x1B[31m"
#define GREEN  "\x1B[32m"
#define YELLOW  "\x1B[33m"
#define BLUE  "\x1B[34m"
#define MAGENTA  "\x1B[35m"
#define CYAN  "\x1B[36m"
#define WHITE  "\x1B[37m"
#define RESET "\033[0m"
#define STYLE_BOLD         "\033[1m"
#define STYLE_NO_BOLD      "\033[22m"
#define STYLE_UNDERLINE    "\033[4m"
#define STYLE_NO_UNDERLINE "\033[24m"
//fgets(string, sizeof(string), stdin);


int main()
{
printf("\033[2J"); //Clear screen
printf(STYLE_BOLD YELLOW "                                            ");// TITLE
printf(STYLE_UNDERLINE STYLE_BOLD YELLOW" THEWEBS PROGRAM \n\n\n"); //TITLE
char texto1[512];
printf(STYLE_NO_UNDERLINE STYLE_NO_BOLD GREEN "Escreve o teu texto (MAX: 511): " RESET); 
fgets(texto1, sizeof(texto1), stdin); //GET INPUTED TEXT
int caracteres = strlen(texto1); //GET TEXT LENGTH
printf(GREEN "Escreves-te ");
printf(RED "%i", caracteres-1); //DISPLAY LENGTH
printf(GREEN " caracteres! \n");


return 0;
}

