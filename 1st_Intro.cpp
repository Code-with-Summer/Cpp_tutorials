#include<iostream>
#include<iomanip>

// include: preprocessor directive, used to include files
// iostream: header file for taking input and printing output

using namespace std;

int main()

// the execution of code begins from main function( mandatory for any program) 

{

    // {} : denotes the start and end of a function

    cout << "\nNAMASTE WORLD\n" << endl;
    // endl is slower than /n.
    
    // used to display output in quotation marks

    cout << "My first C++ program.\n" << endl;

    // << this is the insertion operator
    // >> this is the extraction operator

    // ; marks the end of the statement

   

/*
___________________________________ Header Files __________________________________________________

There are two types of header files:: 
     1) System header files: It comes with the compiler(a program that converts instructions into a machine-code or lower-level form so that they can be read and executed by a computer.).
#include <iostream> is a system header file.



     2) User defined header: It is written by the programmer.
#include "anyfile.h" is an example of User defined header.



:: this is a scope resolution operator used to print the global variable in local scope when the local var is already defined.



__________________________________ Reference Variables _________________________________________

float x = 34;
float & y = x;  [ here '&' is used to denote the reference of y to x ]
cout<<x<<endl;
cout<<y<<endl;



_______________________________ Typecasting _________________________________________________

int a = 45;
float b = 54.64;
cout<<"the value of a is "<<(float)a;
cout<<"the value of b is "<<(int)b;



____________________________ Constants ___________________________________________

const int a = 34; [writing constants before a var will not let that value change]



___________________________ Manipulators ___________________________________________________

    int a = 3, b = 5, c = 6;
    cout<<"the value of a without setw is: "<<a<<endl;
    cout<<"the value of b without setw is: "<<b<<endl;
    cout<<"the value of c without setw is: "<<c<<endl;

    
    cout<<"the value of a with setw is: "<<setw(4)<<a<<endl;
    cout<<"the value of b with setw is: "<<setw(4)<<b<<endl;
    cout<<"the value of c with setw is: "<<setw(4)<<c<<endl;
    setw is used to give the desired space after the output



__________________________________ Operators __________________________________________________________

    Operators are symbols that tell the compiler to perform some specific operations.
     
    1) Arithmetic Operators:
        i) Binary Operators (+,-,*,/,%)
        ii) Unary Operators (++,--)

    2) Relational Operators:
        Defines a relation bestween 2 operators
        Returns a boolean value     
        [== , != , > , < , >= , <=]  

    3) Logical Operators:
        [ && (AND) , || (OR) , ! (NOT) ] 

    4) Bitwise Operators: 
        [& (AND Operator) , | (OR Operator) , ^ (XOR Operator) , ~ (Ones Complement) , << (Left Shift Operator) , >> (Right Shift Operator)]

                    XOR is 0 for same values and 1 for different values

        Ones complement makes 0 -> 1 and 1 -> 0.
        
        4<<1 (0100)=1000  
        4>>1 (0100)=0010
        
        ***************************************
        **      {a<<n  ------>  a*2^n}       **
        **      {a>>n  ------>  a/2^n}       **
        ***************************************

    5) Assignment Operators:
        [ =    Assigns value of right operand to left operand
        , +=   Assigns sum of two operand to left operand
        , -=   Assigns difference of two operand to left operand
        , *=   Assigns product of two operand to left operand
        , /+   Assigns  the quotient of two operand to left operand
        ]

    6) Miscellaneous Operators:
        i)    sizeof()  : Returns the size of variable.
        ii)   conditional or ternary operators [condition?X:Y]  : Returns the value of X if condition is true or else value of Y
        iii)  cast  : Convert one data type to another
        iv)   comma (,)  : Causes a sequence of operations to be performed
        v)    & (Reference operator) : Returns the address of a variable
        vi)   *  : Pointer to a variable


___________________________ Operator precedence & Associativity _____________________________________

    check the page Cpp operator reference (Cpp reference)

for

========================================================================================================



__________________________ Control Structures ___________________________________________

      1) Sequence Structure   
      2) Selection Structure   
      3) Loop Structure   

   1) The above codes are examples of sequence structure, where one code is executed without checking
      any type of condition one after another.

   2) The codes below are examples of selection structure, where conditions are checked before giving output.
      If-Else and Switch Case are examples of selection structure.
  
________________________________ If-Else: ___________________________________________________

    cout<<"If-Else Statements\n"<<endl;


    int age;
    cout<<"Tell me your age: "<<endl;
    cin>>age;

    if((age<18) && (age>2)) {
        cout<<"You cannot come to my party. "<<endl;
    }
    else if (age == 18){
        cout<<"You can come with a kid pass. "<<endl;
    }
    else if (age<2){
        cout<<"You are not yet born."<<endl;
    }
    else{
        cout<<"You can come to the party. "<<endl;
    }
    

 _____________________________ Switch Case _______________________________________________________

    cout<<"Switch Case Statements\n"<<endl;


    int age;
    cout<<"Tell me your age: "<<endl;
    cin>>age;

    switch(age)
    {
    case 18:
        cout<<"You are 18";
        break;
    case 22:
        cout<<"You are 22";
        break;
    case 25:
        cout<<"You are 25";
        break;

    default:
        cout<<"No special cases";
        break;
    }


   
___________________________________ Loops __________________________________________________

    3)  The codes below are examples of Loop structure:

There are three types of loops in Cpp:
    i) For loops
    ii) While loops
    iii) Do While loops

 __________________________________ For Loops ________________________________________________

 ypecas
Syntax::
    for( initialization, condition, updation )
    {
        loop body (Cpp code)
    }

    for(int i = 0; i < 40; i++)
    {
        cout<<i<<endl;
    }
    

// This is an infinite FOR LOOP:

    for(int i = 0; 6 < 40; i++)
    {
        cout<<i<<endl;
    }


__________________________________ While Loops ________________________________________________

Syntax::
    while(condition)
    {
        Cpp code;
    }


    int i = 1;
    while(i <= 40)
    {
        cout<<i<<endl;
        i++;
    }


// This is an infinite FOR LOOP:

    int i = 1;
    while(34 <= 40)
    {
        cout<<i<<endl;
        i++;
    }




__________________________________ Do While Loops ________________________________________________


Syntax::
    do
    {
        Cpp code;
    }
    while(condition);


// While loop when condition is true:
    int i = 1;
    do
    {
        cout<<i<<endl;
        i++;
    }
    while(i <= 40);


// While loop when condition is false:
    int i = 1;
    do
    {
        cout<<i<<endl;
        i++;
    }
    while(false);


There is a property of do while loop that it will run once even if the condition is false
*/

    int a = 3;
    int i = 1;
    while(i<=50)
    {
        cout<<a*i<<endl;
        i++;

    }


    return 0;

    // This is the exit status of a function

}
