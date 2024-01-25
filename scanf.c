#include<stdio.h>
int main()
{
    int a,b;
    printf("Scan the value of 'a'and 'b':\n");
    // scanf("%d %d",a,b); Wrong
    scanf("%d %d",&a,&b); //Correct

    printf("Result = %d",a+b);
}