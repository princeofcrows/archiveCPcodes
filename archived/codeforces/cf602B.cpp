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

bool check(long long m, long long n){
    long long i, j;
    set <long long> st;
    map <long long, long long> mp;
    for(i=0;i<m;i++){
        st.insert(ara[i]);
        mp[ara[i]]++;
    }
    if(st.size()<=2) return true;
    for(i=m;i<n;i++){
        st.insert(ara[i]);
        mp[ara[i]]++;
        mp[ara[i-m]]--;
        if(!mp[ara[i-m]]) st.erase(ara[i-m]);
        if(st.size()<=2) return true;
    }
    return false;
}

int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d, k, l;
    cin >> n ;
    for(i=0;i<n;i++){
        cin >> ara[i];
    }
    i = 2;
    j = n;
    while(i<=j){
        m = (i+j)/2;
        if(check(m, n)){
            i = m+1;
        }
        else{
            j = m-1;
        }
    }
    c = 2;
    for(m=max(i-5, c);m<=min(i+5, n);m++){
        if(!check(m, n)){
            cout << m-1;
            return 0;
        }
    }
    cout << n;
    return 0;
}













