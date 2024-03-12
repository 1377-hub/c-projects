#include<iostream>
using namespace std:
void main()
{
 int itrate;
 float salary,itax,nsalary=0;
 cout<<"Enter the Salary";
 cin>> salary;
 if (salary>20000)
 {
 	itax=salary*5/100;
 	itrate=5;
 }
 else if (salary<=40000)
 {
 	itax=salary*4/100;
 	itrate=4;
 }
 else 
 {
 	itax=salary*15/100;
 	itrate=10;
 }
 nsalary=salary-itax;
 cout<<"salary=Rs"<<salary;
 cout<<*\aYour income tax 0"<<itrate<<
 cout<<*\aYour net salary= Rs"<<salary;
	return 0;
}