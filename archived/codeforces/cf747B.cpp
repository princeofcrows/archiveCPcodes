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
long long ara[100005], ara2[100005];
vector < pair <long long, long long> > ab;
vector <long long> x;
vector <long long> y;
map <long long, long long> dat;
priority_queue <pair<long long, char>, vector <pair<long long, char> >, greater <pair<long long, char> > > q;

int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d, k, l;
    cin >> n ;
    cin >> str;
    char ch;
    for(i=0;i<n;i++){
        if(str[i]!='?'){
            dat[str[i]]++;
        }
    }
    q.push({dat['A'], 'A'});
    q.push({dat['G'], 'G'});
    q.push({dat['T'], 'T'});
    q.push({dat['C'], 'C'});
    for(i=0;i<n;i++){
        if(str[i]=='?'){
            ch = q.top().second;
            a = q.top().first;
            q.pop();
            str[i] = ch;
            a++;
            q.push({a, ch});
        }
    }
    a = q.top().first;
    q.pop();
    while(!q.empty()){
        if(q.top().first!=a){
            cout <<"===";
            return 0;
        }
        q.pop();
    }
    cout << str;
    return 0;
}













