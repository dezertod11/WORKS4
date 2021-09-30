#include <vector>
#include <iostream>
#include <windows.h>


using namespace std;

enum class Months {
    January = 1,
    February,
    March,
    April,
    May,
    June,
    July,
    August,
    September,
    October,
    November,
    December,
};

int main() {
    SetConsoleOutputCP(CP_UTF8);

    int numberMonth{0};
    const int high{31}, low{30}, feb_low{28}, feb_high{29};

    cout << "Введите номер месяца:" << endl;
    cin >> numberMonth;
    Months month = static_cast<Months>(numberMonth);

    switch(month){
        case Months::January:
            cout << high << endl;
            break;
        case Months::February:
            cout << feb_low << " (" << feb_high <<")" << endl;
            break;
        case Months::March:
            cout << high << endl;
            break;
        case Months::April:
            cout << low << endl;
            break;
        case Months::May:
            cout << high << endl;
            break;
        case Months::June:
            cout << low << endl;
            break;
        case Months::July:
            cout  << high << endl;
            break;
        case Months::August:
            cout << high << endl;
            break;
        case Months::September:
            cout << low << endl;
            break;
        case Months::October:
            cout << high << endl;
            break;
        case Months::November:
            cout << low << endl;
            break;
        case Months::December:
            cout << high << endl;
            break;
        default:
            cout << "Введеное число не подходит(" << endl;
            break;
    }


    return 0;
}
