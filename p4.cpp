#include <iostream>
using namespace std;
struct stinfo
{
    int Age;
    bool HasDrivingLicense;
};

stinfo ReadInfo()
{
    stinfo info;
    cout << "please enter the age:" << endl;
    cin >> info.Age;
    cout << "do you have driber license?" << endl;
    cin >> info.HasDrivingLicense;
    return info;
}

bool IsAccepted(stinfo info)
{
    return (info.Age > 18 && info.HasDrivingLicense);
}
void PrintResult (stinfo info)
{
    if (IsAccepted(info))
    {
    cout << "Hired" << endl;
    }
    else
    cout << "Rejected" << endl;
}

int main ()
{
    PrintResult(ReadInfo());
    return 1;
}

