#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<long long>;
using pii = pair<int,int>;
using pll = pair<long long,long long>;

void solve(){
    vector<string> vec(10);
    for(int i = 0; i<10; ++i){
        string s; cin>>s;
        vec[i] = s;
    }

    int ans = 0;
    for(int i = 0; i<10; ++i){
        for(int j = 0; j<10; ++j){
            if(vec[i][j] == 'X'){
                if(i == 0 || j == 0 || i == 9 || j == 9)
                    ans+=1;
                else if(i == 1 || j == 1 || i == 8 || j == 8)
                    ans+=2;
                else if(i == 2 || j == 2 || i == 7 || j == 7)
                    ans+=3;
                else if(i == 3 || j == 3 || i == 6 || j == 6)
                    ans+=4;
                else if(i == 4 || j == 4 || i == 5 || j == 5)
                    ans+=5;
            }
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