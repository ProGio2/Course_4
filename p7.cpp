// // inside number and printign half number


// #include<iostream>

// using namespace std;

// // Function Reader
// float ReadNumber(){
//     float num;
//     cout << "Please enter the number:"<< endl;
//     cin >> num;
//     return num;
// }

// // Function Halfer
// float HalfNumber(float num){
//     float number;
//     number = num / 2;
//     return number;
// }

// // Function printer
// void PrintNumber(float number){
//     cout << " the hulf number is :" << number << endl ;
// }

// int main(){
//     PrintNumber(HalfNumber(ReadNumber()));
// }

// _________________________________________________________________________________________________________________

// THE BEDT MODE 

// Please enter the number:
// 6
// Half Of 6 is 3.000000

#include<iostream>
#include<string>

using namespace std;

// Function Reader
int ReadNumber(){
    int num;
    cout << "Please enter the number:"<< endl;
    cin >> num;
    return num;
}

// Function calculate
float CalculateNumbver(int num){
    return (float) num / 2 ;
}

// Function Printer
void PrintNumber (int num){
    string result = "Half Of " + to_string(num) + " is " + to_string(CalculateNumbver(num)) ;
    cout << result << endl;
}

int main(){

    PrintNumber(ReadNumber());

}

