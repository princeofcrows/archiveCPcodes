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
vector <pair <long long, long long> > ab;
vector <long long> x;
string str, str1;

bool chk(){
    set <char> s;
    for(int i=0;i<str1.length();i++){
        s.insert(str1[i]);
    }
    if(s.size()>1&&str1.size()>=3) return true;
    return false;
}

int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n, ans, temp, t, j, i, a, mx, d, k, l, c, h, m, b;
    cin >>str;
    n = str.length();
    a = 0;
    l = 0;
    for(i=0;i<n;i++){
        str1.clear();
        for(j=l;j<=i;j++){
            if(str[j]=='a'||str[j]=='e'||str[j]=='i'||str[j]=='o'||str[j]=='u'){
                str1.clear();
            }
            else{
                str1+=str[j];
            }
        }
        if(chk()){
            cout << " ";
            l = i;
        }
        cout << str[i];
    }
    return 0;
}





















