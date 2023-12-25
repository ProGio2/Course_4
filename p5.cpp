
// and

//     return ((info.Age > 18 && info.HasDrivingLicense) and (info.HasRecommendation) );

// please enter the age:
// 22
// do you have driber license?
// 1
// do you have Has Recommendation?
// 0
// Rejected

// or ||

//     return ((info.Age > 18 && info.HasDrivingLicense) || (info.HasRecommendation) );

// please enter the age:
// 22
// do you have driber license?
// 1
// do you have Has Recommendation?
// 0
// Hired




#include <iostream>
using namespace std;
struct stinfo
{
    int Age;
    bool HasDrivingLicense;
    bool HasRecommendation;
};

stinfo ReadInfo()
{
    stinfo info;
    cout << "please enter the age:" << endl;
    cin >> info.Age;
    cout << "do you have driber license?" << endl;
    cin >> info.HasDrivingLicense;
    cout << "do you have Has Recommendation?" << endl;
    cin >> info.HasRecommendation;
    return info;
}

bool IsAccepted(stinfo info)
{
    return ((info.Age > 18 && info.HasDrivingLicense) || (info.HasRecommendation) );

    // or
    // if (info.HasRecommendation)
    // {
    //     return true;
    // }
    // else
    // {
    //     return ((info.Age > 18 && info.HasDrivingLicense) || (info.HasRecommendation) );
    // }
    
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

