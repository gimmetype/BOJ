#include <stdio.h>

int main(void) {
	char sosu[1000002] = {1, 1}; //소수는 0, 아닌건 1로 저장
	int arr[80001] = {}; //소수들을 오름차순으로 저장하는 배열
	
	int p = 0; //소수들을 저장하는 데 사용하는 변수
	for(long long i=2; i<=1000000; i++) { //2부터 소수와, 아닌 것 구별하기
		while(sosu[i]) i++; //소수가 아니라면 반복
		if(i>1000000) break; //1000000까지 다 했다면 종료
		
		for(long long j = i*i; j<=1000000; j+=i) sosu[j] = 1; //소수의 배수는 소수가 아님을 이용합니다.
		
		arr[p++] = i; //소수 저장
	}
	
	while(1) { //두 홀수 소수의 합으로 나타낼 수 있는지 판단하기
		int tmp;
		scanf("%d", &tmp);
		if(!tmp) break; //0 입력시 종료
		
		for(int i=1; ; i++) { //arr[0] = 2이다. 문제에선 홀수인 소수를 이용하기 때문에, arr[1]부터 사용해야한다 고로 i의 초기값은 1이다.
			int tmp2 = tmp-arr[i]; //입력받은수 - 소수
			
			if(arr[i] > tmp2) { //만약 소수가 입력받은수 - 소수보다 크다면, 이는 반복을 할 의미가 없다. 홀수인 소수 두개로 만들수 없음을 의미한다.
				printf("Goldbach's conjecture is wrong.\n");
				break; //종료
			}
			
			if(!sosu[tmp2]) { //만약 입력받은수 - 소수 도 소수라면, 이는 두 홀수인 소수의 합으로 나타낼 수 있음을 의미한다.
				printf("%d = %d + %d\n", tmp, arr[i], tmp2);
				break; //종료
			}
		}
	}
}