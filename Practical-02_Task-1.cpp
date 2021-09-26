#include <iostream>
using namespace std;
int main()
{
    int num,flag= 0;
    cout << "Enter a Number"<<endl ;
    cin >> num;
    if(num == 1)
    {
      cout << "Neither prime nor composite" << endl;
    }
    for(int i = 2;i<num/2;i++)
     {
         if(num % i != 0)
         {
             flag = 0;
         }
         else{
             flag = 1;
             break;
             }
      }
      if(flag == 0)
      {
         cout << "prime number" << endl;
      }
      else{
      	   cout << "Not a prime number" << endl;
      	   }
	    
    return 0;
 }
