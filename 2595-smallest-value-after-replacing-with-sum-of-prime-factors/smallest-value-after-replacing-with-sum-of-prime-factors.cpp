class Solution {
public:
bool isPrime(int n){
    if(n==1) return false;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
         return false;
        }
    }      
    return true;
 }
    int smallestValue(int n) {
        if(isPrime(n)) return n;
        int sum = 0;
        //kaam
        for(int i=1;i<sqrt(n);i++){
            if(n%i==0 && isPrime(i)){
                int m = n;
                while(m%i==0){
                    sum += i;
                    m /= i;
                }
            } 
        }
        for(int i=sqrt(n);i>1;i--){
            if(n%i==0 && isPrime(n/i)) {
                 int m = n;
                while(m%(n/i)==0){
                    sum += (n/i);
                    m /=(n/i) ;
                }
            }
        }  
        if(sum==n) return n; 
       return smallestValue(sum);    
    }
};