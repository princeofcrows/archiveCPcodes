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

string star[100005], str, str1[10005], str2[10005], str3;
long long ara[200005], ara2[200005];
vector < pair <long long, long long> > ab[10005];
vector < pair <long long, long long> > xy;
vector <long long> x;
vector <long long> y;
map <string, bool> dat;

int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d, k, l;
    cin >> n >> m;
    for(i=0;i<n;i++){
        cin >> star[i] >> a >> b;
        ab[a].push_back({b, i});
    }
    for(i=1;i<=m;i++) sort(ab[i].rbegin(), ab[i].rend());
    for(i=1;i<=m;i++) {
        if((ab[i].size()>2)&&(ab[i][1].first==ab[i][2].first)){
            str1[i] = "?";
        }
        else{
            str1[i] = star[ab[i][0].second];
            str2[i] = star[ab[i][1].second];
        }
    }
    for(i=1;i<=m;i++){
        if(str1[i]=="?") cout << str1[i]<<endl;
        else cout << str1[i] <<" "<<str2[i]<<endl;
    }
    return 0;
}













