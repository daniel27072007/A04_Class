#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

int main() {
 int num1, num2, num3;
 char let1, let2;
 float nun1, nun2, nun3;
 
 //ex1
 printf("EX1");
 printf("\ntipos num");
 printf("\nDigite um numero:");
 scanf("%i", &num1);
 fflush(stdin);
 
 if (num1 > 0){
 	num2 = 1;
 }
 else if (num1 == 0){
 	num2 = 0;
 }
 else if (num1 < 0){
 	num2 = -1;
 }
 
 switch (num2)
 {
 	case 1: printf("%i e positivo", num1);
 	break;
 	case 0: printf("%i e nulo", num1);
 	break;
 	case -1: printf("%i e negativo", num1);
 	break;
 	default: printf("isso nao e um numero");
 }

 //ex2
 printf("\n\nEX2");
 printf("\nintervalo");
 printf("\nDigite dois numeros\n");
 scanf("%i", &num1);
 fflush(stdin);
 scanf("%i", &num2);
 fflush(stdin);
 printf("Digite mais um numero:");
 scanf("%i", &num3);
 fflush(stdin);
 
 if (num3 > num1 && num3 < num2){
 	let1 = 'v';
 }
 else{
 	let1 = 'f';
 }
 
 switch(let1)
 {
 	case 'v': printf("%i esta entre %i e %i", num3, num1, num2);
 			  break;
 	case 'f': printf("%i nao esta entre %i e %i", num3, num1, num2);
 			  break;
 	default: break;
 }
 
  //ex3
  printf("\n\nEX3");
  printf("\nIMC");
  printf("\nDigite seu peso:\n");
  scanf("%f", &nun1);
  printf("\nDigite sua altura:\n");
  scanf("%f", &nun2);
  
  nun3 = nun1 / (nun2 * 2);
  printf("%.2f", nun3);
 
return 0;
}