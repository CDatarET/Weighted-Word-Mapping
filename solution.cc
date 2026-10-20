class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        std::string sb = "";
        sb.reserve(words.size());
        for(std::string word : words){
            int val = 0;
            for(int i = 0; i < word.size(); i++) val += weights[word[i] - 'a'];
            sb += (char)('z' - val % 26);
        }

        return sb;
    }
};
