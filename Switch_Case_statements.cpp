#include <iostream>
using namespace std;

int main()
{
    // char button;
    // cout << "Input a Character: " << endl;
    // cin >> button;
    // 
    
    // if (button == 'a')
    // {
    //     cout << "Namaste Bts" << endl;
    // }
    // else if (button == '7')
    // {
    //     cout<< "Annyeonghaseyo Suruchi" << endl;
    // }
    // else if (button == 'b')
    // {
    //     cout << "Hello" << endl;
    // }
    // else if (button == 'c')
    // {
    //     cout << "Salut" << endl;
    // }
    // else if (button == 'd')
    // {
    //     cout << "Hola" << endl;
    // }
    // else if (button == 'e')
    // {
    //     cout << "Ciao" << endl;
    // }
    // else
    // {
    //     cout << "I'm still learning." << endl;
    // }
    


    // ============= The above code can also be written using Switch Case Control Statements (like this) ==============



    // switch (button)
    // {
    // case 'a':
    //     cout<<"Namaste Bts"<<endl;
    //     break;
    // case '7':
    //     cout<<"Annyeonghaseyo Suruchi"<<endl;
    //     break;
    // case 'b':
    //     cout<<"Hello Bts"<<endl;
    //     break;
    // case 'c':
    //     cout<<"Salut Bts"<<endl;
    //     break;
    // case 'd':
    //     cout<<"Hola Bts"<<endl;
    //     break;
    // case 'e':
    //     cout<<"Ciao Bts"<<endl;
    //     break;

    // // If we remove any break statements from switch case control statements then that statement and the statement next to that statement will get executed.

    // default:
    //     cout<<"I'm still learning." <<endl;
    //     break;
    // }



    // ============================= A Calculator ===============================



    float n1,n2;
    cout<<"Input two no: ";
    cin>>n1>>n2;

    char op;
    cout<<"Input an opertor";
    cin>>op;

    switch (op)
    {
    case '+':
        cout<<n1+n2<<endl;
        break;
    case '-':
        cout<<n1-n2<<endl;
        break;
    case '*':
        cout<<n1*n2<<endl;
        break;
    case '/':
        cout<<n1/n2<<endl;
        break;
    
    default:
    cout<<"Enter a different operator"<<endl;
        break;
    }

    return 0;
}