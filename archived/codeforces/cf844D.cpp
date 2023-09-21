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
long long ara[50005], ara2[50005], ara3[50005];
vector <long long> y;
vector <long long> z;
vector < pair <long long, long long> > ab;
map <long long, long long> dat;
map <long long, long long> dat2;
vector < vector <long long> > g;

int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n, ans, temp, t, j, i, m, c, a, b, mx, d, k, l, x,s;
    cin >> n >> s >> x;
    a = 1;
    memset(ara3, false, sizeof ara3);
    cout <<"? "<<s<<endl;
    fflush(stdout);
    cin >> c >> d;
    ab.push_back({c, d});
    if(c>=x){
        cout << "! "<< c<<endl;
        fflush(stdout);
        return 0;
    }
    if(c<x&&d==-1){
        cout << "! "<< -1<<endl;
        fflush(stdout);
        return 0;
    }
    ara3[s] = true;
    while(a!=1500){
        b = (rand()*(1<<15)+rand())%n+1;
        if(ara3[b]) continue;
        cout <<"? "<<b<<endl;
        fflush(stdout);
        cin >> c >> d;
        ab.push_back({c, d});
        ara3[b] = true;
        a++;
        if(a==n) break;
    }
    sort(ab.begin(), ab.end());
    for(i=0;i<ab.size()-1;i++){
        if(ab[i].first==x){
            cout << "! "<< x<<endl;
            fflush(stdout);
            return 0;
        }
        if(ab[i+1].first==x){
            cout << "! " << x<<endl;
            fflush(stdout);
            return 0;
        }
        if(ab[i].first<x&&ab[i+1].first>x){
            b = ab[i].second;
            c = ab[i+1].second;
            break;
        }
    }
    if(i==ab.size()-1){
        b = ab[ab.size()-1].second;
        if(b==-1){
            cout << "! "<< -1<<endl;
            fflush(stdout);
            return 0;
        }
    }
    while(a!=1999){
        cout <<"? "<<b<<endl;
        fflush(stdout);
        cin >> d >> c;
        b = c;
        if(d>=x){
            cout << "! "<< d<<endl;
            fflush(stdout);
            return 0;
        }
        if(b==-1){
            cout << "! "<< -1<<endl;
            fflush(stdout);
            return 0;
        }
        ara3[b] = true;
        a++;
    }
    cout << ab[ab.size()-1].first;
    return 0;
}














