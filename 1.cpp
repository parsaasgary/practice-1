#include <conio.h>
#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    int sum = 0;
    int x;
    string S;
    cout << "enter your numbers\n";

    while (S != "exit")
    {
        cin >> x;
        sum += x;
        cout << "if you are done please type exit\t";
        cin>>S;
    }
    cout << "sum of numbers is:" << sum;
}

