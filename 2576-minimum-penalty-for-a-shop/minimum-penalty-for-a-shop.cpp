class Solution {
public:
    int bestClosingTime(string customers) {
        int n = customers.length();
        int pre[n+1];
        int suf[n+1];
        pre[0] = 0;
        for(int i=0;i<n;i++){
            pre[i+1] = pre[i] +((customers[i]=='N') ? 1 : 0);
        }
        suf[n] = 0;
        for(int i=n-1;i>=0;i--){
            suf[i]= suf[i+1] + ((customers[i]=='Y') ? 1 : 0);
  }
        int minPen = n;
        for(int i=0;i<=n;i++){
            pre[i] += suf[i];
            int Pen = pre[i];
            minPen = min(minPen,Pen);
        }
        for(int i=0;i<=n;i++){
            int Pen = pre[i];
            if(Pen==minPen) return i;
        }
         return n;
        
    }
};