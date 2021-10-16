#include<conio.h>
#include <iostream>
#include <random>
#include <stdlib.h>

using namespace std;

int main()
{
    srand(time(0));
    int a;
    a=rand() % 6 + 1;

cout<<"tas aval:"<<a << "\n";
while (a== 6)
{
    a = rand() % 6 + 1;
    cout <<"jayeze shoma :D:"<< a;
 

}
    
    
   
}

