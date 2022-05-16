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

string star[200000], str, str1;
long long ara[200005], ara2[200005], ara3[200005];
vector < pair <long long, long long> > ab;
vector <long long> x;
vector <long long> y;
set <char> st;
map <long long, long long> dat;
queue <long long> q[200005];

long long Set(long long int N, long long int pos){return N=N | (1LL<<pos);}
long long reset(long long N,long long pos){return N= N & ~(1LL<<pos);}
bool check(long long N, long long pos){return (bool)(N & (1LL<<pos));}

int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d, k, l, f, r;
    cin >> str >> str1;
    a = str.length();
    b = str1.length();
    for(i=1;i*i<=a;i++){
        if(a%i==0){
            x.push_back(i);
            if(a/i!=i) x.push_back(a/i);
        }
    }
    sort(x.begin(), x.end());
    for(i=1;i*i<=b;i++){
        if(b%i==0){
            y.push_back(i);
            if(b/i!=i) y.push_back(b/i);
        }
    }
    sort(y.begin(), y.end());
    ans = 0;
    for(i=0;i<x.size();i++){
        if(binary_search(y.begin(), y.end(), x[i])){
            c = 1;
            for(j=0;j<x[i];j++){
                if(str[j]!=str1[j]){
                    c = 0; break;
                }
            }
            if(c){
                for(j=1;j<a/x[i];j++){
                    for(l=0;l<x[i];l++){
                        if(str[l]!=str[j*x[i]+l]){
                            c = 0; break;
                        }
                    }
                }
            }
            if(c){
                for(j=1;j<b/x[i];j++){
                    for(l=0;l<x[i];l++){
                        if(str1[l]!=str1[j*x[i]+l]){
                            c = 0; break;
                        }
                    }
                }
            }
            if(c) ans++;
        }
    }
    cout << ans;
    return 0;
}







