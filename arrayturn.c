#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int ar[a];
    int *par[a];
    for (int i = 0; i < a; i++)
    {
        scanf("%d",&ar[i]);
        par[i] = &ar[i];
    }
    for (int i = a-1; i >= 0; i--)
    {
        printf("%d\n",*par[i]);
    }
}