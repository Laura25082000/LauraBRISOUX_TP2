#include<stdlib.h>
#include<stdio.h>
#include<math.h>

int main() {
	//boucle for
	int somme = 0;
	unsigned short int n;
	int i = 1;
	printf("rentrer un entier n inferieur ou egal a 361:");
	scanf_s("%hu", &n);
	while (n > 361) {
		printf("\nrentrer un entier n inferieur ou egal a 361:");
		scanf_s("%hu", &n);
	}

	for (i = 1; i <= n; i++) {
		somme += i;
	}
	printf("\nLa somme des %d premiers entiers positifs, est %d pour la boucle for", n, somme);

	//boucle while
	int somme2 = 0;
	int n2 = 1;
	while ((n2 <= n) & (pow(2, 16) - somme2 >= n2)) {
		somme2 += n2;
		n2++;
	}

	printf("\nLa somme des %d premiers entiers positifs, est %d pour la boucle while", n, somme2);

	//boucle do while
	int somme3 = 0;
	int n3 = 1;
	do {
		somme3 += n3;
		n3++;
	} while (n3 <= n);
	printf("\nLa somme des %d premiers entiers positifs, est %d pour la boucle do while", n, somme3);

	//valeur maximale de n
	printf("\nla somme est codee sur %d octets", sizeof(unsigned short int));
	// la somme est codée sur 2 octets  soit 2^16 codes possibles
	// (n(n+1))/2 < 2^16
	// la valeur maximale de n est 361



	return(EXIT_SUCCESS);
}
