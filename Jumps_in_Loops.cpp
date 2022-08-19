// Two statements come under Jumps in Loops
// BREAK and CONTINUE statements

//  These are used to control the flow of Loops on meeting some specified conditions.

#include <iostream>
using namespace std;

int main()
{
    // int pocmoney = 3000;
    // for (int date = 1; date <= 30; date++)
    // {

    //     if (date % 2 == 0)
    //     {
    //         continue;
    //     }
    //     if (pocmoney == 0)
    //     {
    //         break;
    //     }
    //     cout << "Can go out today!" << endl;
    //     pocmoney = pocmoney - 500;
    // }


    //  (Q) To print no from 1 to 100 except the no which are divisible by 3.

    // int i;
    // for ( i = 1; i <= 100; i++)
    // {
    //     if (i%3==0)
    //     {
    //         continue;
    //     }
    //     cout<<i<<endl;
    // }


    // (Q) Check whether the no is prime or not.

    // int i,n;
    // cin>>n;
    // for ( i = 2; i < n; i++)
    // {
    //     if (n%i==0)
    //     {
    //        cout<<"non prime"<<endl;
    //        break;
    //     }
        
    // }
    // if (i==n)
    // {
    // cout<<"prime"<<endl;
    // }


    // (Q) Check whether the no is prime or not in a given range.

    int i, num, a,b;
    cin>>a>>b;
    for ( num = a; num <= b; num++)
    {
        for ( i = 2; i < num; i++)
        {
            if(num%i==0){
                break;
            }
        }
        if (i==num)
        {
            cout<<num<<endl;
            // cout<<"Prime" <<endl;
        }
        
        
    }
    
    
    return 0;
}

// continue statements are used to skip to the next iteration of the loop and break statements are used to terminate the loop.