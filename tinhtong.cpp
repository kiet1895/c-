#include<iostream>
#include<iomanip>
using namespace std;

int sochan(){
        int so=1;
    while (so <= 100)
    {
        if(so % 2 == 1)
        {
            cout<< so << "\t";
        }
        if (so % 10 == 0)
        {
            cout<< "\n";
        }
        
        so = so + 1;
    }
    return 0;
}
int sole(){
        int so=1;
    while (so <= 100)
    {
        if(so % 2 == 1)
        {
            cout<< so << "\t";
        }
        if (so % 10 == 0)
        {
            cout<< "\n";
        }
        
        so = so + 1;
    }
    return 0;
}
int main()
{
    // int a,b, tong=0;
    // cout << "nhap a: "; cin >>a;
    // cout << "nhap b: "; cin >>b;
    // tong= a + b;
    // cout << a << " + " << b << " = " << tong<<endl;
    // cout <<"tong cua 2 so laf : " << tong;
    // int so=1;
    // while (so <= 100)
    // {
    //     if(so % 2 == 1)
    //     {
    //         cout<< so << "\t";
    //     }
    //     if (so % 10 == 0)
    //     {
    //         cout<< "\n";
    //     }
        
    //     so = so + 1;
    // }
    sochan();
    cout<< setfill('-');
    cout << setw(35) << "-" << endl;
    sole();
   return 0;
}