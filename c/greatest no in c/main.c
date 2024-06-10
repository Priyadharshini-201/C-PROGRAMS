/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

void main(){
    int n1,n2,n3;
    scanf("%d %d %d",&n1,&n2,&n3);
    if(n1>n2 && n1>n3)
    {
        printf("The greatest no is %d",n1);
    }
    else if(n2>n1 && n2>n3)
    {
        printf("The greatest no is %d",n2);
    }
    else
    {
        printf("The greatest no is %d",n3);
    }
}