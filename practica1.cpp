/*
PRACTICA 1
CRUZ TAPIA EDUARDO
*/
#include<stdio.h>
#include<conio.h>
int main(void){

printf("1.-suma\n");
printf("2.-resta\n");
printf("introdue 1 para la suma");
int opt;
scanf("%d",&opt);
int a;
int b;
printf("introduce la primera cantidad");
scanf("%d",&a);
printf("introduce la segunda cantidad");
scanf("%d",&b);
int c;
if(opt==1){
c=a+b;
}
else{
c=a-b;
}
printf("el resultado es:%d",c);
}

