class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int cost = 0;
        bool pass = false;
        int j;

        for (int i = 0; i < colors.size() - 1; i++) {
            if (!pass)
                j = i;

            if (colors[j] == colors[i + 1]) {
                if (neededTime[j] < neededTime[i + 1]) {
                    cost += neededTime[j];
                    pass = false;

                } else {
                    pass = true;
                    cost += neededTime[i + 1];
                }
            } else
                pass = false;
            cout << cost << endl;
        }
        return cost;
    }
};