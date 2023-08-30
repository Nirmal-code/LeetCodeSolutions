#include <iostream>
#include <string>

class Solution {
public:
    string mergeAlternately(string word1, string word2) {

        int i=0;
        std::string final_res="";

        while (i<word1.length() || i<word2.length()){
            if (i<word1.length()){
                final_res+=word1[i];
            }
            if (i<word2.length()){
                final_res+=word2[i];
            }
            i++;
        }

        return final_res;

        
    }
};