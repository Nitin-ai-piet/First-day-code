#include<stdio.h>

int main() {
    int a, b, result;
    char op;
    
    printf("Pehla number daal: ");
    scanf("%d", &a);
    
    printf("Dusra number daal: ");
    scanf("%d", &b);
    
    printf("Operation chuno (+, -, *, /): ");
    scanf(" %c", &op);  // %c se pehle space zaroori hai
    
    if(op == '+') {
        result = a + b;
        printf("Result: %d\n", result);
    }
    else if(op == '-') {
        result = a - b;
        printf("Result: %d\n", result);
    }
    else if(op == '*') {
        result = a * b;
        printf("Result: %d\n", result);
    }
    else if(op == '/') {
        result = a / b;
        printf("Result: %d\n", result);
    }
    else {
        printf("Galat operation! +, -, *, / me se chuno\n");
    }
    
    return 0;
}