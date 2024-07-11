#include "emp.h"
#include "clerk.h"
#include "manager.h"
#include<iostream>
using namespace std;

int main()
{
    /*
    manager m(10,"Nikita",50000.00f,4500);
    cout<<"\n Total Salary = "<<m.cal_netSal();
    clerk c(20,"Neha",40000.00f,45,"Accounts");
    cout<<"\n Total Salary = "<<c.cal_netSal();
   emp *e = new manager(30,"pankaj",75000.00f,7500);
    cout<<"\n Salary = "<<e->cal_netSal();
    emp *e1 = new clerk(45,"Nikita",50000.00f,45,"accounts");
    cout<<"\n Salary = "<<e1->cal_netSal();

    delete e;
    delete e1;

 */
   emp *earr[5];


    earr[0] = new manager(1, "abc", 80000.00f, 10000.00f);
    earr[1] = new clerk(1, "xyz", 50000.00f, 2, "sales");
    earr[2] = new manager(1, "aaaa", 85000.00f, 10000.00f);
    earr[3] = new clerk(1, "bbb", 60000.00f, 3, "sales");
    earr[4] = new manager(1, "ccc", 90000.00f, 10000.00f);


    cout << "\n sal : " << earr[1]->cal_netSal();


    float allEmpSal = 0.0f;
    float temp;
    for (int i = 0; i < 5; i++)
    {
        temp = earr[i]->cal_netSal();
        cout << "\n earr [" << i << "] : " << temp;
        allEmpSal += temp;
    }

    cout << "\n All Employee salary : " << allEmpSal;


    for (int i = 0; i < 5; i++)
    {
        delete earr[i];
    }

    return 0;
}
