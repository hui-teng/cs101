#include <stdio.h>
#include <math.h>
int main()  {
    double pi = 0.0;
    int x = 0;
    
    for (double term = 1.0; fabs(4 * pi - 3.14159) >= 0.00001; x++) {
        pi += term / (2 * x + 1);
        term = -term;
    }
        
    pi *= 4;
    
    
    printf("計算出的𝝿值為:%.5f\n", pi);
    printf("使𝝿達到精度 3.14159 的最小 x 值為:%d\n", x);
    
    return 0;
}
