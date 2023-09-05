#include <string>
#include <vector>


class Solution {
public:

    bool checkVowel(char letter) {
        if (letter == 'a' || letter == 'A' || letter == 'e' || letter == 'E' || 
            letter == 'i' || letter == 'I' || letter == 'o' || letter == 'O' || 
            letter == 'u' || letter == 'U') {
            return true;
        } else {
            return false;
        }
    }

    string reverseVowels(string s) {

        int start=0;
        int end=s.length();

        while (start<end){
            while (start<end && !checkVowel(s[start])){
                start++;
            }
            while (start<end && !checkVowel(s[end])){
                end--;
            }

            char left=s[start];
            s[start]=s[end];
            s[end]=left;
            
            start++;
            end--;

        }
        return s;

        
    }
};