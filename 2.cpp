#include <conio.h>
#include <iostream>
using namespace std;


int main()
{
	int h, m, s;

	

	cout << "please enter hour,minute and second:\n";
	cin >> h >> m >> s;
	h = h * 3600;
	m = m * 60;
	int changed;
	changed = h + m + s;
	
	cout << "your time in seconds:"<< changed;
  
}

