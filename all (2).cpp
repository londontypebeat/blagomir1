#include <iostream>
using namespace std;

int main() {
    double X, Y;
    cin >> X >> Y;

    double daySum = X;
    int day = 1;

    do {
        if (daySum >= Y) break;   // если уже достигли цели — выходим
        daySum *= 1.1;            // увеличиваем сумму на 10%
        day++;                    // переходим к следующему дню
    } while (true);

    cout << day << endl;
    return 0;
}