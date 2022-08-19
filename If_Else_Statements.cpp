// #include <iostream>
// using namespace std;

// int main()
// {
//     int amount1;
//     cin>>amount1;

//     int amount2;
//     cin>>amount2;

//     int sum=amount1+amount2;
//     cout<< sum;

//     return 0;
    
// }




            //  If-Else statements:

#include <iostream>
using namespace std;

int main()
{
    int savings;
    cin >> savings;

    if(savings>5000){
        if(savings>10000){
            cout<<"Roadtrip with Neha\n";
        }
        else {
            cout<<"Shopping with Neha";
        }
    
    }
    else if(savings >2000)
    {
        cout<<"Rashmi";
    }
    else {
        cout<<"friends\n";
    }


    return 0;

}



