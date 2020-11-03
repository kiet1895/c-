#include <iostream>
#include <math.h>
#include <string>
using namespace std;

int ptbachai(float a, float b, float c)
{
    float delta;
    delta = b * b - (4 * a * c);
    if (delta < 0)
    {
        cout << "Phuong trinh vo nghiem" << endl;
    }
    float x, y;
    if (delta == 0)
    {
        x = -b / (2 * a);
        cout << "phuong trinh co nghiem x = y : " << x << endl;
    }
    if (delta > 0)
    {
        x = (-b + sqrt(delta)) / (2 * a);
        y = (-b - sqrt(delta)) / (2 * a);
        cout << "phuong trinh co nghiem x: " << x << endl;
        cout << "phuong trinh co nghiem y: " << y << endl;
    }
    return 0;
}
int main()
{
    float b, c;
    float a(0);
    // cout << "moi nhap a,b,c \n ";
    // cout << "moi nhap a ";
    // cin >> a;
    // cout << "moi nhap b ";
    // cin >> b;
    // cout << "moi nhap c ";
    // cin >> c;
    // if (a == 0)
    // {
    //     cout << "moi nhap a khac 0";
    // }
    // else
    // {
    //     ptbachai(a, b, c);
    // }
    do
    {
        system("clear");
        cout << "Moi nhap a b c với a khác 0 " << endl;
        cout << "moi nhap a: ";
        cin >> a;
        cout << "moi nhap b: ";
        cin >> b;
        cout << "moi nhap c: ";
        cin >> c;
    } while (!a);
    ptbachai(a, b, c);
    return 0;
}
