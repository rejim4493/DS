#include <stdio.h>
int factorial_recursive(int n);

int main()
{
    int x = 0;
    printf("Please enter a non-negative integer (0~20): ");
    scanf("%d",&x);
    if(x > 0 && x < 20){
        
        printf("%d! = %d", x, factorial_recursive(x));
    }else{
        printf("Invalid input. Please enter an integer.\n");
    }
    return 0;
}
int factorial_recursive(int n) {
    if (n == 0) {
        return 1; // 基礎情況：0 的階層是 1
    } else {
        return n * factorial_recursive(n - 1); // 遞迴呼叫
    }
}