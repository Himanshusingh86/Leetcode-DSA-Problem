 class Solution {
public:
    int longestPalindrome(string s) {

        unordered_map<char, int> mp;

        // Count frequency
        for (char ch : s) {
            mp[ch]++;
        }

        int length = 0;
        bool hasOdd = false;

        for (auto it : mp) {

            if (it.second % 2 == 0) {
                length += it.second;
            } else {
                length += it.second - 1;
                hasOdd = true;
            }
        }

        if (hasOdd)
            length++;

        return length;
    }
};