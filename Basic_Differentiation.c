#include<stdio.h>

int main(){
  int a;
  int b;
  int result;

  printf("welcome to Differential Calculator\n");
printf("input number ");
scanf("%d",&a);
 printf("input power of number ");
scanf("%d",&b);

result=b*a;
printf(" Answer is:%d^%d\n",result,b-1);
printf("final Answer is: %d to the power of %d",result,b-1);


}
