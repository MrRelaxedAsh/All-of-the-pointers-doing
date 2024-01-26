#include<stdio.h>

void swap(int *m,int *n)
{
    int temp; 
    temp = *m;
    *m = *n;
    *n = temp;
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n], b[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&b[i]); 
    }
    for (int i = 0; i < n; i++)
    {
        printf("\nBefore swapping a[%d]=%d\n",i,a[i]);
        printf("Before swapping b[%d]=%d\n",i,b[i]);

        swap(&a[i],&b[i]);

        printf("\nafter swapping a[%d]=%d\n",i,a[i]);
        printf("after swapping b[%d]=%d\n",i,b[i]);
        
    }
    
}