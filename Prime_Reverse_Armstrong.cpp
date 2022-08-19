#include <iostream>
#include <math.h>
// #include<cmath> ----------------   for including "sqrt" function.
using namespace std;

int main()
{

    // ______________________________ Prime or Non-prime ______________________________

    // int n;
    // cin>>n;

    // bool flag = 0;

    // for(int i=2;i<n;i++)
    // {
    //     if(n%i==0)
    //     {
    //         cout<<"Non-Prime"<<endl<<endl;
    //         flag = 1;
    //         break;
    //     }
    // }
    // if(flag==0)
    // {
    //     cout<<"Prime no"<<endl<<endl;
    // }

    // ______________________ Reverse a given number ________________________________

    // int n;
    // cin>>n;

    // int reverse=0;
    // while (n>0)
    // {
    //     int lastdigit = n%10;
    //     reverse = reverse*10 + lastdigit;
    //     n = n/10;
    // }
    // cout<<reverse<<endl;

    // ____________________________ Armstrong Number _________________________________

    int n;
    cin >> n;

    int sum = 0;
    int original_n = n;
    while (n > 0)
    {
        int lastdigit = n % 10;
        sum += pow(lastdigit, 3);
        n = n / 10;
    }

    if (sum == original_n)
    {
        cout << "Armstrong Number" << endl;
    }
    else
    {
        cout << "Not An Armstrong Number" << endl;
    }

    return 0;
}