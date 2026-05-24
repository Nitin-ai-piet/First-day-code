#include<stdio.h>

int main() {
    int a, b, sum;
    
    printf("Pehla number daal: ");
    scanf("%d", &a);
    
    printf("Dusra number daal: ");
    scanf("%d", &b);
    
    sum = a + b;
    printf("Total: %d\n", sum);
    
    return 0;
}