// #include <iostream>
// using namespace std;

// void NameFull(string namefull)
// {

//     cout << "Your NameFull Is :" << namefull << endl;

// }
// int main()
// {
//     string namefull;
//     cout << "Please ensert The NameFull :" << endl;
//     getline (cin,namefull);
//     NameFull(namefull);
// }

// input nameFull and print nameFull

#include <iostream>
using namespace std;

string ReadName ()
{
    string name;
    cout << "Please ensert The NameFull :" << endl;
    getline (cin,name);
    return name;
}

void PrintName(string name)
{
    cout << "Your Name Is : " << name << endl;
}

int main ()
{
    PrintName(ReadName());
}




