#include <stdio.h>
#include <locale.h>

int main(void) {
  setlocale(LC_ALL, "Portuguese");

  int na, nm, np, total, fruta, e=1;
  printf("LOJA DE FRUTAS\n");
  printf("1 => ABACAXI – 5,00\n");
  printf("2 => MAÇÃ – 1,00\n");
  printf("3 => PERA – 4,00\n");

  while (e == 1){
    printf("\nDigite o número da fruta desejada:\t");
    scanf("%d", &fruta); 
     if (fruta ==1){
        printf("\nQuantos abacaxis deseja comprar?\t");
        scanf("%d", &na);
        
        printf("Deseja comprar mais?(Sim - 1/Não - 2)");
        scanf("%d", &e);
        
      }else if(fruta == 2){
        printf("\nQuantas maçãs deseja comprar?\t");
        scanf("%d", &nm);
        printf("\nDeseja comprar mais?(Sim - 1/Não - 2)\t");
        scanf("%d", &e);
      }else if(fruta == 3){
        printf("\nQuantas peras deseja comprar?\t");
        scanf("%d", &np);
        printf("\nDeseja comprar mais?(Sim - 1/Não - 2)\t");
        scanf("%d", &e);
       
      }

  
  }
  total = (na*5)+(nm*1)+ (np*4);
  printf("O valor total de sua compra é %d,00", total);
  

  
     
  return 0;
}