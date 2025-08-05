#include <stdio.h>

int main(){
    int n;
    
    scanf("%d",&n);
    
    int arr[n];
    int positives=0,negatives=0,zeros=0;
    
    for(int i=0; i<n;i++){
        scanf("%d",&arr[i]);
        
        if(arr[i]>0)
            positives++;
        else if (arr[i]<0)
            negatives++;
        else
            zeros++;
    }
    printf("%f\n", (float)positives / n);
    printf("%f\n", (float)negatives / n);
    printf("%f\n", (float)zeros / n);
    
    return 0;
}