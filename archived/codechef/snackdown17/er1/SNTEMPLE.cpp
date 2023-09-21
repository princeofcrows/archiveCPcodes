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

bool vis[505];

int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);   cin.tie(0);
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d, f, g ,s;
    cin >> t;
    while(t--){
        cin >> n;
        temp = 0;
        for(i=0;i<n;i++){
            cin >> ara[i];
            temp+=ara[i];
        }
        a = 1;
        for(i=0;i<n;i++){
            if(ara[i]>=a){
                ara2[i] = a;
            }
            else{
                a = ara[i];
                ara2[i] = a;
            }
            a++;
        }
        a = 1;
        for(i=n-1;i>=0;i--){
            if(ara[i]>=a){
                ara3[i] = a;
            }
            else{
                a = ara[i];
                ara3[i] = a;
            }
            a++;
        }
        mx = 0;
        for(i=0;i<n;i++){
            ans = min(ara2[i], ara3[i]);
            mx = max(mx, ans);
        }
        ans = mx;
        ans = temp-ans*(ans+1)+ans;
        cout << ans << endl;

    }
    return 0;
}




















