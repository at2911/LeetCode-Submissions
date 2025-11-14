class Solution {
public:
    static bool comp(const vector<int>& a, const vector<int>& b) {
        return (float(a[0]) / a[1]) < (float(b[0]) / b[1]);
    }

    vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) {
        vector<vector<int>> ans;
        // vector<int>temp;
        for (int i = 0; i < arr.size() - 1; i++) {
            for (int j = i + 1; j < arr.size() ; j++) {
                vector<int> temp;
                temp.push_back(arr[i]);
                temp.push_back(arr[j]);
                ans.push_back(temp);
            }
        }
        sort(ans.begin(), ans.end(), comp);
        vector<int> temp = ans[k - 1];
        return temp;
    }
};