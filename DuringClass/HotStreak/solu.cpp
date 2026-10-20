#include <iostream>

#define fastios cin.tie(nullptr); ios_base::sync_with_stdio(false);
#define ll long long

using namespace std;

ll n, a, cnt = 0, res = -1;

int main(){
    fastios;

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> a;
        if(a > 30){
            cnt++;
            res = max(res, cnt);
        }
        else{
            cnt = 0;
        }
    }

    cout << "Longest: " << res << endl;

    return 0;
}