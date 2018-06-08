#include <unordered_set>
#include <string>

class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        string morse[] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        
        unordered_set<string> trans;
        
        for (int i = 0; i < words.size(); i++) {
                            string str;

            for (int j = 0; j < words[i].size(); j++) {
                str += morse[words[i][j] - 'a'];
            }
            trans.insert(str);
        }
        return trans.size();
    }
};
//建立映射，用set去除重复数字