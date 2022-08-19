#include<iostream>

using namespace std;

int main()

{ 
 

    // int i,j,k;
    
    // for(i = 1; i<=5; i++)
    // {
    //     for (j = 5; j>=i; j--)
    //     {
    //         cout<<"  ";
    //     }
    //     for(k = 1; k<= i; k++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }
    // for(i = 5; i>=0; i--)
    // {
    //     for (j = 5; j>=i; j--)
    //     {
    //         cout<<"  ";
    //     }
    //     for(k = 1; k<= i; k++){
    //         cout<<"* " ;
    //     }
    //     cout<<endl;
    // }



    int i,j,n;
    cin>>n;

    for(i = 1; i<=n/2; i++){
        for(j=1; j <= n ; j++){
            if( j<=i || j >= n-i+1 ){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }           
        }
        cout<<endl;
    }
    // for(i = 1; i<=n/2; i++){
    //     for( j<=n; j=1 ; j--){
    //         if( j<=i || j >= n-i+1 ){
    //             cout<<"*";
    //         }
    //         else{
    //             cout<<" ";
    //         }           
    //     }
    //     cout<<endl;
    // }

return 0;
}
