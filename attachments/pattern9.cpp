
#include<iostream>
using namespace std;

int main()
{
    char ch ;
    for(int i = 1 ; i <= 5; i++)
    {
        cout<<"\n";
        ch = 'A';
        for(int j = 1 ; j <= i ; j++)
        {
            cout<<ch;
            ch = ch + 1;
        }
    }
}
