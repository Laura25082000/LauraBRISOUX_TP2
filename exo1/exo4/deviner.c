#include<stdlib.h>
#include<stdio.h>

int main() {

	int devinette = rand() % 100;
	int propositions = 1;
	int nombre;

	printf("rentrer un nombre : ");
	scanf_s("%d", &nombre);

	while (nombre != devinette) {
		if (nombre < devinette) {
			printf("\nTROP PETIT");
			printf("\nrentrer un nombre : ");
			scanf_s("%d", &nombre);
		}

		else {

			printf("\nTROP GRAND");
			printf("\nrentrer un nombre : ");
			scanf_s("%d", &nombre);
		}
		propositions++;

	}
	printf("\n BRAVO, vous avez tente %d fois", propositions);

	return(EXIT_SUCCESS);





}