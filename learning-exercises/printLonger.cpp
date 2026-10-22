#include <iostream>
#include <string>

using namespace std;

string printLonger(const string& word1, const string& word2, const string& equal){
    if(word1.length() > word2.length()){
       return word1;
    }
    else if(word1.length() < word2.length()){
       return word2;
    }
    else{
        return equal;
    }
}
int main(){
    setlocale(LC_ALL, "UA");
    string word1;
    string word2;
    string equal = "equal";
    cout << "Enter two words" << "\n";
    cin >> word1 >> word2;

    cout << printLonger(word1, word2, equal);
    return 0;
}