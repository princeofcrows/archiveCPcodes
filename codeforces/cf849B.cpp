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
double ara[1000005];
vector <double> x;
vector <long long> y;
vector < pair <long long, long long> > ab;
map <double, set <long long> > dat;
map <double, set <double> > dat3;
map <pair<double, double>, set <long long>> dat4;
map <double, long long> dat2;
vector < vector <long long> > g(100005);


int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n, ans, temp, t, j, i, a, b, mx, d, k, l;
    double m, c;
    cin >> n;
    for(i=0;i<n;i++){
        cin >> ara[i];
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            m = (ara[j]-ara[i])/(1.0*(j-i));
            c = ara[i]-m*(i+1);
            if(dat2[m]==0){
                x.push_back(m);
            }
            dat2[m]++;
            dat[m].insert(i);
            dat[m].insert(j);
            dat3[m].insert(c);
        }
    }
    for(i=0;i<x.size();i++){
        if(dat[x[i]].size()==n){
            m = x[i];
            if(dat3[m].size()==2){
                cout << "YES";
                return 0;
            }
        }
        if(dat[x[i]].size()==n-1){
            m = x[i];
            if(dat3[m].size()==1){
                cout << "YES";
                return 0;
            }
        }
    }
    cout << "NO";
    return 0;
}





















