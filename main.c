#include <stdio.h>

int sum(int a, int b);

int main() {
    int a = 0, b = 0;

    // 讀取兩個整數
    scanf("%d %d", &a, &b);
    
    // 輸出 a+b 的結果
    // printf("%d\n", a + b);    

    printf("Sum: %d\n", sum(a, b));
    return 0;
}

// TODO: Implement this function to return the sum of two numbers
int sum(int a, int b) {
    return 0;
}

