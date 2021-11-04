//agar son musbat bolsa 1 ga oshirsin
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
double Sim(double son){

    if (son<0) {
        return -1;
    }else{ 
        return 1;
    }
    if (son==0){
        return 0;
    }
    
}
int main()
{
    double A, B, natija;
    printf("son kriting ");
    scanf("%lf", &A);
    printf("son kriting ");
    scanf("%lf", &B);
    
    printf("%lf\n",Sim(A));
    printf("%lf\n",Sim(B));
    printf("%lf\n",(A+B));
    
    
    return 0;
}