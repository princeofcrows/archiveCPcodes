#include <bits/stdc++.h>

using namespace std;

vector <pair <long long, long long> > xy;
vector <pair <long long, long long> > ab;
vector <long long> x;
vector <long long> y;

string str, str1, str3;

vector < pair <int, pair <int, string> > > star;

bool compare(pair <int, pair <int, string> > i, pair <int, pair <int, string> > j){
    if(i.second.first == j.second.first){
        return i.first<j.first;
    }
    return i.second.first < j.second.first;
}

//____________________________________________________________________________________//
//____________________________________________________________________________________//


int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, k;
    cin >> t;
    while(t--){
        cin >> m >> n;
        //cout << n << m;
        for(i=0;i<n;i++){
            cin >> str;
            str1 = str;
            ans = 0;
            for(j=0;j<m;j++){
                for(k=0;k<m-j-1;k++){
                    if(str[k]>str[k+1]){
                        ans++;
                        swap(str[k], str[k+1]);
                    }
                }
            }
            //cout << str <<" "<< ans <<" "<<i<<endl;
            star.push_back({i, {ans, str1}});
        }
        sort(star.begin(), star.end(), compare);
        //reverse(star.begin(), star.end());
        for(i=0;i<n;i++) cout << star[i].second.second <<endl;
        if(t!=0) cout << endl;
        star.clear();
    }
    return 0;
}















