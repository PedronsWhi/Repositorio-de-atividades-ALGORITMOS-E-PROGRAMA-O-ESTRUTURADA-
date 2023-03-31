#include<stdio.h>
#include<locale.h>
int main(){
    setlocale(LC_ALL,"portuguese");
    int n,aux=0,vezes;
    
    printf("Digite um número:\n");
    scanf("%d",&n);
    vezes=n;
    if(n!=0){//para Zero n ser considerado par
        if(n%2!=0){
            while(aux<vezes){
                n+=2;
                printf("%d-",n);
                aux++;
            }
                
        }
    }
    
    return 0;
}