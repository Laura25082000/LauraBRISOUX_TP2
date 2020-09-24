#include<stdlib.h>
#include<stdio.h>


//fonction pour échanger des valeurs
void Echanger(int* val1, int* val2) {
	int valeur;
	valeur = *val1;
	*val1 = *val2;
	*val2 = valeur;
}

int main() {
	int bag = 1;
	while (bag == 1) {

		// Saisie des dimensions du bagage en centimetres
		float longueur;
		float largeur;
		float hauteur;


		printf("rentrer la longueur du bagage en centimetres:");
		scanf_s("%f", &longueur);
		while ((longueur < 1) || (longueur > 150)) { // || signifie ou
			printf("\nrentrer la longueur du bagage en centimetres:");
			scanf_s("%f", &longueur);
		}

		printf("\nrentrer la largeur du bagage en centimetres:");
		scanf_s("%f", &largeur);
		while ((largeur < 1) || (largeur > 150)) {
			printf("\nrentrer la largeur du bagage en centimetres:");
			scanf_s("%f", &largeur);
		}


		printf("\nrentrer la hauteur du bagage en centimetres:");
		scanf_s("%f", &hauteur);
		while ((hauteur < 1) || (hauteur > 150)) {
			printf("\nrentrer la hauteur du bagage en centimetres:");
			scanf_s("%f", &hauteur);
		}


		//échange des valeurs pour avoir la largeur plus petite, la longueur au milieu et la hauteur plus grande
		if (longueur < largeur)
			Echanger(&largeur, &longueur);
		if (hauteur < largeur)
			Echanger(&largeur, &hauteur);
		if (hauteur < longueur)
			Echanger(&longueur, &hauteur);
		printf("\n%f cm* %f cm* %f cm", largeur, longueur, hauteur);

		// Comparaison des dimensions avec les dimensions valides
		if ((largeur <= 25) & (longueur <= 35) & (hauteur <= 55))
			printf("\n Le bagage est VALIDE");
		else
			printf("\n Le bagage n'est PAS VALIDE");


		//redemarrer le programme
		printf("\nAvez vous un autre bagage? si oui tapez 1, sinon tapez 0 : ");
		scanf_s("%hu", &bag);
	}

	return(EXIT_SUCCESS);
}