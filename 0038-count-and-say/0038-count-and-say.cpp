class Solution {
public:
    // string sol = "1";
    string RLE(string add) {
        int n=add.size();
        string temp = "";
        int c = 1;
        for (int i = 0; i < add.size()-1; i++) {
            if (add[i] == add[i + 1])
                c++;
            else {
                temp.append(to_string(c));
                temp.push_back(add[i]);
                c = 1;
            }
        }
        temp.append(to_string(c));
        temp.push_back(add[n-1]);

        return temp;
    }
    string count(int n) {

        if (n == 1) {
            return "1";

        } else
            return RLE(count(n - 1));
        return "";
    }

    string countAndSay(int n) {
        string s = count(n);
        return s;
    }
};