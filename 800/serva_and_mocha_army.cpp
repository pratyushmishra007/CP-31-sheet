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
    
    for(int i = 0; i<n; ++i){
        for(int j = 0; j<n; ++j){
            if(i == j)
                continue;
            int g = gcd(a[i], a[j]);
            if(g<=2){
                cout<<"YES\n";
                return;
            }
        }
    }
    cout<<"NO\n";
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