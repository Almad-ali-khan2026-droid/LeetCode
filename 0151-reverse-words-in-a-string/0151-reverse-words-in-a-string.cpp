class Solution {
public:
    string reverseWords(string s) {

        string ans;

        reverse(s.begin(), s.end());

        for(int i = 0; i < s.length(); i++) {

            while(i < s.length() && s[i] == ' ')
                i++;

            if(i == s.length())
                break;

            string word = "";

            while(i < s.length() && s[i] != ' ') {
                word += s[i];
                i++;
            }

            reverse(word.begin(), word.end());

            ans += " " + word;
        }

        return ans.substr(1);
    }
};