#include <stdio.h>

int f(int m, int n) {
    if (m == 1) {
        return n + 1;
    } else {
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
