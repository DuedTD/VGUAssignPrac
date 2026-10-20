#include <iostream>

#define ll long long
#define fastios cin.tie(nullptr); ios_base::sync_with_stdio(false);

using namespace std;

ll n, val;

int main(){
    cin >> n;

    ll sumn = n * (1 + n) / 2;
    ll s = 0;

    for(int i = 0; i < n-1; i++){
        cin >> val;
        s += val;
    }

    cout << (sumn - s) << endl;
}