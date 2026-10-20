#include <iostream>

#define ll long long
#define fastios cin.tie(nullptr); ios_base::sync_with_stdio(false);

using namespace std;

ll n;

int main(){
    fastios;

    cin >> n;
    
    ll x = (n + 1) / 3;
    ll y = n - 2*x;

    cout << y << " " << x << endl;
}
