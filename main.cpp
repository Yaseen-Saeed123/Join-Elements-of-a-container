#include <iostream>
#include <string>
#include <vector>
using namespace std;
string join(vector<string> words, char sep = ' '){
    string result = "";
    int count = 0;
    for (string word : words){
        if(count == words.size() - 1){
            result += word;
            break;
        }
        if(sep != ' '){
            result += word += sep;
            result += ' ';
        }
        else{
            result += word += sep;
        }
        count++;
    }
    return result;
}
int main() {
    vector <string> fruits = {"Tomato", "Apple", "Banana"};
    cout << join(fruits); // Output: Tomato Apple Banana
    cout << "\n___________________\n";
    cout << join(fruits, ':'); // Output: Tomato: Apple: Banana
    return 0;
}