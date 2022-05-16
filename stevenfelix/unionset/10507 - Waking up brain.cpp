
/////////////////////////////////////////////////////////////////////////
//.....................................................................//
////////////jasper_skywalker___fsociety()___BUET_mashroom////////////////
//.....................................................................//
/////////////////////////////////////////////////////////////////////////

#include <bits/stdc++.h>

using namespace std;

vector <pair <long long, long long> > xy;
vector <pair <long long, long long> > ab;
vector <long long> x;
vector <long long> y;

string str, str1, str2, str3, str4, str5;

long long ara[1000005], ara2[200005], ara3[200005];

bool compare(pair <long long, long long> i, pair <long long, long long> j){
    return (i.first<j.first);
}

bool compare2(pair <long long, long long> i, pair <long long, long long> j){
    return (i.first>j.first);
}

long long gcd(long long a, long long b){
    if(a%b==0) return b;
    return gcd(b, a%b);
}

vector <string> per;

//____________________________________________________________________________________//
//____________________________________________________________________________________//

void initset(){
    for(long long i=0;i<=30;i++) ara[i] = i;
}

long long findset(long long i){
    if(ara[i]==i) return i;
    else return ara[i] = findset(ara[i]);
}

void unionset(long long i, long long j){
    ara[findset(i)] = findset(j);
}

bool issameset(long long i, long long j){
    return (findset(i)==findset(j));
}

map <char, long long> dat;
vector < vector <long long> > graph(30);

int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, k, n, d;
    while(cin>>n){
        dat.clear();
        cin >> m;
        cin >> str;
        dat.clear();
        c = 1;
        for(i=0;i<3;i++){
            dat[str[i]] = c++;
            x.push_back(dat[str[i]]);
        }
        for(i=0;i<m;i++){
            cin >> str;
            if(dat[str[0]]==0) dat[str[0]] = c++;
            if(dat[str[1]]==0) dat[str[1]] = c++;
            graph[dat[str[0]]].push_back(dat[str[1]]);
            graph[dat[str[1]]].push_back(dat[str[0]]);
        }
        t = 0;
        while(x.size()!=n){
            for(i=4;i<c;i++){
                ans = 0;
                if(binary_search(x.begin(), x.end(), i))
                    continue;
                for(j=0;j<graph[i].size();j++){
                    if(binary_search(x.begin(), x.end(), graph[i][j])) ans++;
                }
                if(ans>=3){
                    y.push_back(i);
                }
            }
            if(y.size()==0) break;
            for(i=0;i<y.size();i++) x.push_back(y[i]);
            sort(x.begin(), x.end());
            y.clear();
            t++;

        }
        if(x.size()!=n) cout << "THIS BRAIN NEVER WAKES UP\n";
        else cout <<"WAKE UP IN, "<<t<<", YEARS\n";
        for(i=0;i<30;i++) graph[i].clear();
        x.clear();
    }
    return 0;
}















