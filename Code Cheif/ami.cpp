#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        int n, k;
        cin >> n >> k;

        vector<long long> deck(n+1, 0);

        int card = k;
        int player = 1;
        int dir = 1;

        while(card >= 1){
            deck[player] += card;
            card--;

            player += dir;

            if(player > n){ player = n; dir = -1; }
            if(player < 1){ player = 1; dir = +1; }
        }

        cout << *max_element(deck.begin(), deck.end()) << "\n";
    }

    return 0;
}