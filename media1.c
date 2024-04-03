#include <stdio.h>

int main (){

    double a;
    double b;
    double MEDIA;

    scanf("%lf",&a);

    scanf("%lf",&b);

    a = a * 3.5;

    b = b * 7.5;

    MEDIA = (a + b)/(3.5 + 7.5);

    printf("MEDIA = %.5lf\n" ,MEDIA);

    return 0;
}
