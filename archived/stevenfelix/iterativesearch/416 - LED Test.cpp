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

string str, str1, star[1005];
long long ara[200005];
vector < pair <long long, long long> > ab;
vector <long long> x;
vector <long long> y;
vector <string> dat;
string seg[10] = {
"YYYYYYN",//0
"NYYNNNN",//1
"YYNYYNY",//2
"YYYYNNY",//3
"NYYNNYY",//4
"YNYYNYY",//5
"YNYYYYY",//6
"YYYNNNN",//7
"YYYYYYY",//8
"YYYYNYY",//9
};

int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d, k, l;
    while(cin >> n){
        if(n==0) break;
        for(i=0;i<n;i++){
            cin >> star[i];
        }
        for(j=9;j>=n-1;j--){
            bool bad[10];
            memset(bad, false, sizeof bad);
            for(i=0;i<n;i++){
                c = 1;
                for(l=0;l<7;l++){
                    if(bad[l]&&star[i][l]=='Y'){
                        c = 0;
                        break;
                    }
                    if(!bad[l]&&star[i][l]=='N'&&seg[j-i][l]=='Y'){
                        bad[l] = true;
                    }
                    if(star[i][l]=='Y'&&seg[j-i][l]=='N'){
                        c = 0;
                        break;
                    }
                }
                if(!c) break;
            }
            if(c) break;
        }
        if(!c) cout << "MIS";
        cout << "MATCH\n";
    }
    return 0;
}







