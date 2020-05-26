#include <bits/stdc++.h>
 
using namespace std;

int count = 0;

void heron(int *sd, double s){
	double d = s*(s - (1.0)**sd)*(s - (1.0)**(sd + 1))*(s - (1.0)**(sd + 2));
	double d1 = sqrt(d);
	long long d2 = (long long)sqrt(d);
	if(d1 == d2){
		::count+=1;
		}
}

void sidesFromPerim(int p){
	int s[3];
	for ( *s = 1; *s <= p / 3 ; (*s)++ ){
		*(s + 1) = floor( (p - *s * 2) / 2 + 1 );
			if ( *(s + 1) < *s ) *(s + 1) = *s;
			*(s + 2) = p - *s - *(s + 1);
			while( *(s + 2) >= *(s + 1) && *(s + 1) >= *s ){
				heron(s, p/2.0);
				*(s + 1)+=1;
				*(s + 2)-=1;
			}
	}
}

int main() {
	int t;
	cin>>t;
	while(t--){
		int p;
		cin>>p;
		::count = 0;
		sidesFromPerim(p);
		cout<<::count<<"\n";
		} 
	}
