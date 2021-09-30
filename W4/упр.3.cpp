#include <vector>
#include <iostream>
#include <windows.h>
#include <string>

using namespace std;

struct Time {
    unsigned int year: 7;
    unsigned int month: 4;
    unsigned int day: 5;
    unsigned int hours: 5;
    unsigned int minutes: 6;
    unsigned int sec: 6;
    unsigned int msec: 10;

    ~Time() {
        cout << "Время обратилось вспять" << endl;
    }
};

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    int tmp{0};
    Time ad;

    cout << "Введите год (последние 2 цифры 20XX): " << endl;
    cin >> tmp;
    ad.year = tmp;
    cout << "Введите месяц: " << endl;
    cin >> tmp;
    ad.month = tmp;
    cout << "Введите день месяца: " << endl;
    cin >> tmp;
    ad.day = tmp;

    cout << "Введите часы (24 часовой формат): " << endl;
    cin >> tmp;
    ad.hours = tmp;
    cout << "Введите минуты: " << endl;
    cin >> tmp;
    ad.minutes = tmp;
    cout << "Введите секунды: " << endl;
    cin >> tmp;
    ad.sec = tmp;
    cout << "Введите милисекунды: " << endl;
    cin >> tmp;
    ad.msec = tmp;

    cout << "\nПолучаемая дата: " << ad.day << "." << ad.month << "." << ad.year << " ";
    cout << ad.hours << ":" << ad.minutes << ":" << ad.sec << "." << ad.msec << endl;
    cout << "Размер данной структуры: " << sizeof(ad) << " байт" << endl;

    return 0;
}









