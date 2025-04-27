class Solution
{
public:
    string frequencySort(string s)
    {
        unordered_map<char, int> mpp;
        for (auto it : s)
            mpp[it]++;
        vector<pair<char, int>> freqArr;
        for (auto [chr, freq] : mpp)
            freqArr.push_back({chr, freq});
        auto cmp = [&](pair<char, int> &a, pair<char, int> &b)
        {
            return a.second > b.second;
        };
        sort(freqArr.begin(), freqArr.end(), cmp);
        string ans = "";
        for (auto [ch, fq] : freqArr)
        {
            ans.append(fq, ch);
        }
        return ans;
    }
}