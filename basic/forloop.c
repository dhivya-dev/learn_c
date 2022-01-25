#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


 void printNumberName(int);
 void printOddOrEven(int);
 int main() 
{
    int a, b;
    scanf("%d%d", &a, &b);
    printNumberName(a);
    printNumberName(b);
    printOddOrEven(a);
    printOddOrEven(b);
    return 0;
 }
    
void printOddOrEven(int n){
    if(n%2 == 0)
    {
    printf("even");
    }
    else
    {
    printf("odd");
    }
    printf("\n");
 }

void printNumberName(int n){
    char numbers[10][10]={ "one","two","three","four","five","six","seven","eight","nine"};
    if(n<=1){
    printf("one");
    }else if(n>=9){
    printf("nine");
    }else{
    printf("%s",numbers[n-1]);
    }
    printf("\n");
    }

