#include <stdio.h> 
#include <stdlib.h> 
#include "bibliotheque.h" 

int main(void)
{
    int choice;
    do {
        printf("\nMenu:\n");
        printf("1. Calculer la factorielle d'un entier positif\n");
        printf("2. Elever un entier a une puissance donnee\n");
        printf("3. Permuter deux entiers\n");
        printf("4. Verifier si un entier est premier\n");
        printf("5. Resoudre une equation du second degre\n");
        printf("6. Calculer la distance entre deux points\n");
        printf("7. Array\n");
        printf("0. Quitter\n");
        printf("Entrez votre choix: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1: {
            unsigned int value;
            printf("Entrez un entier positif pour calculer sa factorielle : ");
            scanf("%u", &value);
            printf("Factorielle de %u est %u\n", value, fact(value));
            break;
        }

        case 2: {
            int value;
            unsigned int pow;
            printf("Entrez un entier et une puissance :\n");
            printf("Entier : ");
            scanf("%d", &value);
            printf("Puissance : ");
            scanf("%u", &pow);
            printf("%d eleve a la puissance %u est %d\n", value, pow, power(value, pow));
            break;
        }

        case 3: {
            int a, b;
            printf("Entrez deux entiers a et b :\n");
            printf("Entrez a : ");
            scanf("%d", &a);
            printf("Entrez b : ");
            scanf("%d", &b);
            printf("Avant : a=%d, b=%d\n", a, b);
            permutation(&a, &b);
            printf("Apres : a=%d, b=%d\n", a, b);
            break;
        }

        case 4: {
            int n;
            printf("Entrez un entier : ");
            scanf("%d", &n);
            estPremier(n) ? printf("%d est un nombre premier.\n", n) : printf("%d n'est pas un nombre premier.\n", n);
            break;
        }

        case 5: {
            double a, b, c;
            printf("Soit l'equation ax^2 + bx + c = 0\n");
            printf("Entrez a : ");
            scanf("%lf", &a);
            printf("Entrez b : ");
            scanf("%lf", &b);
            printf("Entrez c : ");
            scanf("%lf", &c);
            equationSecondDegre(a, b, c);
            break;
        }
        case 6: {
            Point p1, p2;
            double d;

            printf("Entrez les coordonnees du premier point\n");
            printf("x1 : ");
            scanf("%lf", &p1.x);
            printf("y1 : ");
            scanf("%lf", &p1.y);

            printf("Entrez les coordonnees du deuxieme point\n");
            printf("x2 : ");
            scanf("%lf", &p2.x);
            printf("y2 : ");
            scanf("%lf", &p2.y);

            d = distancePoint(p1, p2);
            printf("La distance entre les deux points est : %.2lf\n", d);

            break;
        }
        case 7:
            arrayPrint();
            break;
        default :
            break;
        }
    } while (choice != 0);

    return 0;
}