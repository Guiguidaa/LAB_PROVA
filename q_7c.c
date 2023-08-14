#include <stdio.h>

int f(int m, int n) {
    if (m == 1 || n == 1) {
        return m + n;
    } else {
        return f(m, n - 1) + f(m - 1, n);
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
