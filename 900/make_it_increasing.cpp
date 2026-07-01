// RADHA VALLABH SHRI HARIVANSH
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<long long>;
using pii = pair<int,int>;
using pll = pair<long long,long long>;

void solve(){
    int n; cin>>n;
    vector<int> vec(n);
    for(auto &it: vec)
        cin>>it;

    int ans = 0;
    for(int i = n-1; i>=1; --i){
        while(vec[i]<=vec[i-1] && vec[i-1]){
            vec[i-1]/=2;
            ans++;
        }
    }
    for(int i = 0; i<n-1; ++i){
        if(vec[i]>=vec[i+1]){
            cout<<"-1\n";
            return;
        }
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