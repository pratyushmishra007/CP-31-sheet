#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<long long>;
using pii = pair<int,int>;
using pll = pair<long long,long long>;

void solve(){
    int n; cin>>n;
    vector<int> a(n);
    for(auto &it: a)
        cin>>it;
    
    int ans = INT_MAX;
    for(int i = 1; i<n; ++i){
        if(a[i]<a[i-1]){
            cout<<"0\n";
            return;
        }
        int x = (a[i]-a[i-1])/2+1;
        ans = min(ans, x);
    }

    cout<<ans<<"\n";
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