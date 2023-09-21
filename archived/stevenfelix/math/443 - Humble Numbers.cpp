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

string star[200000], str2, str1;
long long ara[200005];
vector < pair <long long, long long> > ab;
vector <long long> x;
vector <long long> y;
vector <string> dat;

int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, k, l, d;
    ara[0] = 1;
    a = b = c = d = 0;
    for(i=1;i<=5842;i++){
        ara[i] = min(min(ara[a]*2, ara[b]*3), min(ara[c]*5, ara[d]*7));
        if(ara[a]*2==ara[i]) a++;
        if(ara[b]*3==ara[i]) b++;
        if(ara[c]*5==ara[i]) c++;
        if(ara[d]*7==ara[i]) d++;
    }
    while(cin>>n){
        if(!n) break;
        ans = ara[n-1];
        printf("The %lld", n);
        if(n%10==1&&(n%100)!=11) printf("st");
        else if((n%10==2)&&(n%100!=12)) printf("nd");
        else if((n%10==3)&&(n%100!=13)) printf("rd");
        else printf("th");
        printf(" humble number is %lld.\n", ans);
    }
    return 0;
}







