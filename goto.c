#include<stdio.h>
int main()
{
    int i = 1;
    number:
        printf("%d\n",i);
        i++;
        if(i<=10)
            goto number;
}
