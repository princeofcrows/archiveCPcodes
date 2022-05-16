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
long long ara[1004], sz[1004];
vector < pair <long long, long long> > ab;
vector < pair <long double, long double> > xy;
vector <long long> x;
vector <long double> y;
map <char, long long> dat;
priority_queue <pair <long double, pair<long long, long long> >, vector <pair <long double, pair<long long, long long> > >, greater <pair <long double, pair<long long, long long> > > > q;
priority_queue <pair <long double, pair<long long, long long> >, vector <pair <long double, pair<long long, long long> > >, greater <pair <long double, pair<long long, long long> > > > q2;

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
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, mx, k, a, b, d;
    cin >> t;
    d = 1;
    while(t--){
        long double road, rail, mr, tx, ty, dis;
        cin >> m >> n;
        xy.clear();
        for(i=0;i<n;i++){
            cin >> tx >> ty;
            xy.push_back({tx, ty});
        }
        for(i=0;i<n;i++){
            for(j=i+1;j<n;j++){
                dis = sqrt((xy[i].first-xy[j].first)*(xy[i].first-xy[j].first)+(xy[i].second-xy[j].second)*(xy[i].second-xy[j].second));
                q.push({dis, {i+1, j+1}});
            }
        }
        initset(n+1);
        while(!q.empty()){
            if(!issameset(q.top().second.first, q.top().second.second)){
                unionset(q.top().second.first, q.top().second.second);
                y.push_back(q.top().first);
            }
            q.pop();
        }
        reverse(y.begin(), y.end());
        double dis2 = y[m-1];
        printf("%.2lf\n", dis2);
        y.clear();
    }
    return 0;
}




