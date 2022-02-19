class Solution {
public:
    string removeKdigits(string num, int k) {
        int n = num.size();
        if (n <= k) return "0";
        stack<char> s;
        for (auto &&c : num) {
            while (!s.empty() and k > 0 and s.top() > c) s.pop(), k--;
            if (!s.empty() or c != '0') s.push(c);
        }
        while (!s.empty() and k--) s.pop();
        if (s.empty()) return "0";
        while (!s.empty()) {
            num[n - 1] = s.top();
            s.pop(), n--;
        }
        return num.substr(n);
    }
};