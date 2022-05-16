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
long long ara[200004], sz[200004];
vector < pair <long long, long long> > ab;
vector < pair <long double, long long> > xy;
vector <long long> x;
vector <long long> y;
map <char, long long> dat;
priority_queue <pair <long long, pair<long long, long long> >, vector <pair <long long, pair<long long, long long> > >, greater <pair <long long, pair<long long, long long> > > > q;
priority_queue <pair <long long, pair<long long, long long> >, vector <pair <long long, pair<long long, long long> > >, greater <pair <long long, pair<long long, long long> > > > q2;

void initset(long long n){
    for(long long i = 1; i<=n; i++){
        ara[i] = i;
        sz[i] = 1;
    }
}

long long findset(long long i){
    if(ara[i] == i) return i;
    return ara[i] = findset(ara[i]);
}

bool issameset(long long i, long long j){
    return (findset(i)==findset(j));
}

void unionset(long long i, long long j){
    long long a = findset(j);
    long long b = findset(i);
    if(a==b) return;
    if(sz[a]>=sz[b]){
        sz[a]+=sz[b];
        ara[b] = a;
    }
    else{
        sz[b]+=sz[a];
        ara[a] = b;
    }
}

int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, k;
    while(cin >> n >> m){
        if(n==0&&m==0) break;
        temp = 0;
        for(i=0;i<m;i++){
            cin >> a >> b >> c;
            q.push({c, {a+1, b+1}});
            temp+=c;
        }
        initset(n+1);
        ans = 0;
        while(!q.empty()){
            if(!issameset(q.top().second.first, q.top().second.second)){
                unionset(q.top().second.first, q.top().second.second);
                ans += q.top().first;
            }
            q.pop();
        }
        cout <<temp-ans<< endl;
    }
    return 0;
}





















