//price_of_crows
//revolution_for_redemption
//BUET_Mushroom

#include <bits/stdc++.h>

using namespace std;

vector <pair <string, string> > xy;
vector <pair <long long, long long> > ab;
vector <long long> x;
vector <long long> y;

string str, str1, str2, star[200000];

long long ara[200005], ara2[200005];

bool flagar[200005], flagar2[200005];

bool compare(pair <long long, long long> i, pair <long long, long long> j){
    return (i.first<j.first);
}
//____________________________________________________________________________________//
//____________________________________________________________________________________//
//____________________________________________________________________________________//

int main() {
    freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdin);
    ios_base::sync_with_stdio(0);   cin.tie(0);
    long long n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d, c1, c2;
    cin >> n >> c1 >> c2;
    cin >> str;
    a = b = 0;
    for(i=0;i<n;i++){
        if(str[i]=='1') a++;
        else b++;
    }
    if(a>=b){
        ans = a*c1+b*c2;
    }
    else{
        t = b/a;
        temp = b%a;
        ans = a*c1+c2*t*t*(a-temp)+c2*temp*(t+1)*(t+1);
    }
    cout << ans;
    return 0;
}



















