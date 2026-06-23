#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<long long>;
using pii = pair<int,int>;
using pll = pair<long long,long long>;

void solve(){
    int n, k, x; cin>>n>>k>>x;
    if(x != 1){
        cout<<"YES\n";
        cout<<n<<"\n";
        for(int i = 0; i<n; ++i)
            cout<<"1 ";
        cout<<"\n";
        return;
    }

    if((k == 2 && n&1) || (k == 1 && x == 1)){
        cout<<"NO\n";
        return;
    }
    cout<<"YES\n";
    int num = n/2;
    cout<<num<<"\n";
    for(int i = 0; i<num-1; ++i)
        cout<<"2 ";
    cout<<(n&1 ? "3\n" : "2\n");
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