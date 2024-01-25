#include<stdio.h>
int main()
{
    int a,b;
    printf("Scan the value of 'a'and 'b':\n");
    // scanf("%d %d",a,b); Wrong
    scanf("%d %d",&a,&b); //Correct
    /* This one is correct because when the int variables were
    declared there were 4 bitx2 space were created with an address.
    By scanning we take a input, the input which will be stored in
    a space which 'int a,b' has created in the memory */

    printf("Result = %d",a+b);
}