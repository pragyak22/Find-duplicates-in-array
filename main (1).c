/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>


void main()
{
    int a[50],n,i;
    printf("Enter number of elements:\n");
    scanf("%d",&n);
    printf("Enter array elements: \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a);
    }
    
    for(i=0;i<n;i++)
    {
        if(a[i]==a[i+1])
            printf("Duplicate element found %d", a[i]);
    }
}
