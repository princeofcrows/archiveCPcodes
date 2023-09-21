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
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d;
    cin >> a >> b >> c >> d;
    t = (d-b);
    if(t>0){
        j = a;
        n = c;
        m = d;
    }
    else{
        j = c;
        t = -t;
        n = a;
        m = b;
    }
    for(i=0;i<=j;i++){
        temp = (t+i*n)%j;
        if(temp==0){
            cout << m+n*i;
            return 0;
        }
    }
    cout << -1;
    return 0;
}




















