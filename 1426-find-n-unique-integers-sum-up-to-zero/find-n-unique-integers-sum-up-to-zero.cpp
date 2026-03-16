class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> arr(n,0);
        int a = 1;
        if(n%2!=0) n--;
        for(int i=0;i<n;i+=2){
            arr[i]=a;
            arr[i+1]=-a;
            a++;
        }
         return arr;
    }
};