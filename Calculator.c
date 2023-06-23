// making calculator using c programming language
#include<stdio.h>
int main()
{
    float num1,num2,result;
    int choice;
    printf("---------------Welcome to calculator Wold ---------------\n"
     "What Operation like to perform\n"
     "1) Addition\n"
     "2) Subraction\n"
     "3) Multiplication\n"
     "4) Divition\n"
     );
     

     printf("Enter first number : ");
     scanf("%f",&num1);

    printf("Enter first number : ");
    scanf("%f",&num2);

    printf("Enter operatin number : ");
     scanf("%d",&choice);

    switch(choice)
    {
        
        case 1 : 
        {
            // Addition
            result=num1+num2;
             break;

        }

        case 2:
        {   
            //subtraction
            result=num1-num2; break;
        }
        case 3 : 
        {
            //multiprication
            result=num1*num2; break;
        }

        case 4:
        {
            //divition
            result=num1/num2; break;
        }

        default : printf("Enter valide number\n");


    }

    printf("Result: %.2f\n",result);

    printf("\nPress any key to exit...");
getchar();
   return 0;
}