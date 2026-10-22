#include <iostream>
using namespace std;

bool isEven(int number) {
    if(number % 2 == 0){
        return true;
    }
    else{
        return false;
    }
}

int main() {
    setlocale(LC_ALL, "UA");

    int number;

    cout << "Enter a number: ";
    cin >> number;

    if (isEven(number)) {
        cout << "Even";
    }
    else {
        cout << "Odd";
    }

    return 0;
}