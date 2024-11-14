#include<stdio.h>

int main ()
{
int hours_worked;
int hourly_wage;
int overtime;
float gross_pay;
float taxes ;
float net_pay;


printf("\nenter hours worked",hours_worked);
scanf("%d",&hours_worked);
printf("\nhours worked=%d",hours_worked);

printf("\ninput hourly wage",hourly_wage);
scanf("%d",&hourly_wage);
printf("\nhourly wage=%d",hourly_wage);
 
 if (hours_worked>40 ){  overtime =hours_worked-40;}
printf("\novertime=%d",overtime);

gross_pay=hours_worked*hourly_wage;
printf("\ngross_pay=%f",gross_pay);

if ( gross_pay>600  ){taxes=gross_pay*0.2;}
else if (gross_pay<=600){taxes =gross_pay*0.15;}
printf("\ntaxes=%f",taxes);




return 0;
}