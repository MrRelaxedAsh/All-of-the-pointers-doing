#include<stdio.h>
int main()
{
    int a,b,temp;
    int *pa,*pb;
    scanf("%d %d",&a,&b);
    pa = &a;
    pb = &b;

    printf("before swapping %d %d\n",*pa, *pb);
    temp = *pa;
    *pa = *pb;
    *pb = temp;
    printf("after swapping %d %d\n",*pa, *pb);

}