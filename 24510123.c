#include <stdio.h>
#include <math.h>

int main(void)
{
    int a, b, c;
    double x1, x2;
    int D;

    printf("ax^2 + bx + c = 0\n");
    printf("a b c を入力してください: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a == 0) {
        printf("これは2次方程式ではありません\n");
    } else {
        D = b*b - 4*a*c;

        if (D > 0) {
            x1 = (-b + sqrt(D)) / (2*a);
            x2 = (-b - sqrt(D)) / (2*a);
            
            printf("x1 = %f\n", x1);
            printf("x2 = %f\n", x2);
        }
        else if (D == 0) {
            x1 = -b / (2 * a);
            printf("重解\n");
            printf("x = %f\n", x1);
        }
        else {
            printf("実数解はありません\n");
        }
    }

    return 0;
}
