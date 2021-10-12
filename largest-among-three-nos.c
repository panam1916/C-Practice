/**
Largest among 3 numbers
*/
#include <stdio.h>
main() {
    int a,b,c;

    scanf("%d%d%d",&a,&b,&c);

    if((a>=b)&&(a>=c)) {

       printf("\n the largest number is :%d",a);

    } else if((b>=a)&&(b>=c)) {

        printf("\n the largest number is ;%d",b);

    } else {

        printf("\n the largest number is ;%d",c);

    }
}

