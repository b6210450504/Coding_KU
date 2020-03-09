#include <iostream>
#include <cstdio>
#include <iomanip>
using namespace std;

int main() {
    int number;
    double price;
    string name;

    cin >> number >> price;
    cin >> name;

    double result = number*price;

    cout << "HELLO " << name+'!' << endl << "----------" << endl; // doulbe จะตัดจุดทิ้งไปเลย
    cout <<"result: " << setw(5) << setprecision(2) << setfill('\0') << result << endl; // iomanip

    return 0;
}