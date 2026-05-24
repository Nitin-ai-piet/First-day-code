#include<stdio.h>

int main() {
    int num, i;
    
    printf("Kiska table chahiye? Number daal: ");
    scanf("%d", &num);
    
    printf("\n%d ka Table:\n", num);
    printf("------------\n");
    
    // Ye hai for loop - 1 se 10 tak chalega
    for(i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }
    
    return 0;
}