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
long long ara[100005];
map <long long, long long> tree;
map <long long, long long> dat;
priority_queue < pair<long long, pair<long long, long long> > > pq;
bool pw;

typedef struct trie{
    map <char, trie*> child;
}trie;

void prfset(trie* root, string word){
    trie* cur = root;
    for(int i=0; i<word.length(); i++){
        if(!cur->child[word[i]]){
            cur->child[word[i]] = new trie;
        }
        cur = cur->child[word[i]];
    }
    return;
}

bool checkprfset(trie* root){
    trie* cur = root;
    bool flag = false;
    for(int i=0; i<26; i++){
        if(cur->child['a'+i]){
            if(!checkprfset(cur->child['a'+i])) return true;
        }
    }
    return false;
}

bool checkprfset2(trie* root){
    trie* cur = root;
    bool flag = true;
    for(int i=0; i<26; i++){
        if(cur->child['a'+i]){
            if(!checkprfset2(cur->child['a'+i])) return true;
            flag = false;
        }
    }
    return flag;
}

int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n, ans, temp, t, j, i, m, c, a, b, mx, d, k, l, x,s;
    cin >> n >> k;
    trie* root = new trie;
    for(i=0;i<n;i++){
        string word;
        cin >> word;
        prfset(root, word);
    }
    a = checkprfset(root);
    b = checkprfset2(root);
    if(a&&b){
        cout << "First";
    }
    else if(a&&k%2) cout << "First";
    else cout << "Second";
    return 0;
}













