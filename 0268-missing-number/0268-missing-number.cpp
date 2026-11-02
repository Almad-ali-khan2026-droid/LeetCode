class Solution {
public:
    int missingNumber(vector<int>& a) {
       int n =a.size();
       int allSum = (n*(n+1))/2;
       int newSum =0;

       for(int num : a){
        newSum += num;
       }
    return allSum-newSum;
    }
};