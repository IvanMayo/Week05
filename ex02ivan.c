#include <stdio.h>
// this program converts seconds to a hours:minutes:seconds format
// one hour equals yo 3600 seconds.    one minutes equals 60 seconds
int main(void){ 

   int H, S, M, X;
   printf("ingrese segundos");
   scanf("%d" , &X);

    H = X / 3600;

    X = X % 3600;

    M = X / 60;
    S = X % 60;





    printf("segundos son %i\n ", S);
    printf("minutos son %i\n", M);
    printf("horas son %i\n", H);
    return 0;

 } 
