#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio;
    cin.tie(0);
    int t; cin >> t;
    cin.ignore();
    while(t--){
        string s; getline(cin, s);
        if(s.length() <= 10) cout << s << endl;
        else {
            string res = "";
            res += s[0] + to_string(s.length() - 2) + s[s.length() - 1];
            cout << res << endl;
        }
    }
    return 0;
}