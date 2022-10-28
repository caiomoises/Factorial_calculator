#include<stdio.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");
    int i, n;
    printf("Quantos valores deseja inserir: ");
    scanf("%i", &n);
    int v1[n], v2[n];
    for(i=0; i<n; i++){
        printf("Insira valores que deseja ver o seu fatorial: ");
        scanf("%i", &v1[i]);
    }
    for(i=0; i<n; i++){
        printf("\nVetor v1[%i] = %i; ", i, v1[i]);
        int fat=1;
        if(v1[i]<=0){
            printf("Não existe fatorial de numero menor que zero!");
        } else while(v1[i]>=1){
            fat = fat*v1[i];
            v1[i]--;
            v2[i]=fat;
        }
        printf("\nFatorial = %i. \n", v2[i]);
    }
    return 0;
}
