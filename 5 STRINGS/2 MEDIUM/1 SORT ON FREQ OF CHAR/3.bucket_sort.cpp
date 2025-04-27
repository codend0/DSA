class Solution {
    public:
        string frequencySort(string s) {
            unordered_map<char, int> freq;
            for (auto ch : s)
                freq[ch]++;
    //hum vector ke index ko count ki tarah treat karte hue uske value me vector ke andar char dalte hai
            vector<vector<char>> store(s.size() + 1);  // Bucket sort structure
    
            for (auto [ch, fq] : freq)
                store[fq].push_back(ch);  // store by frequency
    
            string ans = "";
            for (int i = s.size(); i >= 1; i--) {
                for (auto ch : store[i]) {
                    ans.append(i, ch);  // repeat char i times
                }
            }
    
            return ans;
        }
    };
    