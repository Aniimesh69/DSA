class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string merged = "";

        int i = 0;
        while(i < word1.size() && i < word2.size())
            merged = merged + word1[i] + word2[i++];
        while(i < word1.size())
            merged += word1[i++];
        while(i < word2.size())
            merged += word2[i++];

        return merged;
    }
};