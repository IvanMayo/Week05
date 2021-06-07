#include<stdio.h>

int main(void){
  float isa, alic, pep, x, total, porisa, poralic, porpep;
  printf("dinero de isaac\n");
  scanf("%f",&isa);

 printf("dinero de alice\n");
  scanf("%f",&alic);

  printf("dinero de pepe\n");
  scanf("%f",&pep);

  total= isa + alic + pep;

  porisa= (isa/total)*100;
  poralic= (alic/total)*100;
  porpep= (pep/total)*100;

  printf("total de los tres es %0.2f\n ", total);
  printf("isaac dio el %0.2f\n ", porisa);
  printf("alice dio el %0.2f\n", poralic);
  printf("pepe dio el %0.2f\n", porpep);

  return 0;
}
