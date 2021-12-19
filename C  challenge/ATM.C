#include <stdio.h>
#include <string.h>

struct accountInfo {
    char  firstName[30];
    int   age;
    float Account_balance;
} account;

struct  checkBook{
     int  request;
};
struct  monthlybills{
    float elecricity;
    float  rentAmount;
    float  waterAmount;
    float  schoolFees;
    float  cheque;
}bills;

void  notification(char  firstName[20]){
    printf("Dear %s, you  have  been credited  with 350,000 RWF On %s %s ",firstName,__DATE__,__TIME__);
    printf("thank you for banking with us");
}

void  message(char  firstName[20] , float billAmount,float balance,char electricity[25] ){
    printf("Dear %s, You have  successfully  paid %.1f for %s, your new balance is %.1f RWF thank you  for  banking  with us " ,firstName,billAmount,electricity,balance);
}
int  main(){
account.Account_balance =500;
int  operation;
float  deposit;
char billName[20] ;
account.Account_balance +=350000;
notification(account.firstName);
strcpy(account.firstName,"Kevin");
if(account.Account_balance >0){
// r:
printf("\nMenu\n");
printf("1.Requesting a cheque book\n");
printf("2.Deposit  amount\n");
printf("3.Cashout or withdraw\n");
printf("Enter Your  choice:");
scanf("%d",&operation);
switch(operation) {
    case 1:
    if(account.Account_balance<5000){
        printf("Make sure  that  your  balance  is  above  5000  Rwf  if  not  make  a deposit\n");
    }
    else{
        strcpy(billName , "Cheque book fee");
        account.Account_balance -=5000;
        message(account.firstName,bills.cheque,account.Account_balance,billName);
    }
    break;
    case 2:
    account.Account_balance +=deposit;
    break;
    case 3:
      int choice;
      char  YesOrNo[10];
      printf("1.Electricity\n");
      printf("2.Rent\n");
      printf("3.water\n");
      printf("4.School fees\n");
      printf("Reply:");
      scanf("%d",&choice);
    switch(choice){
      case 1:
      printf("Are you  sure  you  want  to  pay electricity Yes/No:");
      scanf("%s",YesOrNo);
      if(strcmp(YesOrNo,"Yes")==0){
         printf("Enter amount:");
         scanf("%f",&bills.elecricity);
          if(account.Account_balance > bills.elecricity){
         account.Account_balance-=bills.elecricity;
         strcpy(billName,"electricity");
         message(account.firstName,bills.elecricity,account.Account_balance,billName);
          }
          else {
              printf("Insufficient balance try to make a deposit and  try  again");
          }
         }
      else{
             printf("Thank You for  banking  with us");
      }
        break;
        case 2:
        printf("Are you  sure  you  want  to  pay rent Yes/No:");
        scanf("%s",YesOrNo);
      if(strcmp(YesOrNo,"Yes")==0){
         printf("Enter amount:");
         scanf("%f",&bills.rentAmount);
          if(account.Account_balance > bills.rentAmount){
         account.Account_balance-=bills.rentAmount;
         strcpy(billName,"Rent");
         message(account.firstName,bills.rentAmount,account.Account_balance,billName);
          }
            else {
              printf("Insufficient balance try to make a deposit and  try  again");
          }
         }
        else{
             printf("Thank You for  banking  with us");
            //  goto p;
      }
        break;
        case 3:
          printf("Are you  sure  you  want  to  pay water Yes/No:");
        scanf("%s",YesOrNo);
      if(strcmp(YesOrNo,"Yes")==0){
         printf("Enter amount:");
         scanf("%f",&bills.waterAmount);
         if(account.Account_balance > bills.waterAmount){
         account.Account_balance-=bills.waterAmount;
         strcpy(billName,"Water");
         message(account.firstName,bills.waterAmount,account.Account_balance,billName);
      }
        else {
              printf("Insufficient balance try to make a deposit and  try  again");
          }
         }
           else{
             printf("Thank You for  banking  with us");
      }
        break;
        case 4:
          printf("Are you  sure  you  want  to  pay school fees Yes/No:");
        scanf("%s",YesOrNo);
        if(strcmp(YesOrNo,"Yes")==0){
         printf("Enter amount:");
         scanf("%f",&bills.schoolFees);
          if(account.Account_balance > bills.schoolFees){

         account.Account_balance-=bills.schoolFees;
         strcpy(billName,"Rent");
         message(account.firstName,bills.schoolFees,account.Account_balance,billName);
          }
         else {
              printf("Insufficient balance try to make a deposit and  try  again");
          }
         }
           else{
             printf("Thank You for  banking  with us");
      }
        break;
        default:
        printf("wrong  choice!\n");
        break;
        }
    break;
    default:
    printf("Wrong choice!\n");
    break;
}}
else{
    printf("Your balance should not be negative");
}
}