#include<stdio.h>
#include<iostream>
using namespace std;
void patternprint(int);
int main()
{
int num;
cin>>num;
patternprint(num);
return 0;
}
void patternprint(int num)
{
int x = 1;
for( int i = 0 ; i < num ; i++ )
{
if(i % 2 == 0)
{
for( int j = 1 ; j <= num ; j++)
cout << x;
cout << x + 1;
}
else
{
cout << x + 1;
for( int j = 1 ; j <= num ; j++)
cout << x;
}
cout << "\n";
x++;
}
}
