#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>


class Solution {
public:
    int similarPairs(vector<string>& words) {
        int total_sim=0;
        int num_words=words.size();

        std::unordered_map<std::string,double> hashmap;
        std::vector<string> new_words={};

        for (std::string value: words){
            std::unordered_set<char> unique_letters;
            for (int i=0; i<value.length(); i++){
                char letter=value[i];
                if (unique_letters.find(letter)!=unique_letters.end()){
                    value.erase(value.begin()+i);
                    i--;
                }
                unique_letters.insert(letter);
            }
            sort(value.begin(), value.end());
            for (std::string new_word : new_words){
                if (new_word==value){
                    total_sim+=1;
                }

            }
            new_words.push_back(value);

        }


        return total_sim;



        
    }
};