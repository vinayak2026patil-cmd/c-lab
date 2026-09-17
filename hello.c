#include <stdio.h>

int main(void)
{
    int num = 12;
    long l = 23424L;
    char ch = 'a';
    float f = 2.3f;
    double d = 12.2223;

    printf("Num = %d\n", num);
    printf("long = %ld\n", l);
    printf("char = %c\n", ch);
    printf("float = %.2f\n", f);
    printf("double = %.3lf\n", d);

    printf("Num \t %d\n", num);
    printf("long \t %ld\n", l);
    printf("char \t %c\n", ch);
    printf("float \t %.2f\n", f);
    printf("double \t %.3lf\n", d);

    return 0;
    



}