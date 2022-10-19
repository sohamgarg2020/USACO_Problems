#include <iostream>
using namespace std;
#include <string>

int main(){
    string letters;
    string word;
    cin >> letters;
    cin >> word;

    int count = 0;
    int wordsn[word.length()];
    for (int i = 0; i < word.length(); i++){
        wordsn[i] = letters.find(word[i]);
    }
    for (int i = 0; i < word.length(); i++){
        if (i == 0){
            count++;
            continue;
        } else {
            if (wordsn[i] > wordsn[i-1]){
                continue;
            } else {
                count++;
            }
        }
    }
    cout << count << endl;
}