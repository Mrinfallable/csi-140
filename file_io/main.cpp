#include <iostream>
using namespace std;

int main(){

int num = 4, product = 1;

while (num > 0)
{
   product *= num;
   num--;
}
cout << product << endl;

}