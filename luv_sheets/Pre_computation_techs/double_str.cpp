#include <bits/stdc++.h>

using namespace std;

int cnt[32];

int main()
{
	int t;
	string s;
	cin >> t;
	while ( t-- ) {
		cin >> s;
		memset(cnt, 0, sizeof(cnt));
		for ( int i = 0; i < s.size(); i++ ) cnt[s[i]-'a']++;
		for ( int i = 0; i < 26; i++ ) {
			if ( cnt[i] >= 2 ) {
				printf("Yes\n");
				goto p1;
			}
		}
		printf("No\n");
		p1: { }
	}
	return 0;
}