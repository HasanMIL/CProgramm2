// main.c
#include <stdio.h>
#include "quadrat.h"

int main(void){
	int zahl = 2;
	printf("Quadratzahl von %d ist %d\n ", zahl, quadrat(zahl));
	return 0;
}