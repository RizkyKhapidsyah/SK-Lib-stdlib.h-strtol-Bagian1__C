#include <stdio.h>      
#include <stdlib.h>     
#include <conio.h>

/*
	Source by CPlusPlus (https://www.cplusplus.com)
	Modified For Learn by RK
	I.D.E : VS2022
*/

int main() {
	char szNumbers[] = "2001 60c0c0 -1101110100110100100000 0x6fffff";
	char* pEnd;
	long int li1, li2, li3, li4;

	li1 = strtol(szNumbers, &pEnd, 10);
	li2 = strtol(pEnd, &pEnd, 16);
	li3 = strtol(pEnd, &pEnd, 2);
	li4 = strtol(pEnd, NULL, 0);
	
	printf("The decimal equivalents are: %ld, %ld, %ld and %ld.\n", li1, li2, li3, li4);

	_getch();
	return 0;
}