#include <iostream>

using namespace std;

int main()
{
    // for (int i= 1; i<=5; ++i)
    // {
    // cout<<" * ";
    // cout<<" * ";
    // cout<<" * ";
    // cout<<" * ";
    // cout<<endl;
    // }

    // __________________________Rectangle______________________________

    // int row,col,i,j;
    // cin>>col>>row;

    // for(int i = 1; i<=row; i++){
    //     for(int j = 1; j<=col; j++){
    //         cout<<" * ";
    //     }
    //     cout<<endl;
    // }

    // ________________________Hollow Rectangle______________________________

    // int row, col;
    // cin >> row >> col;

    // for (int i = 1; i <= row; i++)
    // {
    //     for (int j = 1; j <= col; j++)
    //     {
    //         if (i == 1 || i == row || j == 1 || j == col)
    //         {
    //             cout << "*";
    //         }

    //         else
    //         {
    //             cout << " ";
    //         }
    //     }
    //     cout<<endl;
    // }

    // _______________________Double Hollow Rectangle__________________________

    // int row, col, k;
    // cin >> row >> col;
    // for (int k = 1; k <= 2; k++)
    // {
    //     for (int i = 1; i <= row; i++)
    //     {
    //         for (int j = 1; j <= col; j++)
    //         {
    //             if (i == 1 || i == row || j == 1 || j == col)
    //             {
    //                 cout << "*";
    //             }
    //             else
    //             {
    //                 cout << " ";
    //             }
    //         }
    //         cout << endl;
    //     }
    // }

    // _______________________Inverted Half-Pyramid______________________

    // int row;
    // cin>>row;

    // // i is the row no. and j is the col no.

    // for(int i = row; i>=1; i--){
    //     for(int j = 1; j<=i;j++){
    //         cout<<"* ";
    //         }
    //         cout<<endl;
    // }

    //______________Half-Pyramid after 180 degree Rotation_______________

    // int row;
    // cin>>row;

    // for (int i = 1; i <= row; i++ ){
    //     for(int j = 1; j<= row; j++){
    //         if(j <= row - i){
    //         cout<<"  ";
    //         }
    //         else{
    //             cout<<"* ";
    //         }
    //     }
    //     cout<<endl;
    // }

    //  ######### OR ########

    // for (int i = 1; i <= row; i++)
    // {
    //     for (int j = row - 1; j >= i; j--)
    //     {
    //         cout << "  ";
    //     }
    //     for (int k = 1; k <= i; k++)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    // __________________Half- Pyramid Using No. I___________________________

    // int n;
    // cin>>n;

    // for(int i=1; i<=n; i++){
    //     for (int j = 1; j <= i; j++){
    //         cout<<i<<" ";
    //     }
    //     cout<<endl;
    // }

    // __________________Floyd's Triangle___________________________

    // int i,j,n,k=1;
    // cin>>n;

    // for(i=1; i<=n;i++){
    //     for(j=1;j<=i;j++){
    //         cout<<k<<" ";
    //         k++;
    //     }
    //     cout<<" "<<endl;
    // }

    // ______________________ Butterfly Pattern __________________________

    // int i,j,n;
    // cin>>n;

    // for(i =1; i<=n; i++){
    //     for(j=1;j<=i;j++){
    //          cout<<"* ";
    //     }
    //     int space = 2*n - 2*i;
    //     for( j=1;j<=space;j++){
    //         cout<<"  ";
    //     }
    //     for(j=1;j<=i;j++){
    //          cout<<"* ";
    //     }
    //     cout<<endl;
    // }

    // for(i =n; i>=1; i--){
    //     for(j=1;j<=i;j++){
    //          cout<<"* ";
    //     }
    //     int space = 2*n - 2*i;
    //     for(j=1;j<=space;j++){
    //         cout<<"  ";
    //     }
    //     for(j=1;j<=i;j++){
    //          cout<<"* ";
    //     }
    //     cout<<endl;
    // }

    // _________________________ Inverted Pattern _________________________

    // int n;
    // cin>>n;

    // for(int i= 1; i<=n; i++){
    //     for(int j = 1; j <= n+1-i ; j++){
    //         cout<<j<<"|";
    //     }
    //     cout<<endl;
    // }

    // _________________________ 0-1 Pattern _________________________

    // int n;
    // cin>>n;

    // for (int i = 1; i<=n; i++)
    // {
    //     for(int j = 1;j<=i; j++)
    //     {
    //         if((i+j)%2==0)
    //         {
    //             cout<<" 1";
    //         }
    //         else{
    //             cout<<" 0";
    //         }
    //     }
    //     cout<<endl;
    // }

    // _______________________ Rhombus Pattern ___________________________

    // int n;
    // cin>>n;

    // for(int i=1; i<=n; i++)
    // {
    //     for(int j=1; j<=n-i; j++)
    //     {
    //         cout<<"  ";
    //     }
    //     for(int j=1; j<=n; j++)
    //     {
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

    // _________________________________ Number pattern _________________________________________

    // int n;
    // cin >> n;

    // for (int i = 1; i <= n; i++)
    // {

    //     for (int j = 1; j <= n-i; j++)
    //     {
    //         cout << " ";
    //     }
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << j << " ";
    //     }
    //     cout << endl;
    // }

    // _______________________ Palindromic Pattern _________________________________

    //  Sabse bakwas problem, it needs pratice.

    // int i,j,n;
    // cin>>n;

    // for( i=1; i<=n; i++){
    //     for(j=1; j<=n-i; j++){
    //         cout<<"  ";
    //     }
    //     int k=i;
    //     for(;j<=n; j++){
    //         cout<<k--<<" ";
    //     }
    //     k=2;
    //     for(;j<=n+i-1;j++)
    //     {
    //         cout<<k++<<" ";
    //     }
    //     cout<<endl;
    // }

    // _______________________________________ Star Pattern _________________________________

    // int n;
    // cin>>n;

    // for(int i=1; i<=n; i++)
    // {
    //     for(int j=1; j<=n-i; j++)
    //     {
    //         cout<<"  ";
    //     }
    //     for(int j=1; j<=2*i-1; j++)
    //     {
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }
    // for(int i=n; i>=1; i--)
    // {
    //     for(int j=1; j<=n-i; j++)
    //     {
    //         cout<<"  ";
    //     }
    //     for(int j=1; j<=2*i-1; j++)
    //     {
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

    // _____________________________________ Zig-Zag Pattern ________________________________________

    int i,n;
    cin>>n;

    for(int i=1; i<=3; i++)
    {
        for(int j = 1; j<=n; j++)
        {
            if(((i+j)%4==0) || (i == 2 && (i+j)%4==2))
            {
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    // j%4==0 or (i+j)%4==2 <<<<<<<<<<  both can be used interchangeably.
    
    
    return 0;
}
