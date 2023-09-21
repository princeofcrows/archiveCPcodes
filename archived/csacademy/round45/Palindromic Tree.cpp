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

void palindromeSubStrs(string s)
{
    map<string, int> m;
    int n = s.size();

    // table for storing results (2 rows for odd-
    // and even-length palindromes
    int R[2][n+1];

    // Find all sub-string palindromes from the given input
    // string insert 'guards' to iterate easily over s
    s = "@" + s + "#";

    for (int j = 0; j <= 1; j++)
    {
        int rp = 0;   // length of 'palindrome radius'
        R[j][0] = 0;

        int i = 1;
        while (i <= n)
        {
            //  Attempt to expand palindrome centered at i
            while (s[i - rp - 1] == s[i + j + rp])
                rp++;  // Incrementing the length of palindromic
                       // radius as and when we find vaid palindrome

            // Assigning the found palindromic length to odd/even
            // length array
            R[j][i] = rp;
            int k = 1;
            while ((R[j][i - k] != rp - k) && (k < rp))
            {
                R[j][i + k] = min(R[j][i - k],rp - k);
                k++;
            }
            rp = max(rp - k,0);
            i += k;
        }
    }

    // remove 'guards'
    s = s.substr(1, n);

    // Put all obtained palindromes in a hash map to
    // find only distinct palindromess
    m[string(1, s[0])]=1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= 1; j++)
            for (int rp = R[j][i]; rp > 0; rp--)
               m[s.substr(i - rp - 1, 2 * rp + j)]=1;
        m[string(1, s[i])]=1;
    }

    //printing all distinct palindromes from hash map
   cout <<m.size()-1<<endl;

}

int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n, ans, temp, t, j, i, m, c, a, b, mx, d, k, l;
    cin >> n;
    string str;
    for(i=0;i<n;i++){
        str+=(i%2+'0');
    }
    str = "1100101";
    if(n==1){
        cout << n<<endl<<1;
        return 0;
    }
    palindromeSubStrs(str);
    cout << str;
    return 0;
}














