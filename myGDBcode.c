#include <stdio.h>
int increment(int* k){
*k = *k +1;
return 42;
}
int main()
{
int a = 10;
int* pA = &a;
int r = increment(pA);
printf("La valeur de a est %d \n", a);
printf("La valeur de retour de la fonction increment est %d \n", r);
return 0;
}
