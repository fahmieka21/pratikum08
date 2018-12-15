#include <iostream>

using namespace std;
int kali (int a, int b)
{
    if (b==0)
        return 0;
    else
        return a+kali(a,b-1);
        cout<< a;
}
int main()
{
    int a,b;
    cout << "Masukan bilangan Ke 1 :";
    cin>> a;
    cout << "Masukan bilangan Ke 2 :";
    cin>> b;
    cout<<  "Hasil = " <<kali (a,b);
    return 0;
}
