class Solution {
public:
    int findMin(vector<int>& a) {
        int smallest = INT_MAX;
        int st = 0;
        int end = a.size()-1;

        while(st<=end){
            int mid = (st + (end-st)/2);
            smallest = min(smallest,a[mid]);
            if(a[st] <= a[end]){
                smallest = min(smallest,a[st]);
                break;
            }
            if(a[st]<=a[mid]){
                st = mid+1;
            }else{
                end = mid ;
            }
        }
        return smallest;
    }
};