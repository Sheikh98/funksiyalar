#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>

void powerA234(int son){
    int kvadrati= pow(son,2), kubi = (son,3) ;
    printf ("\n\nSon: %d", son);
    printf("\nSon^2: %d", kvadrati);
    printf ("Son^3: %d",kubi);
}
int main(){
    for(int i=1; i<=2; i++){
        powerA234(i);
    }
return 0;
}
