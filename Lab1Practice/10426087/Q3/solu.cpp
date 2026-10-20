#include <iostream>

#define ll long long
#define fastios cin.tie(nullptr); ios_base::sync_with_stdio(false);

using namespace std;

ll n;

ll cnt = 0;
string s, prv = "";

int main(){
    fastios;
    
    cin >> n;

    for(int i = 0; i < n; i ++){
        cin >> s;
        if(s != prv){
            cnt++;
            prv = s;
        }
    }

    cout << cnt << endl;
}