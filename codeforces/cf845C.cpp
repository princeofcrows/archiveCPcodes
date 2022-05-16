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
long long ara[1000005];
vector <long long> x;
vector <long long> y;
vector < pair <long long, long long> > ab;
map <char, long long> dat;
map <char, long long> dat2;
vector < vector <long long> > g(100005);

int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n, ans, temp, t, j, i, m, c, a, b, mx, d, k, l;
    cin >> m;
    if(m<=2){
    	cout << "YES";
   	 	return 0;

	}
    for(i=0;i<m;i++){
        cin >> a >> b;
        ab.push_back({a, b});
    }
    sort(ab.begin(), ab.end());
    a = ab[0].first;
    b = ab[0].second;
    c = ab[1].first;
    d = ab[1].second;
	for(i=2;i<m;i++){
        if(ab[i].first>b){
        	a = ab[i].first;
        	b = ab[i].second;
		}
		else if(ab[i].first>d){
        	c = ab[i].first;
        	d = ab[i].second;
		}
		else{
			cout << "NO";
			return 0;
		}
    }
   	cout << "YES";
    return 0;
}
