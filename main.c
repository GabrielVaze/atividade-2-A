#include <stdio.h>
#include <locale.h>

int main() {
	
    int tamanho;
	setlocale(LC_ALL, "Portuguese");
    printf("Digite o tamanho da matriz quadrada: ");
    scanf("%d", &tamanho);
    if (tamanho <= 0) {
        printf("Tamanho de matriz inválido.\n");
        return 1;
    }

   
    int matriz[tamanho][tamanho];
    
    printf("Digite os elementos da matriz:\n");
    
    for (int i = 0; i < tamanho; i++) {
        for (int j = 0; j < tamanho; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }


    float somadi = 0;
    
    for (int i = 0; i < tamanho; i++) {
        somadi += matriz[i][i];
    }

    printf("A soma dos elementos da diagonal principal é: %d\n", somadi);
    
    return 0;
}

