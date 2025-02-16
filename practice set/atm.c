#include<stdio.h>
int checkbalance(int balance)
{
    printf("The Total balance is %d",balance);
    return 0;
}
int withdraw(int n,int balance)
{
    if(balance>5000)
    {
        printf("Enter a valid amount");
    }
    else
    {
    int a = balance - n;
    printf("The Total balance is %d",a);
    }
    return 0;
}
int deposit (int n,int balance)
{
    int a = n + balance;
    printf("The Total Amount is %d",a);
    return 0;
}
int main () {
    
    printf("Welcome to My ATM\n");
    

    int password;
    do{printf("Enter password ");
    scanf("%d",&password);
    }while(password != 1234);

    int balance = 5000;
    

    int ch;
    printf("1. Deposit\n");
     printf("2. withdraw\n");
      printf("3. Check Balance\n");
      scanf("%d",&ch);

      int n;
      printf("Enter an Amount : ");
      scanf("%d",&n);

      switch (ch)
      {
        case 1:
        deposit(n,balance);
        break;
        case 2:
        withdraw(n,balance);
        break;
        case 3:
        checkbalance(balance);
        break;
        default:
        printf("Choose a valid option");
      }
    return 0;
}