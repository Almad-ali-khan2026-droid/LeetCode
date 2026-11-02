class Solution {
public:
    int compress(vector<char>& chars) {
        int idx = 0; 
        int n = chars.size();
        
        for (int i = 0; i < n; ) {
            char ch = chars[i];
            int count = 0;
            
            // count consecutive characters
            while (i < n && chars[i] == ch) {
                i++;
                count++;
            }
            
            // write the character
            chars[idx++] = ch;
            
            // write the count if > 1
            if (count > 1) {
                string cntStr = to_string(count);
                for (char c : cntStr) {
                    chars[idx++] = c;
                }
            }
        }
        
        return idx; // length of compressed array
    }
};

