//price_of_crows
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
long long ara[200005];
vector < pair <long long, long long> > ab;
vector <char> x;
bool alp[50];

bool checkpalin(){
    int i = 0;
    int j = str1.length()-1;
    while(i<=j){
        if(str1[i]!=str1[j]) return false;
        i++; j--;
    }
    return true;
}

int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d, k, l;
    cin >> str;
    n = str.length();
    for(l=0;l<n;l++){
        for(i=0;i<n;i++){
            str1 = "";
            for(j=0;j<n;j++){
                if(l==j){
                    str1+=str[i];
                }
                str1+=str[j];
            }
            if(checkpalin()){
                cout << str1;
                return 0;
            }
            str1 = "";
            for(j=0;j<n;j++){
                str1+=str[j];
                if(l==j){
                    str1+=str[i];
                }
            }
            //cout << str1 << endl;
            if(checkpalin()){
                cout << str1;
                return 0;
            }
        }
    }
    cout << "NA";
    return 0;
}







