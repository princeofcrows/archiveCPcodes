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

long long A[27], B[27];
string str, str1;

int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int temp, t, j, i, m, h, h2, m2, c, a, mx, b, l, n, d, ans;
    cin >> t;
    while(t--){
        cin >> str >> str1;
        n = str.length();
        m = str1.length();
        memset(A, 0, sizeof A);
        memset(B, 0, sizeof B);
        for(i=0;i<n;i++){
            A[str[i]-'a']++;
        }
        for(i=0;i<m;i++){
            B[str1[i]-'a']++;
        }
        c = 0; d = 0;
        for(i=0;i<26;i++){
            if((A[i])&&(B[i]==0)){
                d = 1;
                break;
            }
        }
        for(i=0;i<26;i++){
            if((A[i]==0)&&(B[i]!=0)){
                break;
            }
        }
        if(d&&(i==26)) c = 1;
        for(i=0;i<26;i++){
            if((A[i]>=2)&&(B[i]==0)){
                c = 1;
                break;
            }
        }
        if(c) cout << "A";
        else cout << "B";
        cout <<"\n";
    }
    return 0;
}













