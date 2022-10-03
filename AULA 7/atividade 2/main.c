#include <stdio.h>
#include <stdlib.h>
#include "conio2.h"

main() {
	while (1) {
		int i;
		system ("color f0");
		
		for (i =0; i < 119; i++) {
			gotoxy(0, 0);
			printf("*");
			gotoxy(i+1, 0);
			//textcolor(i+1);
			printf("*");
			gotoxy(i+1, 29);
			//textcolor(i+1);
			printf("*");
		}
		for (i = 0; i < 29; i++) {
			gotoxy (0, i+1);
			//textcolor(i+1);
			printf("*");
			gotoxy (119, i+1);
			//textcolor(i+1);
			printf("*");
			gotoxy (55, 12);
			printf ("Bom dia!");
		}
		sleep(1);
		system("cls");
		sleep(1);
	}	
}
