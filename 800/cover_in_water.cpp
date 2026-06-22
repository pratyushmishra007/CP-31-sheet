#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<long long>;
using pii = pair<int,int>;
using pll = pair<long long,long long>;

void solve(){
    int n; cin>>n;
    string s; cin>>s;
    int ans = 0;
    for(int i = 0; i<n; ++i){
        if(i!=0 && i!=n-1 && s[i] == '.' && s[i-1] == '.' && s[i+1] == '.'){
            cout<<"2\n";
            return;
        }
        ans+=(s[i] == '.');
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