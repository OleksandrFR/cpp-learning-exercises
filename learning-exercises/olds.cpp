#include <iostream>
#include <string>
using namespace std;

struct Student{
   string name;
   int age; 
};
int main() {
    setlocale(LC_ALL, "UA");
    Student students[3];
    int maxIndex = 0;

    cout << "Введіть значення: " << endl;

    for(int i = 0; i < 3; i++){
        cin >> students[i].name;
        cin >> students[i].age;
        
        if(students[i].age > students[maxIndex].age){
            maxIndex = i;
        }
    }
    cout << "Найстарший студент: " << students[maxIndex].name << " " << students[maxIndex].age << endl;

    return 0;
}