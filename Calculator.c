// making calculator using c programming language
#include<stdio.h>
int main()
{
    float num1,num2,result;
    char operator;

     

     printf("enter calculation: ");
     scanf("%f %c %f",&num1,&operator,&num2);

    switch(operator)
    {
        
        case '+' : 
        {
            // Addition
            result=num1+num2;
             break;

        }

        case '-':
        {   
            //subtraction
            result=num1-num2; break;
        }
        case '*' : 
        {
            //multiprication
            result=num1*num2; break;
        }

        case '/':
        {
            //divition
            result=num1/num2; break;
        }

        default : printf("Enter valide number\n");


    }

    printf("Result: %.2f\n",result);

    
   return 0;
}
