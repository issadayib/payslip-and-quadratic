#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n1,n2,add,mult,sub,result;
   float div;

    printf("Enter the first integer\n");
    scanf("%d",&n1);
    printf("Enter the second integer\n");
    scanf("%d",&n2);
    printf("The results are \n");
    printf("Add  %d\n", n1+n2);
    printf("Mult = %d\n", n1*n2);
    printf("Div = %d\n", n1/n2);
    printf("Sub = %d\n", n1-n2);
//calculations
    add = n1 + n2;
    sub = n1 - n2;
    mult = n1 * n2;
    div = (float) n1/n2;

    return 0;
}
