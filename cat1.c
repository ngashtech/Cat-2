
#include<stdio.h>
#include<string.h>
  
 struct  employee{
 char name[25];
 char department[20];
 int id;
 float salary;
 char email [50] ;
 }
   employee;
  int main() {
   strcpy (employee.name,"john Deo");
   strcpy (employee.department,"Human Resources");
   strcpy (employee.email,"john.doe@company.com");
   employee.id=12345;
   employee.salary=55000.50;

  printf("Name \t%s",employee.name);
  printf("\n email \t%s",employee.email);
  printf("\ndepartment \t%s",employee.department);
  printf("\nid\t%d",employee.id=12345);
  printf("\nsalary\t%f",employee.salary=55000.50);

return 0;
}























