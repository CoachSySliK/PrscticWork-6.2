#include <iostream>

using namespace std;

int main()
{
    int number;
    
    cout << "Введите число: ";
    cin >> number;
    
    int count = 0;
    if (number <= 0) count++; //минус тоже место на бумаге занимает

    while (number != 0) {
        number /= 10;
        count++;
    }

    cout << "Цифр в числе: " << count << endl;

    return 0;
}