/*Exercise 2 - Selection

Convert the C program given below which calculates an employee's salary to a C++ program.

Input Type, Salary, otHours

Type = 1
OtRate = 1000
Type = 2
OtRate = 1500
Type = 3
OtRate = 1700
Please Note that the input command in C++ is std::cin. This is a representation of the Keyboard.*/

#include <iostream>
int main()
{
   double salary, netSalary;// declare variable
   int etype, otHrs, otRate;// declare variable
   std::cout << "Enter Employee Type : ";// get value
   std::cin >> etype;// read value
   std::cout <<" Enter Salary  : ";// get value
   std::cin >> salary;// read value
   std::cout << "Enter OtHrs : ";// get value
   std::cin >> otHrs;// read value
   
   switch (etype) {
      case 1 :
          otRate = 1000;
          break;
      case 2 :
          otRate = 1500;
          break;
      default :
          otRate = 1700;
          break;
   }
   netSalary = salary + otHrs * otRate;// calculate
   std::cout << "Net Salary is " << netSalary << std::endl;// print net salary
}

