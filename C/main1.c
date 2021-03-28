// Loops

#include<stdio.h>
int main(){

    int countr=1;

    do {
        printf("%d\n",countr);
        countr++;
    } while (countr<=10);

    float num,sum;
    do{
        puts("Enter the number: ");
        scanf("%f",&num);
        sum += num;
    } while(num!=0);
    
    printf("The sum is: %.3f",sum);
    
    
    return 0;
}