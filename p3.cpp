// // odd or even

// // mode 1 :
// // please enter the number:
// // 4
// // the number is even.

// // please enter the number:
// // 5
// // the number is even.

// // the proplem in function checknumbertype ^ return ^ becoouse after return no read

#include <iostream>
using namespace std;

int ReadNumber ()
{
    int num;
    cout<< "please enter the number:" << endl;
    cin >> num;
}

string CheckNumberType (int num)
{
    int result = num % 2 ;
    if (result)
    {
        return "the number is even.";
    }
    else
    {
        return "the number is odd.";
    }
}
 void PrintNumberType(string NumType)
{
    cout << NumType;
}

int main ()
{

    PrintNumberType(CheckNumberType(ReadNumber()));

}

// -------------------------------------------------------------------------------------------------
// -------------------------------------------------------------------------------------------------


