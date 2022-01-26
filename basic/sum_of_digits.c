#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int n,a,b,c,d,e,f,g,h,i,sum;
    scanf("%d", &n);
   //12345
   
   sum += (n%10);//5
   n=n/10;//1234
   sum += (n%10);//4
   n=n/10;//123
   sum += (n%10);//3
   n=n/10;//12
   sum += (n%10);//2
   n=n/10;//1
   sum += n;
   printf("%d",sum);
   return 0;
}
