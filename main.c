#include <stdio.h>
#include <stdlib.h>
//zadanie 4
void zamien(double *pd1, double *pd2) {
    double temp = *pd1;
    *pd1 = *pd2;
    *pd2 = temp;
}
int main() {
    int x, *px;
    int i;
    double y, *py;
    int a[5], *pa;
    double d1 = 3.14, d2 = 2.71;
    px = &x;
    py = &y;
    pa = a;
    printf("\n Podaj x:");
    scanf("%d", px);
    printf("\n x=%d", *px);
    printf("\n Podaj y:");
    scanf("%lf", py);
    printf("\n y=%f", *py);

    for (i = 0; i < 5; i++) {
        printf("\n a[%d]=", i);
        scanf("%d", pa + i);
    }
    printf("\n Przed zamiana: d1=%lf, d2=%lf", d1, d2);
    zamien(&d1, &d2);
    printf("\n Po zamianie: d1=%lf, d2=%lf", d1, d2);

    system("PAUSE");
    return 0;
}
