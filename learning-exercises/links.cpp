#include <iostream>
#include <string>

using namespace std;
void changePointer(int* A){
    *A = 100;
}
void changeReference(int& B){
    B = 20;
}

int main() {
    setlocale(LC_ALL, "UA");
    int A = 10;
    int B = 10;
    changePointer(&A);
    changeReference(B);

    cout << A << B;
    return 0;
}