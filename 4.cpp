#include <conio.h>
#include <iostream>

using namespace std;


int main()
{
    int n,x,max=0,min=0;
    float avg = 0;
    cout << "nomre chand daneshjo vared shavad:\t";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "nomre danshjo:";
            cin >> x;
            if (x > max)
                max = x;
            avg += x;
            if (x < min)
                min = x;
          
        }
    cout << "bishtarin nomre:" << max<<"\n";
    cout << "kamtarin nomre:" << min << "\n";
    avg = avg / n;
    cout << "miangin:" << avg << "\n";
}

