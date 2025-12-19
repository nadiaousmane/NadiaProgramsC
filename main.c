#include <stdio.h> 
#include <stdlib.h> 
#include "bibliotheque.h" 

int main(void)
{
    int choice;
    do {
        switch (choice) {

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
            isPrimeNumber(n);
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
            solverEquation(a, b, c);
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
        default :
            break;
        }
    } while (choice != 0);

}