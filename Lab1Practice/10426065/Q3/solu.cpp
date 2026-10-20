#include <iostream>

#define fastios cin.tie(nullptr); ios_base::sync_with_stdio(false);
#define ll long long

using namespace std;

string s;

int main(){
    cin >> s;

    int res = 1;
    int cnt = 1;

    for(int i = 1; i < s.size(); i++){
        if(s[i-1] != s[i]){
            cnt = 1;
        }
        else{
            cnt++;
        }
        res = max(res, cnt);
    }

    cout << res << endl;
}