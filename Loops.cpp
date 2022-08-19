#include<iostream>
using namespace std;

int main()
{

// FOR LOOPS:

    // int n;
    // cin>>n;

    // int sum=0;
    // for(int counter =1; counter<= n; counter++ ){
    //     sum = sum + counter ;
    // }

    // cout<<sum<<endl;

// ==================================================================

// WHILE LOOPS:

    // loop will end when user gives a -ve no.

    // int n;
    // cin>>n;

    // while(n>0)
    // {
    //     cout<<n<<endl;
    //     cin>>n;
    // }


    // int n;
    // cin>>n;

    // while (n%2==0)
    // {
    //     cout<<n+2<<endl;
    //     cin>>n;
    // }


// ====================================================================



// DO WHILE LOOPS:

    // This loop will run even if the condition is false.

    int n;
    cin>>n;

    do{
        cout<<n<<endl;
        cin>>n;
    }while (n>0);

    return 0;

}



/*
In WHILE LOOP the conditon is checked first then conditions in the body are executed
                 but
in DO WHILE LOOP the conditions in the body are executed first
then the conditions are checked. That's why the code in DO WHILE LOOP s executed even if the condition is false.
*/
