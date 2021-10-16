#include <conio.h>
#include <iostream>

using namespace std;

int main()
{
	int seconds;
	int h, m, s, t;
	cout << "enter your number:";
	cin >> seconds;
	h = seconds / 3600;
	t = seconds % 3600;
	m = t / 60;
	s = t % 60;
	cout << "your time is:" << h%24  << ":" << m%60  << ":" << s%60 ;
}

