#include <iostream>
#include <iomanip>

using namespace std;

const int SPACE = 20;

int main()
{
   double radius, height, volume;

   cout << setw(SPACE) << "Enter radius:  ";	
   cin >> radius;

   cout << setw(SPACE) << "Enter height:  ";
   cin >> height;

   volume = 3.14159 * radius * radius * height;

   cout << setw(SPACE) << "Volume:  " << volume << endl;

   return 0;
}