#include <stdio.h>

int main(){

    double a;
    double b;
    double c;
    double MEDIA;

    scanf("%lf",&a);

    scanf("%lf",&b);

    scanf("%lf",&c);

    a = a * 2;

    b = b * 3;

    c = c * 5;

    MEDIA = (a + b + c)/(2 + 3 + 5);

    printf("MEDIA = %.1lf\n" ,MEDIA);

    return 0;
}
