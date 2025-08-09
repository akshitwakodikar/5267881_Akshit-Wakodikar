#include <stdio.h>
#include <stdlib.h>  

int diagonalDifference(int n, int arr[n][n]) {
    int primaryDiagonal = 0;
    int secondaryDiagonal = 0;
    
    for (int i = 0; i < n; i++) {
        primaryDiagonal += arr[i][i];               
        secondaryDiagonal += arr[i][n - i - 1];     
    }
    
    return abs(primaryDiagonal - secondaryDiagonal);
}

int main() {
    int n;
    scanf("%d", &n);
    
    int arr[n][n];
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("%d\n", diagonalDifference(n, arr));
    return 0;
}
