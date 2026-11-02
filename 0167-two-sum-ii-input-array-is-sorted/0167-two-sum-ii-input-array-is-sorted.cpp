class Solution {
public:
    vector<int> twoSum(vector<int>& a, int target) {
        int st = 0, end = a.size()-1;
       

        while(st<end){
             int PS = a[st]+a[end];
            if(PS == target){
                return {++st,++end};
            }else if(PS>target){
                end--;
            }else{
                st++;
            }
        }
         return {};
    }
};