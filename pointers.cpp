#include <iostream>
using namespace std;

int main()
{
    int a = 2580;
    int *foo = &a;
    cout << *(foo - 100000);
}