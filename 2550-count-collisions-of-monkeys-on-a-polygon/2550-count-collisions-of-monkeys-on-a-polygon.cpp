class Solution {
public:
    const int MOD = 1e9 + 7;
    int move(int n) {

        if (n == 0)
            return 1;
        else {
            int x = move(n / 2);
            long long y = (1LL*x*x)% MOD;

            if (n % 2 == 0)
                return (int)y;
            else
                return (int)((2LL*y) % MOD);
        }
    }

    int monkeyMove(int n) {
        int ans = move(n);
        return (ans - 2 + MOD) % MOD;
    }
};