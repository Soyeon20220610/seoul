// #include<stdio.h>

// int arr[] = {1,2,3,4,5}; //전역 변수로 선언
// int Copy[5]; //arr배열을 복사하기 위한 배열

// void print_Comb(int count);
// void Combination(int n,int r,int c);

// void print_Comb(int count){
//     for(int i=0;i<count;i++){
//         printf("%d",Copy[i]);
//     }
//         printf("\n");
// }
// void Combination(int n,int r,int c){ //재귀함수
//     if(r==0){ 
//         print_Comb(c);
//         return;
//     }
//     if(n<r){
//         return;
//     }
//     else {
//         Copy[r-1] = arr[n-1];
//         Combination(n-1,r-1,c);
//         Combination(n-1,r,c);
//     }
// }
// int main(){
//     Combination(5,3,3);
// }

// #include <stdio.h>
// #include <stdlib.h>

// void pick(int n, int* bucket, int bucketSize, int k) {
// 	int i, lastIndex, smallest, item;
// 	if (k == 0) { //모두 뽑은 경우 print하고 return
// 		for (i = 0; i < bucketSize; i++)
// 			printf("%d ", bucket[i]);
// 		printf("\n");
// 		return;
// 	}
// 	lastIndex = bucketSize - k - 1; // 가장 최근에 뽑힌 수가 저장된 위치 index
    
//     smallest = 0; //매번 전체 아이템에서 뽑기때문에
        
// 	for (item = smallest; item < n; item++) { //smallest에서 n-1까지의 수에서 뽑는 경우
// 		bucket[lastIndex + 1] = item;
// 		pick(n, bucket, bucketSize, k - 1); //1개를 뽑았으므로 k-1개를 뽑는다
// 	}
// }

// int main(void) {
// 	int n, k;

// 	printf("Enter n: "); //n(0~n-1까지의 수) k(뽑을 수의 개수)를 사용자에게 입력받아
// 	scanf("%d", &n);
// 	printf("Enter k: ");
// 	scanf("%d", &k);

// 	int *bucket = (int*)malloc(sizeof(int)*k); //buckek 배열을 동적할당
// 	pick(n, bucket, k, k);

// 	free(bucket);
// }


#include <unistd.h>
int main(void)
{
    char arr[5];

    arr[4] = '/0';
    write(1, arr[0], 1);
}