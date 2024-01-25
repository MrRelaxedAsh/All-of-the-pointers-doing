#include<stdio.h>
int main()
{
    int a;
    int *pa;
    a = 24;
    pa = &a;
    printf("value of a = %d\n",a);
    printf("address of a in 'p' %p\n",&a);
    printf("address of a in 'p' a = %p\n",pa);
    printf("value that is located in the memory address of pa = %d\n",*pa);

    /* here pa (pointer of a) is indicating the value which is assigned in the address of a means pa-->&a 
       pointer */

}