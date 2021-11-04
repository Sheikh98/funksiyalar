/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>

void InvertDigit (int son1, int son2){
    int counter=0;
    printf("butun musbat sonlar teskari tartibda: %d \n");
    for(int i=son1; i>=son2; i--){
        printf("\n%d",i);
        counter++;
    }
    printf("\nchiqqan sonlar soni %d\n",counter);
    
}
int main(){
    int a=10, b=1;
    InvertDigit(a,b);
    return 0;
    
}