#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    a=7;
    while(a>0){
        int b;
        b=1;
        while(b<a){
            printf("%d",a);
            b++;
        }
       printf("%d\n",a);
       a=a-1;
    }


    return 0;
}
