
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>

void mean (double son1, double son2){
    printf("O'rta arifmetik: %lf\n", (son1 + son2)/2);
    printf("\n\n");
}
void geo ( double son1, double son2){
    printf("geometrik: %lf\n", sqrt(son1+son2)/2);
    printf("\n\n");
}
int main(){
    double A=4, B=5, C=6, D=7;
    mean(A,B);
    mean(A,C);
    mean(A,D);
    
    geo(A,B);
    geo(A,C);
    geo(A,D);
    return 0;
    
    
}

