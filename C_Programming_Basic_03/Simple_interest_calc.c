/*  C Program to calculate simple interest  */

#include<stdio.h>

int main()
{
  double principal,rate,time;
  double simpleInterest;
  printf("Enter the principal amount :: ");
  scanf("%lf",&principal);
  printf("\nEnter the rate of interest(%) :: ");
  scanf("%lf",&rate);
  printf("\nEnter a number for time(which will be considered in years):: ");
  scanf("%lf",&time);
  simpleInterest=(principal*rate*time)/100;
  printf("\nThe simple interest is %lf \n",simpleInterest);

  return 0;
}