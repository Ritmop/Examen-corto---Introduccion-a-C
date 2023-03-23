/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main(){
    float c, f;
    printf("Ingrese la temperatura en grados Fahrenheit: ");
    scanf("%f",&f);
    c = (f-32) * 5/9;
    printf("La temperatura en grados Celsius es: %.2f",c);
    return 0;
}

