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

vector <string> rats[4];

int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);   cin.tie(0);
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d, f;
    cin >> n;
    for(i=0;i<n;i++){
        cin >> temp;
        x.push_back(temp);
        y.push_back(temp);
    }
    sort(y.begin(), y.end());
    c = 0;
    for(i=0;i<n;i++){
        if(y[i]!=x[i]) c++;
    }
    if(c>2){
        cout << "NO";
    }
    else{
        cout <<"YES";
    }
    return 0;
}




















