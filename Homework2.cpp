#include <iostream>
#include <string>
using namespace std;

int main () 
{
  
string name, lastname;
  
int salary, sales, commission;
  
cout << "***Homewrok***\n";
  
cout << "Enter Name     :";
  
cin >> name >> lastname;
  
cout << "Enter salary   :";
  
cin >> salary;
  
cout << "Enter sale     :";
  
cin >> sales;
  
cout << "Enter Commission Percent   :";
  
cin >> commission;
  
cout << "your name =" << name << "   " << lastname << endl;
  
cout << "Total Revenue\t" << (sales * commission / 100) + salary << endl;
  
 
system ("pause");

} 
