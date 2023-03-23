/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include "operaciones.h"

int main()
{   
    int a, b, c;
    float pi_r;
    printf("Ingrese dos números enteros separados por un espacio: ");
    scanf("%d %d",&a,&b);
    c = suma(a,b);
    printf("%d + %d = %d\n",a,b,c);
    c = resta(a,b);
    printf("%d - %d = %d\n",a,b,c);
    c = multi(a,b);
    printf("%d * %d = %d\n",a,b,c);
    c = divi(a,b);
    printf("%d / %d = %d\n",a,b,c);
    pi_r = pi();
    printf("PI = %f",pi_r);
    return 0;
}
