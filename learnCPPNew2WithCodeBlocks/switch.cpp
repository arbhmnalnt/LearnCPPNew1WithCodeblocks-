#include <iostream>

using namespace std;

int main()
{
    int age;
    char dummychar = '/';
    cout << "how old are you ? ";
    cin >> dummychar >> age ;

    switch(age){
case 18:
    cout << "you are too young\a";
    break;
case 23:
    cout << "you are young also";
    break;
case 30:
    cout << "stil young ";
    break;
default:
    cout << "not to old";
    }
    return 0;
}
