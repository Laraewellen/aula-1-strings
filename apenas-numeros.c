#include <stdio.h>
#include <string.h>

int casa;

int main(){
    printf("Digite a casa: ");
    scanf("%d%[^\n]", &casa);
    printf("Numero da casa: %d ", casa);
}
