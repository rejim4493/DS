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

/*
這段程式中，我們創建了一個 Polynomial poly; 物件，並且使用 poly.degree 和 poly.coef[n] 來操作多項式的次數和係數，並且直接在 main 函數中使用，不需要再次指定它們的型別。
1.poly 是 Polynomial 類型的變數。
2.degree 和 coef 是 Polynomial 結構體裡面的成員（成員變數）。
3.當你創建了 poly 這個變數時，degree 和 coef 已經是 poly 這個物件的一部分，並且它們的型別已經被指定（int 和 float[MAX_degree]）。
4.你可以直接使用 poly.degree 和 poly.coef[n] 來訪問和操作它們，而不需要重新宣告變數型別。
*/

