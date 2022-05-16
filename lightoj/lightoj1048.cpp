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
    freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n, ans, temp, t, j, i, m, c, a, b, mx, d, k, l;
    cin >> t;
    a = 1;
    while(t--){
        cin >> n;
        c = 1;
        d = 0;
        for(i=0;i<=32;i++){
            if(((bool)(n&(c<<i)))&&!((bool)(n&(c<<(i+c))))){
                n = n&~(c<<i);
                n = n|(c<<(i+c));
                i-=2;
                if(i>=0){
                    while(((bool)(n&(c<<(i+c))))&&!((bool)(n&(c<<(i))))){
                        n = n&~(c<<(i+c));
                        n = n|(c<<(i));
                        i--;
                        if(i<0) break;
                    }
                }
                break;
            }
        }
        cout << "Case "<<a++<<": "<<n<<endl;
    }
    return 0;
}








