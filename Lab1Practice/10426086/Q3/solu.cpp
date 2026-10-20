#include <iostream>

#define ll long long
#define fastios cin.tie(nullptr); ios_base::sync_with_stdio(false);

using namespace std;

ll n, a;

ll cnte = 0, cnto = 0, ei = -1, oi = -1;

int main(){
    fastios;

    cin >> n;
    
    for(int i = 1; i <= n; i++){
        cin >> a;
        if(a % 2 ==0){
            cnte++;
            ei = i;
        }
        else{
            cnto++;
            oi = i;
        }
    }

    cout << (cnte == 1 ? ei : oi) << endl;

    return 0;
}