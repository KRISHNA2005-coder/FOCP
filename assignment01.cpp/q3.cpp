#include <iostream>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    cin >>str;
    
    int len = str.length();
    int isPalindrome = 1;
    
    for(int i = 0; i < len/2; i++) {
        if(str[i] != str[len-1-i]) {
            isPalindrome = 0;
            break;
        }
    }
    
    if(isPalindrome)
        cout<<str<<"palindrome";
    else
        cout<<str<<"not palindrome";
        
    return 0;
}