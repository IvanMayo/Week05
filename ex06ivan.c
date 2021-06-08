#include<stdio.h>

//you input a year and will tell you if the year is biciesto or not
//n the Gregorian calendar, three criteria must be taken into account to identify leap years: 
//The year must be evenly divisible by 4;
//If the year can also be evenly divided by 100, it is not a leap year;
//Unless... the year is also evenly divisible by 400. Then it is a leap year.

//According to these rules, the years 2000 and 2400 are leap years,
//while 1800, 1900, 2100, 2200, 2300, and 2500 are not leap years.


 int X;

int main(void){

  printf("inserte año\n");
  scanf("%d", &X);

  if (X % 400 == 0){
  printf("%d", X);
  printf(" this is a biciesto year");
  }
  else if(X % 100 ==0){
    printf("%d", X);
    printf(" this is not a biciesto year");
  } 

  else if(X % 4 ==0){
    printf("%d", X);
    printf(" this is a biciesto year");
  }


  else{
    printf("%d", X);
    printf(" this is not a biciesto year");
  }
  return 0;
}
