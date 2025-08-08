#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int num, result = 0;
    for (int i = 0; i < n; i++) {
        scanf("%d", &num);
        result ^= num; 
    }
    printf("%d\n", result);
    return 0;
}
