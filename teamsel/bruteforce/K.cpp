//prince_of_crows
//revolution_for_redemption
//BUET_Mushroom

/*This is beginning to feel like the long
winded blues of the never
Barely controlled locomotive consuming the picture
and blowing the crows, the smoke

This is beginning to feel like the long
winded blues of the never
Static explosion devoted to crushing the broken
and shoving their souls to ghost

Eternalised. Objectified.
You set your sights so high.
But this is beginning to feel like
the bolt busted loose from the lever

Never mind
Death professor
Your structure's fine
My dust is better
Your victim flies so high
All to catch a bird's eye view of who's next*/

#include <bits/stdc++.h>

using namespace std;

string star[200000], str, str1;
long long ara[200005], n;
vector < pair <long long, long long> > ab;
vector <string> dat;


int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d, k, l;
    cin >> t;
    d = 1;
    while(t--){
        cin >> n;
        for(i=0;i<n;i++){
            cin >> star[i];
        }
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                if(star[i][j]=='.'){
                    char ch = 'A';
                    for(l=1;l<=4;l++){
                        if(((i+1<n)&&(star[i+1][j]==ch))||((j+1<n)&&(star[i][j+1]==ch))||((i-1>=0)&&(star[i-1][j]==ch))||((j-1<n)&&(star[i][j-1]==ch))){
                            ch++;
                        }
                    }
                    star[i][j] = ch;
                }
            }
        }
        cout << "Case "<<d++<<":\n";
        for(i=0;i<n;i++){
            cout << star[i] << endl;
        }
    }
    return 0;
}







