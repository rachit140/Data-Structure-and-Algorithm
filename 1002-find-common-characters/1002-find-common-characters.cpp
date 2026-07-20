class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        unordered_map<char, int> mp;

        // count for first word
        for (char ch : words[0]) {
            mp[ch]++;
        }

        // compare with rest
        for (int i = 1; i < words.size(); i++) {
            unordered_map<char, int> mp2;

            for (char ch : words[i]) {
                mp2[ch]++;
            }

            for (auto &p : mp) {
                p.second = min(p.second, mp2[p.first]);
            }
        }

        // build answer
        vector<string> ans;
        for (auto &p : mp) {
            for (int i = 0; i < p.second; i++) {
                ans.push_back(string(1, p.first));
            }
        }

        return ans;
    }
};