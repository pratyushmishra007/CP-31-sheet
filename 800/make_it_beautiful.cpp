#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<long long>;
using pii = pair<int,int>;
using pll = pair<long long,long long>;

void solve(){
    int n; cin>>n;
    vector<int> a(n); set<int> st;
    for(auto &it: a)
        cin>>it, st.insert(it);
    if(st.size() == 1){
        cout<<"NO\n";
        return;
    }

    sort(a.begin(), a.end());
    cout<<"YES\n";
    cout<<a[n-1]<<" ";
    for(int i = 0; i<n-1; ++i)
        cout<<a[i]<<" ";
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