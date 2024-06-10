/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
    
}
int main()
{
    int a=5,b=3;
    swap(&a,&b);
    printf("a=%d\n",a);
    printf("b=%d",b);
    
}
    

