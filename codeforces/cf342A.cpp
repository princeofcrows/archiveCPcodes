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

string star[200000], str, str1, str2;
long long ara[1000005], ara2[100005];
vector < pair <long long, long long> > ab;
vector <long long> x, y;

struct data{
    long long a, b, c;
};

int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d, k, l, e, v;
    cin >> n;
    for(i=0;i<8;i++) ara[i] = 0;
    for(i=0;i<n;i++){
        cin >> a;
        ara[a]++;
    }
    if(ara[5]+ara[7]!=0){
        cout << -1;
        return 0;
    }
    vector <data> ta;
    while(ara[4]){
        data tp;
        tp.a = 1; tp.b = 2; tp.c = 4;
        ara[1]--; ara[2]--; ara[4]--;
        ta.push_back(tp);
        if((ara[1]<0)||(ara[2]<0)){
            cout << -1;
            return 0;
        }
    }
    while(ara[3]){
        data tp;
        tp.a = 1; tp.b = 3; tp.c = 6;
        ara[1]--; ara[3]--; ara[6]--;
        ta.push_back(tp);
        if((ara[1]<0)||(ara[6]<0)){
            cout << -1;
            return 0;
        }
    }
    while(ara[6]){
        data tp;
        tp.a = 1; tp.b = 2; tp.c = 6;
        ara[1]--; ara[2]--; ara[6]--;
        ta.push_back(tp);
        if((ara[1]<0)||(ara[2]<0)){
            cout << -1;
            return 0;
        }
    }
    if(ara[1]||ara[2]){
        cout << -1;
        return 0;
    }
    for(i=0;i<ta.size();i++){
        cout <<ta[i].a<<" "<<ta[i].b<<" "<<ta[i].c<<endl;
    }
    return 0;
}













