#include<stdio.h>

void swap(int *m,int *n); // calling the swap function on the top

int main()
{
    int a,b;
    scanf("%d %d",&a,&b); // storing the data

    printf("Values before swap: a = %d & b = %d\n",a,b); // printing the values before swapping

    swap(&a,&b); // calling the fuinction to take the memory address of integer 'a' and 'b'

    printf("Values before swap: a = %d & b = %d\n",a,b); // prinitng the values after swapping


}
void swap(int *m,int *n)
{
    
    /* note: here we are actually playing with the value which are pointing to stored values */
    // here 'm' is pointing to the value which is stored in 'int a'
    // and 'n' is pointing to the value which is stored in 'int b'


    // our old treditional methode of swapping
    int temp; 
    temp = *m;
    *m = *n;
    *n = temp;
}