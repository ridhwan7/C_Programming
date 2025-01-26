#include<stdio.h>


int main(){
int i;
int j;

printf("Input First Number\n");
scanf("%d",&i);
printf("Input Second Number\n");
scanf("%d",&j);


while (i>1){
        int temps;
        int finals;
    i/=2;
    j*=2;
    if(i%2!=0 ){
         temps =j;
         finals+=temps;

    }

    if(i<=1){
    printf("%d",finals);



}


}}
