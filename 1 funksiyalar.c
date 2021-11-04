#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>


double powerA234(double son2, double son3, double son4){
    return pow(son2,2);
    return pow(son3,3);
    return pow(son4,4);
}
int main(){
    double A=5, B=4, C=3;
    printf("A= \n%lf", powerA234 (A));
    printf("B= \n%lf", powerA234 (B));
    printf("C= \n%lf", powerA234 (C));
    return 0;
}
