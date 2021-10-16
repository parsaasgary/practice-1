#include <conio.h>
#include <iostream>

using namespace std;

int main()
{
    int a = 1, b = 0;
    int c,n;
    cout << "ta chand adad mohasebe shavad?";
    cin >> n;
    int i = 0;
    while (i < n)
    {
        c = a + b;
        cout << c<<"\t";
        a = b;
        b = c;
        i++;
    }
}

