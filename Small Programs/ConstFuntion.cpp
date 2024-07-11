#include<iostream>
using namespace std;

class esi
{
    int i;
    
    public:
    // constructor
    esi(){ i=0; }
    esi(int a){ i=a; }
    /*  - const = final in java
        - const cant be change and only intialize by constructor only once
        - constant functions can not write data members.
        - constructor and destructor can't be const function.
        - it is read only eg.- getters
    */
    // getter and setters
    void setEsi(int a)
    {
        i=a;
    }
    int getEsi() const;
};

int esi::getEsi() const
{
    cout<<"\n getEsi called.";
    return i;
}

//void main() 
//float main() // error 
int main()
{
    esi phir(5);
    cout<<"\n i :"<<phir.getEsi();
   // return 0.0f;
   return 0;
}


