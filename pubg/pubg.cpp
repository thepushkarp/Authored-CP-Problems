#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while( t-- ){
		int p, d, d2, d4;
		cin >> p >> d;
		d = p - d;
		d2 = d/2;
		d4 = d/4;
		long long count = d2*(d4 + 1) - d4*d4 + 1;
		cout << count << "\n";
	}
	return 0;
}
