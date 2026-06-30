class Solution {
public:
    bool detectCapitalUse(string word) {

        if (all_of(word.begin(), word.end(), ::isupper))
            return true;

        if (all_of(word.begin(), word.end(), ::islower))
            return true;

        if (isupper(word[0])) {

            for (int i = 1; i < word.size(); i++) {

                if (isupper(word[i]))
                    return false;
            }

            return true;
        }

        return false;
    }
};