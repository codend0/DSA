class Solution {
    public:
        string frequencySort(string s) {
            // storing the freq
            vector<int> fq(128, 0);
            for (auto it : s)
                fq[it]++;
            //[&] ka kam hai function ke bhar acess karna original vlaue
            auto cmp = [&](char a, char b) {
                if (fq[a] == fq[b])
                    return a > b;     // matlab agar barabar hai to kaoi age aao
                return fq[a] > fq[b]; // nahi to jyada freq wala
            };
            sort(s.begin(), s.end(), cmp); // cmp lambda function hai
            return s;
        }   
    };
    //TC O(nlogn) , SC O(logn)