#include<iostream>
using namespace std;

int main()
{
    // int pocketmoney = 3000;
    // for(int date = 1; date = 2; date = ++){
    //     cout<<"Can go out today"endl;
    //     if (date%2 == 0){
    //         continue;

    //     }
    //     if (pocketmoney == 0){
    //         break;
    //     }
    //     cout<<"Can Go out Today!"<<endl;
    //     pocketmoney = pocketmoney - 300;
    // }






    // this will not print the multiples of 3 b/w 1 to 100

    // for (int i = 0; i < 100; i++) 
    // {
    //     if(i % 3 == 0){
    //         continue;
    //     }
    //     cout<<i<<endl;
    // }






    // check whether n is non prime or not

    int n;
    cin >>n;
    int i ;
    for( i = 2; i < n; i++){
        if(n%i==0){
            cout<<"It's a non prime no"<<endl;
            break;
        }
    }
    if (i==n)
    {cout<<"Prime no."<<endl;}
     
    
    return 0;
}





// #include <iostream>
// using namespace std;

// int main() {
//     int a, b, i;
//     bool P = true;

//     cout << "Enter two numbers (intervals): ";
//     cin >> a >> b;

//     cout << "\nPrime numbers between " << a << " and " << b << " are: " << endl;

//     while (a < b) {
//         P = true;       
//             for (i = 2; i <= a / 2; ++i) {
//                 if (a % i == 0) {
//                     P = false;
//                     break;
//             }
//         }        
//         if (P)
//             cout << a << " ";++a;
//     }
//     return 0;
// }
