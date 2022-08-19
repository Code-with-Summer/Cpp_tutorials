#include<iostream>

using namespace std;

int main()
{
/*   int a = 10;
    int b;

    b=a++;
    cout<<a<<" "<<b<<endl;
*/

/*  int a = 10;
    int b;

    b=++a;
    cout<<a<<" "<<b<<endl;
*/

/*   int i = 1;
    // i = i++ + ++i;

    // cout<<i<<endl;

    int j = 2;
    int k;

    k = i +j +i++ + j++ + ++i + ++j;
    //  1  2  1     2       3     4
    cout<<i<<" "<<j<<" "<<k<<endl;
*/

/*  int i = 0;
    i = i++ - --i + ++i - i--;
    //  0       0     1   1
    cout<<i<<endl;
*/
/*
    int i = 1, j =2, k=3;

    int m = i-- - j-- - k--;
//          1     2     3

    cout<<i<<endl;
    cout<<j<<endl;
    cout<<k<<endl;
    cout<<m<<endl;
*/

    int i = 10, j =20, k;

    k = i--  -  i++  +  --j  -  ++j  +  --i  -  j--   +  ++i  -  j++ ;
    //      10     9     19    20    9   20        10   19

    cout<<i<<endl;
    cout<<j<<endl;
    cout<<k<<endl;


return 0;
}