#include <iostream>

using namespace std;

int getMax(int a, int b) {
    if(a > b){
        return a;
    }
    else{
        return b;
    }
}

int main() {
    setlocale(LC_ALL, "UA");
    int a, b;
    cout << "enter 2 numbers\n";
    cin >> a >> b;

    cout << "bigger number: " << getMax(a, b);

    return 0;
}