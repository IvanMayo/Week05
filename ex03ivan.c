#include<stdio.h>
// this program makes 10 operations but you have to input the initial value
// X is the input and Y is the result
int main(void){
  float X,   Y;
  printf("inserte valor de x\n");
  scanf("%f", &X);

  Y= (X*4/1)-(4/3)+(4/5)-(4/7)+(4/9)-(4/11)+(4/13)-(4/15)+(4/17)-(4/19);

printf("el numero es %.3f", Y);

  return 0;
}
