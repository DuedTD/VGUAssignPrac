//chill
#include <bits/stdc++.h>
#define fastios ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define en "\n"
#define bil 1000000000

typedef long long ll;
using namespace std;

int main(){
    fastios;
    //freopen("name.INP", "r", stdin);
    //freopen("name.OUT", "w", stdout);

    ll n;
    cin >> n;

    while(n > 1){
        cout << n << " ";

        if(n % 2 != 0){
            n = n * 3 + 1;
        }
        else{
            n /= 2;
        }
    
    }

    cout << 1;
 
    return 0;
}