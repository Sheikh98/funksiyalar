#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>

int AddRightDigit(int num, int digit){
    return num*10+digit;
}
int main (){
    int n, R;
    printf("Enter an integer:");
    scanf("%d", &n);
    
    printf("\nEnter a digit R (0<=R<=9) to add to the right of %d:",n);
    scanf("%d", &R);
    (0<=R&&R<=9)?printf("\n%d\n",AddRightDigit(n,R)):printf("\nEnter a correct digit (0<=R<=9)\n");
    return 0;
}