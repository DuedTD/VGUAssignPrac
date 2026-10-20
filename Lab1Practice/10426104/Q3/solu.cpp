#include <iostream>

#define ll long long
#define fastios cin.tie(nullptr); ios_base::sync_with_stdio(false);

using namespace std;

ll k, b, w;

int main(){
    fastios;

    cin >> k >> b >> w;

    ll total = k * (w * (1 + w)/2);

    cout << total - b << endl;
}
