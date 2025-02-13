#include<stdio.h>
int length;

int main(){
     printf("enter the number of numbers on your card\n");
scanf("%d",&length);
int numbers[length];
int len2;
int len3;

int sum=0;
int l=0;
if(length<16 ||length>19){

    printf("Error Digits must be from 16-19\n");



}

switch(length){
    case 16:
len2=length/2;
    len3=length/2;

    break;
    case 17:

    len2=(length/2);
   len3=(length/2)+1;
    break;
    case 18:

    len2=(length/2)+1;
len3=(length/2)+1;
    break;
    case 19:
len2=(length/2);
    len3=(length/2)+1;
    break;

    default:
        printf("Error Digits must be from 16-19\n");
}


int secndnumbers[len2-1];
int thirdnumbers[len3-1];
if(length>=16 ||length<=19){
     printf("Enter you card digits\n");
     for(int i=0;i<length;i++){
        scanf("%d",&numbers[i]);


     }
     for(int i=0;i<len3;i++){
        thirdnumbers[i]=numbers[(i*2)];
         printf("%d ",thirdnumbers[i]);

     }
     printf("\n");
     for(int i=0;i<len2;i++){
        secndnumbers[i]=numbers[(i*2)+1];
         printf("%d ",secndnumbers[i]);

     }
      printf("\n");
}

 for(int a=0;a<len2;a++){
    secndnumbers[a]=secndnumbers[a]*2;

    if(secndnumbers[a]>=10){
    int tempa= secndnumbers[a]/10;
    int tempb= (secndnumbers[a])%10;
    secndnumbers[a]=tempa+tempb;
     printf("%d ",secndnumbers[a]);
    }
    if(secndnumbers[a]<10){

        secndnumbers[a]=secndnumbers[a];


    }
 }
int frthnum[l];
 for(int c=0;c<len2;c++ ){
  sum+=secndnumbers[c];


 }







 printf("\n");
    printf("%d\n",sum);
   if(sum%10==0){

    printf("Credit card Number is Valid");
   }
   else{printf("Credit card Number is InValid");}


}
