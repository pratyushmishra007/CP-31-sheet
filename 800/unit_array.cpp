#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<long long>;
using pii = pair<int,int>;
using pll = pair<long long,long long>;

void solve(){
    int n; cin>>n;
    int countp = 0, countn = 0;
    for(int i = 0; i<n; ++i){
        int a; cin>>a;
        countp+=(a == 1);
        countn+=(a == -1);
    }
    int ans = 0;
    if(countp < countn)
        ans+=(countn-countp+1)/2, countn-=ans, countp+=ans;
    
    cout<<(countn&1 ? ans+1 : ans)<<"\n";
}

static auto fast_io = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    return nullptr;
}();

int main() {
    int T = 1;
    if constexpr (true) {
        cin >> T;
    }
    while (T--) {
        solve();
    }
    return 0;
}