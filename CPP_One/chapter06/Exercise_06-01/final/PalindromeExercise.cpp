
#include <iostream>
#include <string>
#include <algorithm> //req for transform
#include <cctype> //req for tolower
using namespace std;
bool isPalindrome(string str);

int main() {
    string str;
    int x{ 0 }, y{ 1 };
    cout << "Enter a string: ";
    cin >> str;

    bool checkStringisPalindrome = isPalindrome(str);
    
    if (checkStringisPalindrome==true){
        cout << str << " is a Palindrome!!" << endl;
    }else {
        cout << str << " is not a Palindrome!!" << endl;    
    }
    return 0;
}



bool isPalindrome(string str){
    size_t length = str.length();
    //transform statement below makes whole string lowercase to 
    //allow next step to check for palindrome of all lowercase string
    std::transform(str.begin(), str.end(), str.begin(), [](unsigned char c) {
        return std::tolower(c);
        });
    for (int i = 0; i < (length / 2); i++) {
        if (str[i] != str[(length-1-i)]) {
            return false;
        } // if    
    } // for loop
    return true;
}// isPalindrome