#include<stdio.h>
#include"stack.h"
#include"BigInteger.h"



void main()
{
 /*
    // push element into stack
    push(12);
    push(42);
    push(34);
    push(59);
    printf("Stack element after push:\n");
    for(int i=0;i<=TOP;i++)
        printf("%d  ",arr[i]);



    // pop element from stack
    pop();
    pop();
    printf("\n\nStack element after pop:\n");
    for(int i=0;i<=TOP;i++)
        printf("%d  ",arr[i]);



    // access the peek element of stack
    int top = peek();
    printf("\n\nStack top element is:\n%d", top);



    // Checking for stack empty or not
    if(isEmpty())
        printf("\n\nStack Empty!!!");

    if(!isEmpty())
        printf("\n\nStack Not Empty Yet!!!");
*/
//----------------------------------------------------------------//

 // Big Integer Implementation:
    char n1[100];
    char n2[100];

    printf("Enter first large number:\n");
    scanf("%s", n1);

    printf("Enter second large number:\n");
    scanf("%s", n2);
    printf("\nAddition of %s and %s:\n",n1,n2);

    char* rs;
    rs = largesum(n1, n2);
    printf("--> %s",rs); // print result

    getch();
}

