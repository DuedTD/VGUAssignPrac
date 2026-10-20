#include <iostream>

#define ll long long
#define fastios cin.tie(nullptr); ios_base::sync_with_stdio(false);

using namespace std;

ll n,m,a;

int main(){
    fastios;

    cin >> n >> m >> a;
    
    ll x = n / a + (n % a != 0 ? 1 : 0);
    ll y = m / a + (m % a != 0 ? 1 : 0);

    cout << x * y << endl;
}