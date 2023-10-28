#include<stdio.h>
#include<string.h>
#include<locale.h>

char nome1[100], nome2[100];
int main(){
    setlocale(LC_ALL, "");

    printf("Digite o 1° nome: ");
    scanf("%[^\n]%*c", nome1);

    printf("Digite o 2° nome: ");
    scanf("%[^\n]%*c", nome2);

    //strcmp string comparar

    if(strcmp(nome1,nome2)==0){
        printf("nomes iguais");
    } else{
        if(strcmp(nome1, nome2)<0){
            printf("%s vem primeir0", nome1);
        }
        else{
            printf("%s vem primeiro", nome2);
        }
    }

    getch();
    return 0;
}
