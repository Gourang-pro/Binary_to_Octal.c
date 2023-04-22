#include<stdio.h>
int main()
{
    int binarynumber = 0;
    int octalnumber = 0;
    int i = 1;
    int rem = 0;
    printf("enter the binary number : ");
    scanf("%d",&binarynumber);

    while (binarynumber != 0)
    {
        rem = binarynumber % 10;
        octalnumber = octalnumber + rem*i;

        i = i*2;
        binarynumber = binarynumber / 10;
    }
    printf("octal number : %o",octalnumber);
    return 0;
}