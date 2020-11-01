#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int Songto(int n)
{
    if (n < 2)
    {
        cout << n << " là so nguyen tố";
    }
    else
    {
        int dem = 0;
        for (int i = 2; i <= sqrt(n); i++)
        {
            if (n % i == 0)
            {
                dem++;
            }
            // cout << dem<<"\n";
        }
        if (dem == 0)
        {
            printf("\n %d la so nguyen to", n);
        }
        else
        {
            printf("\n %d khong phai so nguyen to", n);
        }
        cout << "\n";
    }
    return 0;
}
int main()
{
    int n;
    cout << "moi nhap so : ";
    cin >> n;
    Songto(n);
    return 0;
}