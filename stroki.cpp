#include <iostream>
#include <string>
using namespace std;
int countVowels(const string& s) {
    string v = "aeiouyAEIOUY";
    int c = 0;
    for (char ch : s) {
        if (v.find(ch) != string::npos) {
            c++;
        }
    }
    return c;
}
int main() {
    string str;
    cout << "Введите строку: ";
    getline(cin, str);
    cout << "Количество гласных: " << countVowels(str) << endl;
    return 0;
}
