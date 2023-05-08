#include<stdio.h>
#include<string.h>

long long int comc(long long int a, long long int b);
int main(void){
	long long int a, b, c, d;
	scanf("%lld %lld %lld %lld",&a,&b,&c,&d);
	printf("%lld",comc(a,b)+comc(c,d));
	return 0;
}

long long int comc(long long int a, long long int b) {
	long long int tmp = 10,i=0;
	if (b < 10) {
		return a * 10 + b;
	}
	while (1) {
		if (b / tmp == 0){
			return a * tmp + b;
		}
		else{
			tmp *= 10;
			i++;
		}
	}
}