#include <iostream>
#include <queue>
#include <algorithm> 
#include <vector>
#include <utility>
#include <fstream>
#include <climits>
#include <cstring>
#include <stack>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";
	int j;
	double e;
	char c;
	string t;
	cin >> j;
	scanf("%lf\n", &e);
	getline(cin, t); 
	cout << i+j << endl;
	printf("%.1lf", d+e); cout<<endl;
	cout << s << t;
	return 0;
}
