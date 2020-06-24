#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
    int i;
    string name;
    string temp;
    cout << "Please enter an integer value: ";
    getline(cin, temp);
    stringstream(temp) >> i;
    cout << "Please enter your name: ";
    getline(cin, name);
    cout << name << ", the value you entered is " << i;
    cout << " and its double is " << i * 2 << ".\n";
}