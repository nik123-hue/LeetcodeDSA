class Solution {
public:
long long modPow(long long a,long long b,long long mod){
    long long ans = 1;
    while(b>0){
        if(b%2==1){
            ans = (ans*a)%mod;
        }
        a = (a*a)%mod;
        b/=2;
    }
    return ans;
}
    int countGoodNumbers(long long n) {
        long long MOD = 1000000007;
        long long even = (n+1)/2;
        long long odd = n/2;
        long long ans = modPow(5,even,MOD);
        ans = (ans* modPow(4,odd,MOD))%MOD;
        return ans;
    }
};