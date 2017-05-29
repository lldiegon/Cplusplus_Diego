#include <iostream>
#include "window.hpp"
#include "opgevulde_rechthoek.hpp"
#include "huis.hpp"

int main(int argc, char **argv){
	
	int keuze;
	
	printf("1: Een opgevulde rechthoek \n");
	printf("2: Een huis \n");
	printf("Vul het nummer in van wat u wilt printen: ");
	scanf("%d", &keuze);
	printf("%d", keuze);
	window w( 256, 128, 2 );

	if (keuze == 1){
		opgevulde_rechthoek vak(w,10, 10, 30, 50);
		vak.print();
		}
	   
	else if (keuze == 2){
		huis w( w );
		w.print();
		}
	
	else{
		printf("Foutieve invoer!");
	}
	
	return 0;
}
