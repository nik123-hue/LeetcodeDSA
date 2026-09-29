class Solution {
public:
    double myPow(double p, int q) {
        long long Q=q;
         if(q==0){
        return 1;
        }
         if(Q<0){
            p=1/p;
            Q=-Q;
        }
          if(Q%2==0){
            double result=myPow(p,Q/2);
            return result*result;    
      }
    else{
        double result=myPow(p,(Q-1)/2);
        return p*result*result;
     } 
   }
};