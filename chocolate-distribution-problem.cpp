class Solution{
    typedef long long ll;
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
        sort(a.begin(), a.end());
        ll mn=1000000001;
        for(ll i=0;i<=n-m;i++)
        {
            mn=min(mn,a[m+i-1]-a[i]);
        }
        return mn;
    }   
};