//Serina Munoz
//csc-321

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void){
int intvar = 2;
double doublevar = 50.0;
char stringvar[] = "hello";
char charvar = 'a';

if (intvar>1){
printf("Integer variable is greater than 1.\n");
}else{
printf("Interger variable is not greater than1.\n");}
if (doublevar < 60.0){
printf("The double variable is less than 60.\n");
}else{
printf("The double variable in not less than 60.\n");}
if (strcmp(stringvar, "hello")==0) {
printf("String variable is hello.\n");
}else {
printf("String variable is not hello.\n");}
if (charvar !='s'){
printf("Character variable does not equal to the letter 's'.\n");}
else
{
printf("Character variable equals to 's'."); }
  
  return EXIT_SUCCESS;
}
