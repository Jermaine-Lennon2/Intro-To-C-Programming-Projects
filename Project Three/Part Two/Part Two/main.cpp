
/*
 
 Jermaine T Lennon
 
 Due Date: September 30, 2022
 
 EEGR 161.001
 
 Part 2. Tell if a number entered by the user is even or odd.
         Take in a value from the user
         Determine whether the value is Odd, or Even within a function
         Display whether the value is Odd, or Even
 */

#include <iostream>
using namespace std;

void odd (int x);
void even (int x);

int main()
{
  int i;
  do {
    cout << "Please, enter number (0 to exit): ";
    cin >> i;
    odd (i);
  } while (i!=0);
  return 0;
}

void odd (int x)
{
  if ((x%2)!=0) cout << "It is odd.\n";
  else even (x);
}

void even (int x)
{
  if ((x%2)==0) cout << "It is even.\n";
  else odd (x);
}
