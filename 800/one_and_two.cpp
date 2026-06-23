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
    int count = std::count(a.begin(), a.end(), 2);

    if(count&1){
        cout<<"-1\n";
        return;
    }
    count/=2;
    for(int i = 0; i<n; ++i){
        count-=(a[i] == 2);
        if(!count){
            cout<<i+1<<"\n";
            return;
        }
    }
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