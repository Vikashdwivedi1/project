#include<stdio.h>
#include<string.h>
#include<stdlib.h>

// function declaration 
void openAc(void);
void deposit(void);
void withrow(void);
void check_balence(void);
void loan(void);
void close_ac(void);
void all_service(void);

 int amount;
 int total_amount=0;


//  openAc function defination 
void openAc()
{
     char adhar_no[13];
     char name[20];
     char pan_no[11];
     int ac_type;
     printf("Thank you for opening account in HDFC bank\n");
    
    // input name
    printf("Enter our Name : ");
    scanf("%s",name);

    // input adhar no
    printf("Enter your Adhar number : ");
    scanf("%12s",adhar_no);
     while(strlen(adhar_no)<12 || strlen(adhar_no) >12 )
     {
        printf("invalid adhar number! please enter again adhar number :");
        scanf("%12s",adhar_no);

     }
       
    // input pan no
    printf("Enter your PAN number :");
    scanf("%s",pan_no);
    while(strlen(pan_no)<10 || strlen(pan_no)>10)
       {
        printf("invlide pan number! please enter againa adhar number : ");
        scanf("%s",pan_no);
       } 

    printf("------which type of account you want to open------- \n"
    "1) saving account\n"
    "2) cureent account\n"
    "3) Fixed Deposit Account\n"
    "4) Money Market Account\n" );
    scanf("%d",&ac_type);

    // Account created sucssesfuly!
    switch(ac_type)
    {
        case 1 : 
            printf("thank you %s for opening saving account in HDFC bnak"
            ", your account sucessfully created , now your can deposit" 
            "and withrow money frome any time any where\n",name ); break;   
        case 2 : 
            printf("thank you %s for opening Current account in HDFC bnak"
            ", your account sucessfully created , now your can deposit" 
            "and withrow money frome  any time any where\n",name );break;
        case 3 : 
            printf("thank you %s for opening Fixed account in HDFC bnak"
            ", your account sucessfully created , now your can deposit" 
            "and withdraw money frome  any time any where\n",name );break;
        case 4 : 
            printf("thank you %s for opening money market account in HDFC bnak"
            ", your account sucessfuly created , now your can deposit" 
            "and withrow money frome  any time any where\n",name );break;
        default :
        printf("please choose valid number between 1 to 4");
    }

    // your passbook
    printf("\033[1m---------Your passbook----------\033[0m\n");
    printf("Name :%s\n"
    "Account number : 12347568\n",name);



    int user_press;
    printf("for other services press 1 \nfor exit press 0 \n");
    scanf("%d",&user_press);
    switch(user_press)
    {
        case 1:
        {
            all_service(); break;
        }
        
        case 2:
        {
            exit(0); break;

        }
        

        default:
        printf("enter valide number 0 or 1");

    }
    

    
}

//  deposit function defination 
void deposit()
{   int Ac_no[11];
   
    printf("-----Welcome to HDFC bank------\n");

    // input account number
    printf("Enter your Account number\n");
    scanf("%s",Ac_no);
    while(strlen(Ac_no)<10 || strlen(Ac_no)>10)
       {
        printf("invlide pan number! please enter againa adhar number : ");
        scanf("%s",Ac_no);
       } 

    // input amount
    printf("enter amount you want to deposit : ");
    scanf("%d",&amount);
    total_amount=total_amount+amount;

    // print amount
    printf("your balence is : %d \n",total_amount);

    int user_press;
    printf("for other serices press 1 \nfor exit press 0 \n "
           "again deposit press 2  :");
    scanf("%d",&user_press);
    switch(user_press)
    {
         case 0:
        {
            exit(0); break;

        }
        case 1:
        {
            all_service(); break;
        }
        case 2:
        {
            deposit(); break;
        }
        
       
        

        default:
        printf("enter valide number 0,1 or 2");

   


    }



}

//withrow function defination 
void withrow()
{
    int withrow;
    int Ac_no[10];
    printf("enter your account number: ");
    while(strlen(Ac_no)<10 || strlen(Ac_no)>10)
       {
        printf("invlide account number! please enter againa adhar number : ");
        scanf("%s",Ac_no);
       } 
       scanf("%s",Ac_no);
    printf("Enter how many money are you withrow\n");
    scanf("%d",&withrow);
    total_amount=total_amount-withrow;

    printf("abelable balance is : %d",total_amount);
}   

//check_balence function defination 
void check_balence()
{
    int ac_no;
    printf("enter account no. number");
    scanf("%d",&ac_no);

    printf("your total balence is: %d",total_amount);

}

//loan function defination 
void loan()
{
    printf("------what type of loan you want----------\n"
    "1)home loan \n"
    "2)gold loan\n"
    "3)persona loan\n"
    "4)Auto loan\n"
    "5)Business Loa\n"
    "6)student loan\n");
    
    

}
void close_ac()
{
    
}


// all services defination 
void all_service()
    {
        int option;
    printf("hi.. Wellcome to HDFC net banking choose option :\n"
    "------------------Our services------------------\n"
    "1)Open Account\n" 
    "2)deposit\n" 
    "3)Withrow\n" 
    "4)check balence\n" 
    "5)Apply Loan\n" 
    "6)close bank AC\n"
    "7)EXit\n");

    scanf("%d",&option);

    switch(option)
    {
        case 1:
        {
            openAc(); break;
        }
        case 2:
        {
            deposit(); break;
        }
        case 3:
        {
            withrow(); break;
        }
        case 4:
        {
            check_balence(); break;
        }
        case 5 :
        {
            loan(); break;
        }
        case 6 :
        {
            close_ac(); break;
        }
        case 7:
        {
            exit(0);
        }

        default :
        {
            printf("please choose valide option between 1 to 6");
        }
    }
}


// main function
int main()
{
    
    all_service();
    return 0;
    
}
    
