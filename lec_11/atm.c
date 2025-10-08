#include<stdio.h>
int main()
{
    int amt,bal=1000;
    int choice;
    
    printf("\nchoices:");
    printf("\n1:check-balance,\n2:Deposit,\n3:Withdraw");
    printf("\nEnter the choice:");
    scanf("%d",&choice);
    
    switch(choice)
    {
      case 1: 
        printf("\ncheck the balance:%d",bal);
        break;
      case 2:
         printf("\nEnter deposit amount:");
         scanf("%d",&amt);
         bal+=amt;
         printf("\nDeposit successful\nCurrent Balance:%d",bal);
         break;
      case 3:
        printf("\nEnter withdrawal amount:");
        scanf("%d",&amt);
        if(amt<=bal)
        {
            bal=bal-amt;
            printf("\n Withdrawal Successful\n current balance:%d",bal);
        }
        else
        {
            printf("Insuficient Amount");
        }
       default:
            printf("INVALID CHOICE"); 
           
    
    }
    return 0;
}