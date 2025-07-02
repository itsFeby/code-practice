#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    cin >> a >> b >> c;

    if (a > b && b > c) {
        cout << "Menurun" << endl;
    } else if (b > a && b > c) {
        cout << "Naik" << endl;
    } else {
        cout << "acak" << endl;
    }

    return 0;
}
