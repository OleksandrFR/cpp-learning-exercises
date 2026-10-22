#include <iostream>

using namespace std;

    enum class Difficulty {
        Easy,
        Normal,
        Hard
    };

    int getEnemyDamage(Difficulty level) {
        switch(level){
            case Difficulty::Easy:
                
                return 5;

            case Difficulty::Normal:
                 
                return 10;

            case Difficulty::Hard:
                
                return 20;
        }
    return 0;
    }
    
int main() {
    Difficulty level = Difficulty::Easy;
    int choice;
    cout << "Choose difficulty (1-Easy, 2-Normal, 3-Hard): ";
    cin >> choice;
    
    if(choice == 1){
        level = Difficulty::Easy;
        }

        else if(choice == 2){
        level = Difficulty::Normal;
        }

        else if(choice == 3){
        level = Difficulty::Hard;
        }

        else{
        return 1;
    }

    cout << getEnemyDamage(level) << '\n';
    // enum class Difficulty{
    //     Easy,
    //     Normal,
    //     Hard
    // };

    // Difficulty level = Difficulty::Hard;
    // switch(level){
    //     case Difficulty::Easy:
    //         cout << "Level Easy\n";
    //         break;
    //     case Difficulty::Normal:
    //         cout <<"Level Normal\n";
    //         break;
    //     case Difficulty::Hard:
    //         cout << "Level Normal\n";
    //         break;
    // }
    return 0;
}