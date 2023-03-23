/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n = 4;
    int num[5];
    for(int i=0; i<=n; i++){
        printf("Ingrese el elemento %d del array: ", i);
        scanf("%d", &num[i]);
    }

    int *pNum;
    pNum = num;
    for(int i=0; i<= n; i++){
        printf("%d ",2* *(pNum+i));
    }
    
    return 0;
}


