// FUNCTION is a piece of code that performs a specific task.
// A fuunction can be called from any other function or main function.


#include<iostream>
using namespace std;

int main()
{
    int n1,n2;
    cin>>n1>>n2;

    int factorial1 = 1;
    for(int i=2; i<=n1; i++){
        factorial1 = factorial1*i;
    }
    
    int factorial2 = 1;
    for(int i=2; i<=n2; i++){
        factorial2 = factorial2*i;
    }

    cout<<factorial1<<" and "<<factorial2<<endl;

    return 0;
}
