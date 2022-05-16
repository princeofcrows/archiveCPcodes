#include <bits/stdc++.h>
using namespace std;
#define int long long

string star[3005];
int ara[100005], n;
char res[3005], ch;
set <int> s1, s2;
set <int>::iterator it;
vector <int> x;

int32_t main(){
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int i, j, p1, g1, p2, g2, h1, h2, w, h;
    cin >> n >> w >> h;
    for(i=0;i<n;i++){
        cin >> ara[i];
    }
    j = ara[0];
    for(i=1;i<n;i++){
        if(j+ara[i]+1<=w){
            j += ara[i] +1;
        }
        else{
            x.push_back(j);
            j = ara[i];
        }
    }
    /*for(i=0;i<x.size();i++){
        cout << x[i] << " ";
    }*/
    x.push_back(j);
    cout << h/(x.size()) + (bool) (h%x.size());
    return 0;
}
