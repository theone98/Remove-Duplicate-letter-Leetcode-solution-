class Solution {
public:
    string smallestSubsequence(string s) {
        
          string ans = "";
        int last[26] = {}, vis[26] = {}, n = s.size();
        for (int i = 0; i < n; ++i)
            last[s[i] - 'a'] = i;
        for (int i = 0; i < n; ++i) {
            if (vis[s[i] - 'a']++) continue;
            while (!ans.empty() && ans.back() > s[i] && i < last[ans.back() - 'a'])
                vis[ans.back() - 'a'] = 0, ans.pop_back();
            ans.push_back(s[i]);
        }
        return ans;

    }
};
