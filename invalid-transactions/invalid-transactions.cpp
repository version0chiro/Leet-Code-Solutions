class Solution {
public:
    vector<string> invalidTransactions(vector<string>& transactions) {
        vector<string> res;
        unordered_set<string> st;
        unordered_map<string, vector<vector<string>>> m;
        unordered_map<string, int> cntMap;
        for (string t : transactions) {
            ++cntMap[t];
            istringstream iss(t);
            vector<string> vec(4);
            int i = 0;
            while (getline(iss, vec[i++], ','));
            if (stoi(vec[2]) > 1000) st.insert(t);
            for (auto &a : m[vec[0]]) {
                if (a[3] != vec[3] && abs(stoi(a[1]) - stoi(vec[1])) <= 60) {
                    st.insert(a[0] + "," + a[1] + "," + a[2] + "," + a[3]);
                    if (!st.count(t)) st.insert(t);
                }
            }
            m[vec[0]].push_back(vec);
        }
        for (auto &a : cntMap) {
            if (st.count(a.first)) {
                for (int i = 0; i < a.second - 1; ++i) {
                    res.push_back(a.first);
                }
            }
        }
        res.insert(res.end(), st.begin(), st.end());
        return res;
    }
};