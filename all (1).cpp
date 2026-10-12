#include <iostream>
using namespace std;

int main() {
    double X, Y;
    cin >> X >> Y;

    double daySum = X;
    int day = 1;

    while (daySum < Y) {
        daySum *= 1.1;
        day++;
    }

    cout << day << endl;
    return 0;
}
