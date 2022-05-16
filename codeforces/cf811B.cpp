//price_of_crows
//revolution_for_redemption
//BUET_Mushroom

#include <bits/stdc++.h>

using namespace std;

vector <pair  <long long, long long>  > xy;
vector <pair <long long, long long> > ab;
vector <long long> x;
vector <long long> y;

string str, str1, str2, star[200000];

long long ara[300005], ara2[300005], ara3[300005];

bool flagar[200005], flagar2[200005];

bool compare(pair <long long, long long> i, pair <long long, long long> j){
    return (i.first<j.first);
}
//____________________________________________________________________________________//
//____________________________________________________________________________________//
//____________________________________________________________________________________//

bool vis[100005];

int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);   cin.tie(0);
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d, f, g ,s;
    cin >> n >> m;
    for(i=1;i<=n;i++){
        cin >> ara[i];
    }
    while(m--){
        cin >> a >> b >> c;
        temp = ara[c];
        g = s = 0;
        for(i=a;i<=b;i++){
            if(ara[i]>temp) g++;
            if(ara[i]<temp) s++;
        }
        if((c-a)==s){
            cout << "Yes\n";
        }
        else{
            cout << "No\n";
        }
    }
    return 0;
}




















