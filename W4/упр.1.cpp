#include <vector>
#include <iostream>
#include <windows.h>
#include <string>

using namespace std;

struct Tank {
    string name;
    string nation;
    double speed;
    double price;

    Tank() : name("T1"), nation("USSR"), speed(0.1), price(0.1)	{
        cout << "A new tank created!" << endl;
    }

    Tank(string _name, string _nation, double _speed, double _price) : name(_name), nation(_nation), speed(_speed), price(_price) {
        cout << "A new really tank created!" << endl;
    }


    void print(){
        cout << "Type: " << name << endl;
        cout << "Nation: " << nation << endl;
        cout << "Speed: " << speed << endl;
        cout << "Price: " << price << endl;
        cout << "\n";


    };

    void write() {
        cout << "Введите название танка: " << endl;
        getline(cin, name);
        cout << "Введите нацию танка(USSR, GERMANY, USA): " << endl;
        getline(cin, name);
        cout << "Введите максимальную скорость: " << endl;
        cin >> speed;
        cout << "Введите цену: " << endl;
        cin >> price;
        cout << "\n";
    }

    ~Tank() {
        cout << "A tank was deleted!" << endl;
    }

};
int main()
{
    SetConsoleOutputCP(CP_UTF8);


    Tank T34 = {"T34", "USSR", 40, 10000};
    Tank LEOPARD = {"LEOPARD", "GERMANY", 60, 500000};
    Tank  M6 = {"M6", "USA", 25, 10000000};

    vector<string> names{"T34", "LEOPARD", "M6"};

    string name_{""}, nation_{""};
    double speed_{0}, price_{0};

    cout << "Введите название танка: " << endl;
    getline(cin, name_);
    names.push_back(name_);
    cout << "Введите нацию танка: " << endl;
    getline(cin, nation_);
    cout << "Введите скорость: " << endl;
    cin >> speed_;
    cout << "Введите цену: " << endl;
    cin >> price_;

    Tank ad = {name_, nation_, speed_, price_}; // добавляемый танк
   // ad.write();

    cout << "Танки из ангара)): " << endl;
    for(int i = 0;i < names.size(); i++) {
        cout << i + 1 << ") " << names[i] << " ";
    }

    int want{0};
    cout << "\n\n";
    cout << "Выберите номер танка, с которым хотите познакомиттся:) " << endl;
    cin >> want;

    switch (want) {
        case 1:
            T34.print();
            break;
        case 2:
            LEOPARD.print();
            break;
        case 3:
            M6.print();
            break;
        case 4:
            ad.print();
            break;
        default:
            cout << "Что-то не так" << endl;
    }

    return 0;
}
