#include <stdio.h>

int f(int m, int n) {
    if (n == 1) {
        return m + 1;
    } else {
        // Defina aqui o que fazer quando n não é igual a 1.
        // Por exemplo, retorne um valor padrão ou faça algum cálculo específico.
        // Neste exemplo, vou simplesmente retornar 0.
        return 0;
    }
}

int main() {
    int m, n;
    
    printf("Digite o valor de m: ");
    scanf("%d", &m);
    
    printf("Digite o valor de n: ");
    scanf("%d", &n);
    
    int resultado = f(m, n);
    printf("Resultado: %d\n", resultado);
    
    return 0;
}
