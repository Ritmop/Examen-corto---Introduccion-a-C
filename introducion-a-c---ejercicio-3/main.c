/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{   
    int n;
    int n0 = 0,n1 = 1,n2;
    printf("Ingrese la cantidad de términos: ");
    scanf("%d",&n);
    
    for(int i=1; i<=n; i++){
        n2 = n1+n0;
        n0 = n1;
        n1 = n2;
        printf("%d ",n2);
    }
    return 0;
}
