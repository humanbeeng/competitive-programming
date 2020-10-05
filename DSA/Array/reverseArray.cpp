#include <iostream>
#include <string.h>
using namespace std;

void reverseString(string str){
    char reversedStr[10];
    
    for(int i = 0; i < str.length(); i++){
        reversedStr[i] = str[str.length()-i-1];
    }
    cout << "Entered String was " << str << endl;
    cout << "Reversed String is ";
    for (int i = 0; i < str.length(); i++){
        cout << reversedStr[i];
    }
}

int main(){
    string str;
    cout << "Enter a string : ";
    cin >> str;
    cout << endl;
    reverseString(str);
    return 0;
}