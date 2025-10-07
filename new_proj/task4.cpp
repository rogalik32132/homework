#include <iostream>
#include <string>
using namespace std;

int main() {
    int number;
    cout << "Введите число: ";
    cin >> number;
    
    string str = to_string(number);
    cout << "Строка: " << str << endl;
    
    return 0;
}
