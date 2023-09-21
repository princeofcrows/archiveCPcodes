#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

typedef struct trie{
    map <char, trie*> child;
}trie;

bool prfset(trie* root, string word){
    trie* cur = root;
    for(int i=0; i<word.length(); i++){
        if(cur->child['#']){
            return false;
        }
        if(!cur->child[word[i]]){
            cur->child[word[i]] = new trie;
        }
        cur = cur->child[word[i]];
    }
    if(cur->child.size()>0){
        return false;
    }
    cur->child['#'] = new trie;
    return true;
}

int main() {
    //freopen("in.txt", "r", stdin);
    int n;
    cin >> n;
    trie* root = new trie;
    while(n--){
        string word;
        cin >> word;
        if(!prfset(root, word)){
            cout << "BAD SET"<<endl<<word;
            return 0;
        }
    }
    cout << "GOOD SET";
    return 0;
}
