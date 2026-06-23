#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<long long>;
using pii = pair<int,int>;
using pll = pair<long long,long long>;

void solve(){
    int n; cin>>n;
    vector<int> ans, a(n);
    for(int i = 0; i<n; ++i)
        cin>>a[i];
    ans.push_back(a[0]);
    for(int i = 1; i<n; ++i){
        if(ans.back()>a[i]){
            int x = max(a[i]-1, 1);
            ans.push_back(x), ans.push_back(a[i]);
        }
        else
            ans.push_back(a[i]);
    }
    cout<<ans.size()<<"\n";
    for(auto &it: ans)
        cout<<it<<" ";
    cout<<"\n";
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