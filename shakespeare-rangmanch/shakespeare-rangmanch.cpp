#include<bits/stdc++.h>
using namespace std;

int main(){
	long long t;
	cin >> t;
	while( t-- ){
		long long a, b;
		cin >> a >> b;
		long long lg = pow( 3, ceil( ( log( a )/log( 3 ) ) ) );
		if( 2*b + 1 >= lg ){
			long long oneone = 2*b + 1;
			if( (long long)pow( 3, floor( (long long)log(oneone)/(long long)log(3) ) ) == oneone ) cout << "I defy you, stars\n";
			else cout<<"These violent delights have violent ends\n";
		} else cout<<"These violent delights have violent ends\n";
	}
	return 0;
}