#include <iostream>
#include <math.h>
using namespace std;
int main()
{
   int n;
   cout<<"Type a natural number - n and i'll give you the sum of all the natural numbers from 1 to n";
   cin>>n;
   int sum;
   for(int i=1;i<=n;i++){
       sum=i+sum;
   }
   cout<<sum;
    return 0;
}