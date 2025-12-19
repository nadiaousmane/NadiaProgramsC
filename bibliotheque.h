#ifndef __MY_MATH_LIB_H 
#define __MY_MATH_LIB_H 

// Définition de la structure Point
typedef struct  {
    float x;
    float y;
}Point;

// Définition d'une fonction de calcul de factorielle. 
unsigned int fact( unsigned int value ); 
// Définition d'une fonction d'élévation à une puissance données. 
int power( int value, unsigned int pow ); 
// Defiition d'une fonction de permutation de deux entiers.
void permutation(int *a, int *b);
// Definition d'une fontion qui verifie si un entier est premier ou pas.
void IsPrimeNumber(int n);
// Definition d'une fonction qui resoud l'equation du econd degre.
void solverEquarion(double a, double b, double c);
// Definition d'une fonction qui calcul la distance entre deux points.
double distancePoint(Point x, Point y); 
#endif