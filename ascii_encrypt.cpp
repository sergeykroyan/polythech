#include <iostream>

using namespace std;


string translate(string& a) {
    string value="";
    for(int i=0; i<a.length(); i++){
        int k = a[i] + 1;
        value += char(k);
    }
    return value;
}

int main() {
    string text;
    cout << "input text: ";
    cin >> text;
    cout << translate(text) <<endl;
    return 0;
}