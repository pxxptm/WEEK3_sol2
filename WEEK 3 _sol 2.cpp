#include<iostream>
#include<math.h>
using namespace std;

int mul(int n)
{
    int c=2,num[3]={},b,a=1;
    while(c>0)
    {
        b=pow(10,c);
        cout << n/b << " . ";
        a*=n/b;
        n%=b;
        c--;
    }

    a*=n;

    cout << n << " = " << a;

    return a;
}

main()
{
    int n;
    cout << "Input number : ";
    cin >> n;

    while (n>10)
    {
        n=mul(n);
        cout << "\n";
    }
    return 0;
}

