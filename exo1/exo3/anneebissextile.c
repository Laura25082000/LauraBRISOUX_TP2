#include<stdlib.h>
#include<stdio.h>


int main() {
	unsigned short int n;
	int c = 1;
	printf("rentrer une annee inferieure ou egale a 10000:");
	scanf_s("%hu", &n);
	while ((n > 10000) || (n < 0)) {
		printf("\nrentrer une annee inferieure ou egale a 10000:");
		scanf_s("%hu", &n);
	}


	//premier programme
	if (n % 4 == 0)
		c = 0;
	if (n % 100 == 0)
		c = 1;
	if (n % 400 == 0)
		c = 0;

	if (c == 0)
		printf("\nL annee %d est bissextile", n);
	else
		printf("\nL annee %d n est pas bissextile", n);

	// deuxieme programme

	if (((n % 400 != 0) & (n % 100 == 0)) || ((n % 4 != 0)))  //on exclut les cas où l'année n'est pas bissextile
		printf("\nL annee %d n est pas bissextile", n);
	else
		printf("\nL annee %d est bissextile", n);

	return(EXIT_SUCCESS);
}
