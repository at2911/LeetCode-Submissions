class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        set<int> ans;
        for (int i = 0; i < digits.size(); i++) {
            for (int j = 0; j < digits.size(); j++) {
                if (i == j || digits[i] == 0)
                    continue;
                for (int k = 0; k < digits.size(); k++) {
                    if (i == k || k == j)
                        continue;
                    if ((digits[i] * 100 + digits[j] * 10 + digits[k]) % 2 == 0)
                        ans.insert(
                            (digits[i] * 100 + digits[j] * 10 + digits[k]));
                }
            }
        }
        return (ans.size());
    }
};