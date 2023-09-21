//price_of_crows
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
long long ara[200005];
vector < pair <long long, long long> > ab;
vector <long long> x;
vector <long long> y;
vector <string> dat;
long long dp[10][10];

int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d, k, l;
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            cin >> dp[i][j];
        }
    }
    for(i=0;i<4;i++){
        if(dp[i][3]){
            for(j=0;j<3;j++){
                if(dp[i][j]){
                    cout << "YES";
                    return 0;
                }
            }
            if(i==0){
                if(dp[2][1]){
                    cout << "YES";
                    return 0;
                }
                if(dp[1][0]){
                    cout << "YES";
                    return 0;
                }
                if(dp[3][2]){
                    cout << "YES";
                    return 0;
                }
            }
            if(i==1){
                if(dp[3][1]){
                    cout << "YES";
                    return 0;
                }
                if(dp[0][2]){
                    cout << "YES";
                    return 0;
                }
                if(dp[2][0]){
                    cout << "YES";
                    return 0;
                }
            }
            if(i==2){
                if(dp[0][1]){
                    cout << "YES";
                    return 0;
                }
                if(dp[3][0]){
                    cout << "YES";
                    return 0;
                }
                if(dp[1][2]){
                    cout << "YES";
                    return 0;
                }
            }
            if(i==3){
                if(dp[1][1]){
                    cout << "YES";
                    return 0;
                }
                if(dp[0][0]){
                    cout << "YES";
                    return 0;
                }
                if(dp[2][2]){
                    cout << "YES";
                    return 0;
                }
            }
        }
    }
    cout << "NO";
    return 0;
}







