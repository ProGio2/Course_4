// FullName
// Please Enter The FirstName:
// chrait
// Please Enter The LastName:
// youcef
// The FullName is:chrait youcef

#include<iostream>
using namespace std;


struct stInfo
{
    string FirstName;
    string LastName;
};

stInfo ReadInfo()
{
    stInfo info;

    cout << "Please Enter The FirstName:" << endl;
    cin >> info.FirstName;

    cout << "Please Enter The LastName:" << endl;
    cin >> info.LastName;

    return info;

}

string GetFullName(stInfo info )
{
    string FullName = "";

    FullName = info.FirstName + " " + info.LastName;

    return FullName;
}

void PrintInfo(string FullName)
{
    cout << "The FullName is:" << FullName << endl;
}

int main()
{

    PrintInfo(GetFullName(ReadInfo()));
    return 0;
}



// =========================================================================================================

// REVERSED BY BOOL AND ENUM

// PrintInfo(GetFullName(ReadInfo(), enReversed::First));

// Please Enter The FirstName:
// chrait
// Please Enter The LastName:
// youcef
// The FullName is:youcef chrait


// #include<iostream>
// using namespace std;

// enum enReversed {First , Last};


// struct stInfo
// {
//     string FirstName;
//     string LastName;
// };

// stInfo ReadInfo()
// {
//     stInfo info;

//     cout << "Please Enter The FirstName:" << endl;
//     cin >> info.FirstName;

//     cout << "Please Enter The LastName:" << endl;
//     cin >> info.LastName;

//     return info;

// }

// string GetFullName(stInfo info , bool Reversed)
// {
//     string FullName = "";

//     if (Reversed)
//         FullName = info.FirstName + " " + info.LastName;
//     else
//         FullName = info.LastName + " " + info.FirstName;

//     return FullName;
// }

// void PrintInfo(string FullName)
// {
//     cout << "The FullName is:" << FullName << endl;
// }

// int main()
// {

//     PrintInfo(GetFullName(ReadInfo(), enReversed::First));
//     return 0;
// }


// -------------------------------------------------------------------------------------------------------------

// PrintInfo(GetFullName(ReadInfo(), enReversed::Last));
// Please Enter The FirstName:
// chrait
// Please Enter The LastName:
// youcef 
// The FullName is:chrait youcef


// #include<iostream>
// using namespace std;

// enum enReversed {First , Last};


// struct stInfo
// {
//     string FirstName;
//     string LastName;
// };

// stInfo ReadInfo()
// {
//     stInfo info;

//     cout << "Please Enter The FirstName:" << endl;
//     cin >> info.FirstName;

//     cout << "Please Enter The LastName:" << endl;
//     cin >> info.LastName;

//     return info;

// }

// string GetFullName(stInfo info , bool Reversed)
// {
//     string FullName = "";

//     if (Reversed)
//         FullName = info.FirstName + " " + info.LastName;
//     else
//         FullName = info.LastName + " " + info.FirstName;

//     return FullName;
// }

// void PrintInfo(string FullName)
// {
//     cout << "The FullName is:" << FullName << endl;
// }

// int main()
// {

//     PrintInfo(GetFullName(ReadInfo(), enReversed::Last));
//     return 0;
// }





// ==================================================================================================================


// reversed by bool

// Please Enter The FirstName:
// chrait
// Please Enter The LastName:
// youcef
// The FullName is:youcef chrait

// #include<iostream>
// using namespace std;

// struct stInfo
// {
//     string FirstName;
//     string LastName;
// };

// stInfo ReadInfo()
// {
//     stInfo info;

//     cout << "Please Enter The FirstName:" << endl;
//     cin >> info.FirstName;

//     cout << "Please Enter The LastName:" << endl;
//     cin >> info.LastName;

//     return info;

// }

// string GetFullName(stInfo info, bool reversed)
// {
//     string FullName = "";
//     if (reversed)
//         FullName = info.FirstName + " " + info.LastName;
//     else
//         FullName = info.LastName + " " + info.FirstName;
//     return FullName;
// }

// void PrintInfo(string FullName)
// {
//     cout << "The FullName is:" << FullName << endl;
// }

// int main()
// {
//     PrintInfo(GetFullName(ReadInfo(),false));
//     return 0;
// }