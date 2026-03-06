

#include <iostream>
#include<string>
using namespace std;
int setSalary(string position);

void getInput(int x) {
    cout << "Please Enter Your Name.";
    string n, position;
    int nID;
    cin >> n;
    cout<<"Please enter your national ID:";
    cin >> nID;
    cout << "Choose Your Position: Manager,Staff,or Admin.";
    cin >> position;
    x = setSalary(position);
    cout << "Your Salary Is: " << x;
  

}
int setSalary(string position)
{
   int x=0;
   if (position == "Manager")
       x = 100000;
   else if (position == "Staff")
       x = 50000;
   else if (position == "Admin")
       x = 40000;
   else
       cout << "INVALID INPUT ";
   return x;
}
int main()
{
    int salary = 0;
    getInput(salary);
    return 0;
}

