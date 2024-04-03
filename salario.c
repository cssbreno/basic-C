#include <stdio.h>

int main(){

    int a;
    int b;
    float c;
    int NUMBER;
    float SALARY;

    scanf("%d",&a);

    scanf("%d",&b);

    scanf("%f",&c);

    NUMBER = a;

    SALARY = b * c;

    printf("NUMBER = %d\n", NUMBER);

    printf("SALARY = U$ %.2f\n", SALARY);

    return 0;
}
