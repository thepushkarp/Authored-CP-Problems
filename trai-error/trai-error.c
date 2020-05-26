#include<stdio.h>
#include<math.h>

int count = 0;

void heron(int *sd, int s){
	if(sqrt(s*(s - *sd)*(s - *(sd + 1))*(s - *(sd + 2))) == floor(sqrt(s*(s - *sd)*(s - *(sd + 1))*(s - *(sd + 2))))){
		count+=1;
		}
}

void sidesFromPerim(int p){
	int s[3];
	for (*s = 1; *s <= p / 2; (*s)++){
			for (*(s+1) = 1; *(s+1) + *s < p; *(s+1)+=1){
				*(s+2) = p - (*s + *(s+1));
				if (*s + *(s+1) <= *(s+2) || *s + *(s+2) <= *(s+1) || *(s+1) + *(s+2) <= *s)
					continue;
				if (*s <= *(s+1) && *(s+1) <= *(s+2))
					heron(s, p/2);
			}
		}
}

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int p;
		scanf("%d",&p);
		count = 0;
		sidesFromPerim(p);
		printf("%d\n", count);
	}
	return 0;
}