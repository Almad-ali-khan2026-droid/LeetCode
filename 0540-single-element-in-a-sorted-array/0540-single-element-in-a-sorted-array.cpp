class Solution {
public:
    int singleNonDuplicate(vector<int>& a) {
        int n=a.size();
        int st=0;
        int end=a.size()-1;
        if(a.size()==1) return a[0];

        while(st<=end){
            int mid= (st+(end-st)/2);
            if(mid==0 && a[0]!=a[1]) return a[mid];
            if(mid==n-1 && a[n-2]!=a[n-1]) return a[mid];

            if(a[mid-1]!=a[mid] && a[mid]!=a[mid+1]){
                return a[mid];
            }
            if(mid%2==0){//even
            if(a[mid-1]==a[mid]){//left
            end=mid-1;
            }else{//right
            st=mid+1;
            }

            }else{//odd
            if(a[mid-1]==a[mid]){//right
            st=mid+1;
            }else{//left
             end=mid-1;
            }
            }
        }
        return -1;
    }
};