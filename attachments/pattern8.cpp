#include<iostream>
using namespace std;

int main()
{
     int cnt = 4;
     for(int i = 1; i<=5; i++)
     {
         cout<<"\n";

         for(int j = 1 ; j <= cnt ; j++)
         {
             cout<<" ";

         }
         cnt = cnt -1;
         for(int k = 1 ; k <= i ; k++)
         {
             cout<<k;
         }
     }
}

