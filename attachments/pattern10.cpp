#include<iostream>
using namespace std;

int main()
{
    int cnt = 4;
    for(int i = 1 ; i <= 5 ; i++)
    {
        cout<<"\n";
         for(int j = 1 ; j <= cnt ; j++)
         {
             cout<<" ";

         }
         cnt = cnt -1;
         for(int k = 1 ; k < i ; k++)
         {
             cout<<"*";
         }

        for(int j =1 ; j <= i ; j ++)
        {
            cout<<"*" ;
        }

    }

   /*
    for(int k = 4 ; k > 0 ; k--)
    {
        cout<<"\n";

        for(int l = 1 ; l <= k ; l++)
        {
            cout<<"*";
        }
    }*/

}
