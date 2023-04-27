#include <stdlib.h>
#include <stdio.h>

typedef struct struct_retire_info{
  int months;
  double contribution, rate_of_return;
} retire_info;
  
double helper(int startAge, double initial, retire_info retire){
  int months = retire.months;
  double balance = initial;
  double interest = retire.rate_of_return / 12;

  while(months--){
    int year = startAge / 12;
    int month = startAge % 12;
    balance *= interest + 1;
    balance += retire.contribution;
    printf("Age %3d month %2d you have $%.2lf\n", year, month, balance);
    startAge++;
  }
  return balance;
}

void retirement (int startAge, double initial, retire_info working, retire_info retired){
  double balance =  helper(startAge, initial, working);
  helper(startAge + working.months, balance, retired);
}

int main(){
  retire_info working = {489, 1000, 0.045};
  retire_info retired = {384, -4000, 0.01};
  retirement(327, 21345, working, retired); 
  return EXIT_SUCCESS;
} 
