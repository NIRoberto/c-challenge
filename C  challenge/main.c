#include  <stdio.h>
#include  <string.h>

float new_balance(float amount , float trip_fee){
    if(amount > trip_fee){

    return (amount-trip_fee);
    }
    else{
        return 0;
    }
}
void  message(char name[10],int id,char sex[10],int age,float trip_amount,float  Balance,char tripName[15]){
      printf("Dear %s ",name);
      printf("With id %d, age %d and sex %s. This  message  is  to  inform  you that  you have successfully paid %.1f for a trip %s.",id,age,sex,trip_amount,tripName);
      printf(" Your  new  balance  is %.1f",Balance);
}
struct  client {
    int  id;
    char  name[20];
    int age;
    char  sex[10];
    float amount;
} c;
struct  trips {
    char name[30];
} trip;

int  main (){
    float trip_pay_amount ,New_balance;
    char  trip_name[50];
    strcpy(c.name,"John Smith");
    strcpy(c.sex,"Male");
    c.id=12;
    c.age=25;
    c.amount=5000.0;
    strcpy(trip_name,trip.name);
    printf("Tape  here with a name of  your trip:");
    scanf("%s",trip.name);

      if(strcmp(trip.name,"Down_town_kimironko") == 0 && new_balance(c.amount,450.0)!=0){
               trip_pay_amount = 450.00;
               New_balance=new_balance(c.amount,trip_pay_amount);
               message( c.name, c.id, c.sex,c.age, trip_pay_amount ,New_balance, trip.name);
            }
        
         else if(strcmp(trip.name,"kimoronko_nyabugogo") ==0 && new_balance(c.amount,650.0)!=0){
              trip_pay_amount = 650.00;
               New_balance=new_balance(c.amount,trip_pay_amount);
               message( c.name, c.id, c.sex,c.age, trip_pay_amount ,New_balance, trip.name);

            }
         
         else if(strcmp(trip.name,"nyabugogo_kagugu") ==0 && new_balance(c.amount,750.0)!=0){
              trip_pay_amount = 750.00;
               New_balance=new_balance(c.amount,trip_pay_amount);
               message( c.name, c.id, c.sex,c.age, trip_pay_amount ,New_balance, trip.name);

            }
         
          else  if(strcmp(trip.name,"kagugu_down_town") ==0 && new_balance(c.amount,800.0)!=0){
              trip_pay_amount = 800.00;
               New_balance=new_balance(c.amount,trip_pay_amount);
               message( c.name, c.id, c.sex,c.age, trip_pay_amount ,New_balance, trip.name);

            }
       
           else if(strcmp(trip.name,"down_town_kicukiro") ==0 && new_balance(c.amount,700.0)!=0){
              trip_pay_amount = 700.0;
               New_balance=new_balance(c.amount,trip_pay_amount);
               message( c.name, c.id, c.sex,c.age, trip_pay_amount ,New_balance, trip.name);

            }
        
           else  if(strcmp(trip.name,"kicukiro_nyamata") ==0 && new_balance(c.amount,1000.0)!=0){
              trip_pay_amount = 1000.00;
               New_balance=new_balance(c.amount,trip_pay_amount);
               message( c.name, c.id, c.sex,c.age, trip_pay_amount ,New_balance, trip.name);

            }
        
            else  if(strcmp(trip.name,"kicukiro_remera") ==0 && new_balance(c.amount,500.0)!=0){
              trip_pay_amount = 500.0;
               New_balance=new_balance(c.amount,trip_pay_amount);
               message( c.name, c.id, c.sex,c.age, trip_pay_amount ,New_balance, trip.name);
            }
          else{
              printf("Your  balance  is  lower");
            }
}