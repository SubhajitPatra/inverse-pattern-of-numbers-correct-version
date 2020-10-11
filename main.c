#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    for(a=7;a>0;a=a-1){
            for(int b=1;b<a;b=b+1){
                printf("%d",a);
            }
        printf("%d\n",a);
    }

    return 0;
}
