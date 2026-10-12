#include <iostream>
using namespace std;

int main() {
    double X, Y;
    cin >> X >> Y;          // вводим X и Y

    double daySum = X;      // сумма за текущий день (в 1-й день = X)
    int day = 1;            // номер дня

    for (; daySum < Y; day++) {
        daySum *= 1.1;      // увеличиваем сумму на 10%
    }

    cout << day << endl;    // выводим номер дня
    return 0;
}