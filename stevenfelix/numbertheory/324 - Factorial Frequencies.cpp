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
long long ara[20000006];
vector < pair <long long, long long> > ab;
vector <long long> x;
vector <long long> y;
long long dig[400][800];

string mulbi(string f1, long long m){
    long long n, i, j, temp, rem;
    n = f1.length();
    string res;
    j = f1[n-1]-'0';
    rem = 0;
    for(i=n-1;i>=0;i--){
        temp = j*m+rem;
        res+=(char)(temp%10+'0');
        temp/=10;
        rem = temp;
        if(i>0) j=(f1[i-1]-'0');
    }
    if(temp){
        string s = to_string(temp);
        reverse(s.begin(), s.end());
        res+=s;
    }
    reverse(res.begin(), res.end());
    return res;
}

int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d, k, l, mn;
    star[0] = "1";
    star[1] = "1";
    memset(dig, 0, sizeof dig);
    dig[1][1] = 1;
    for(i=2;i<=366;i++){
        star[i] = mulbi(star[i-1], i);
        for(j=0;j<star[i].length();j++){
            dig[i][star[i][j]-'0']++;
        }
    }
    while(cin>>n){
        printf("%lld! --\n", n);
        for(i = 0; i < 5; i++) {
            if(i)
                printf("    ");
            else
                printf("   ");
            printf("(%lld)%5lld", i, dig[n][i]);
        }
        puts("");
        for(i = 5; i < 10; i++) {
            if(i != 5)
                printf("    ");
            else
                printf("   ");
            printf("(%lld)%5lld", i, dig[n][i]);
        }
        puts("");
    }
    return 0;
}
















