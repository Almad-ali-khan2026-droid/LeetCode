class Solution {
public:
    int findPeakElement(vector<int>& a) {
        int st = 0, end = a.size() - 1;
        
        while (st < end) {
            int mid = st + (end - st) / 2;
            
            if (a[mid] < a[mid + 1]) {
                // Peak lies to the right
                st = mid + 1;
            } else {
                // Peak lies to the left (or mid itself)
                end = mid;
            }
        }
        
        return st; // or end, both converge to peak index
    }
};
