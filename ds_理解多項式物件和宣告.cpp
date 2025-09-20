#include <stdio.h>

#define MAX_degree 101 /*MAX degree of polynomial+1*/
typedef struct{
    int degree;
    float coef [MAX_degree];
    
}polynomial;//結構的名稱就叫polynomial



int main()
{
    polynomial terms;//terms是結構名稱
    
    terms.degree = 2;//terms裡面的degree，也就是最高次項是2
    terms.coef[2] = 3;//x^2項的係數是3
    terms.coef[1] = 2;//x項的係數是2
    terms.coef[0] = 1;//常數項的係數是1
    
    for (int i = 0; i <= terms.degree; i++) {
        printf("Coef of x^%d: %.2f\n", i, terms.coef[i]);
    }// 輸出多項式的各項係數
    
    return 0;
}