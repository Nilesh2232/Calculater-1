#include<stdio.h>
#include<conio.h>
main()
{
    clrscr();
    float num1;
    float num2;
    char op;
    float result;
    printf("enter the first number:");
    scanf("%f",&num1);

    printf("enter the operation :");
    scanf(" %c",&op);

    printf("enter the second number :");
    scanf("%f",&num2);
    switch(op)
    {
    case'+':
        result=num1+num2;
        printf("%f",result);
        break;

    case'-':
        result=num1-num2;
        printf("%f",result);
        break;

    case'*':
        result=num1*num2;
        printf("%f",result);
        break;

    case'/':
        result=num1/num2;
        printf("%f",result);
        break;
    case'%':
        result=((int)num1) % ((int)num2);
        printf("%f", result) ;
        break ;
    case '#':
        result=((num1)/(num2)) *100;
        printf("%f %c", result, 37) ;
        break ;
    default :
        printf("the operation is not valid:");

    }

    getch();


}





    