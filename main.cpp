// Hoppock, Zachary
// nestedRectangle.cpp
// Oct. 10, 2020
// Make a rectangle using a nested loop
// Version # 1
#include <iostream>

using namespace std;
int main()
{
int height;
int width;
cout << "Give a height and width: ";
cin >> height >> width;
for (int i = 1; i <= height; i++)
{
   for (int j = 1; j <= width; j++) { cout << "*"; }
   cout << endl;
}
return 0;
}