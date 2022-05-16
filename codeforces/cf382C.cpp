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
vector <pair <long long, long long> > ab;
vector <long long> x;
vector <long long> y;
vector <long long> z;
string str, str1;
set <long long> s;
set<long long>::iterator it;
long long ara[100005];
long long ara2[100005];

long long gen(){
    map <long long, long long> dat;
    vector <long long> di;
    for(long long int i = 1; i<x.size();i++){
        if(dat[x[i]-x[i-1]]==0){
            di.push_back(x[i]-x[i-1]);
        }
        dat[x[i]-x[i-1]]++;
    }
    long long ret = 0;
    long long mx = 0;
    sort(di.begin(), di.end());
    for(long long int i = 0; i<di.size();i++){
        if(dat[di[i]]>mx){
            mx = dat[di[i]];
            ret = di[i];
        }
    }
    return ret;
}

int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n, ans, temp, t, j, i, a, mx, d, k, l, c, h, m, b;
    cin >> n;
    for(i=1;i<=n;i++){
        cin >> a;
        x.push_back(a);
        z.push_back(a);
    }
    sort(x.begin(), x.end());
    sort(z.begin(), z.end());
    if(n==1){
        cout << -1;
        return 0;
    }
    a = gen();
    for(i=1;i<n;i++){
        if(x[i]-x[i-1]!=a){
            s.insert(x[i-1]+a);
        }
    }
    if(s.size()==1){
        it = s.begin();
        y.push_back(*it);
        x.push_back(*it);
    }
    else if(s.size()==0){
        if(!binary_search(y.begin(), y.end(), x[0]-a)){
            y.push_back(x[0]-a);
            x.push_back(x[0]-a);
        }
        sort(x.begin(), x.end());
        sort(y.begin(), y.end());
        if(!binary_search(y.begin(), y.end(), x[x.size()-1]+a)){
            y.push_back(x[x.size()-1]+a);
            x.push_back(x[x.size()-1]+a);
        }
    }
    sort(x.begin(), x.end());
    a = x[1]-x[0];
    for(i=1;i<x.size();i++){
        if(x[i]-x[i-1]!=a){
            cout << 0;
            return 0;
        }
    }
    if(z.size()==2){
        if(z[0]%2==0&&z[1]%2==0){
            if(z[1]-z[0]){
                y.push_back((z[0]+z[1])/2);
            }
        }
    }
    cout << y.size() << endl;
    sort(y.begin(), y.end());
    for(i=0;i<y.size();i++){
        cout << y[i] << " ";
    }
    return 0;
}





















