// Loops

#include<stdio.h>
int main(){

    int countr=1;
    
    while (countr<=10){
        printf("The natural Numbers are %d \n",countr);
        countr++;
    }

    int num=5;
    long factorial = 1;

    while (num>0){
        factorial=factorial*num;
        num--;
    }

    printf("Factorial is: %ld ", factorial);
   
    return 0;
}