#include <iostream>
using namespace std;

int main()
{
  int table;
  cout << "Enter the number to display its table: "<<endl;
  cin>> table;
  for(int i = 1; i <= 5; i++ )
  {
      cout<<table<<" * " << i<<" = " << table * i<<endl;
  }
  system ("PAUSE");
  return 0;
}