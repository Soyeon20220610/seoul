#include <stdio.h>
#include <stdlib.h> 

int	arr(char )

int main(int argc, char **argv) 
{
    int size;
	int	i;
	int	j;
	int	r;


	i = 0;
	j = 0;
	r = 0;	
    size = 6;
    //size만큼 배열의 세로 동적할당
    int** arr = (int**)malloc(sizeof(int*) * size);
    
    //size만큼 배열의 가로 동적할당 
    while (i < size) 
	{ 
        arr[i] = (int*)malloc(sizeof(int) * size);
		i++;
    }

	r = 1;
	while (r <= 4)
	{
		arr[0][r] = *argv[1] - '0';
		argv[1] = argv[1] + 2;
		r++;
	}
	r = 1;
	while (r <= 4)
	{
		arr[5][r] = *argv[1] - '0';
		argv[1] = argv[1] + 2;
		r++;
	}
	r = 1;
	while (r <= 4)
	{
		arr[r][0] = *argv[1] - '0';
		argv[1] = argv[1] + 2;
		r++;
	}
	r = 1;
	while (r <= 4)
	{
		arr[r][5] = *argv[1] - '0';
		argv[1] = argv[1] + 2;
		r++;
	}


	while (i <= 4)
	{
		while (j <=4)
		{
			arr[i][j] =
		}
	}


    //배열의 값 출력
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("arr[%d][%d] : %d   ", i, j, arr[i][j]);
        }
        printf("\n");
	}

    //메모리 해제
    for (int i = 0; i < size; i++) {
        free(arr[i]);
    }
    free(arr);

    return 0;
}


/*

	arr[0][1] = *argv[1] - 48;
	argv[1] = argv[1] + 2;
	arr[0][2] = *argv[1] - 48;
	argv[1] = argv[1] + 2;
	arr[0][3] = *argv[1] - 48;
	argv[1] = argv[1] + 2;
	arr[0][4] = *argv[1] - 48;
	argv[1] = argv[1] + 2;

	arr[5][1] = *argv[1] - 48;
	argv[1] = argv[1] + 2;
	arr[5][2] = *argv[1] - 48;
	argv[1] = argv[1] + 2;
	arr[5][3] = *argv[1] - 48;
	argv[1] = argv[1] + 2;
	arr[5][4] = *argv[1] - 48;
	argv[1] = argv[1] + 2;

	arr[1][0] = *argv[1] - 48;
	argv[1] = argv[1] + 2;
	arr[2][0] = *argv[1] - 48;
	argv[1] = argv[1] + 2;
	arr[3][0] = *argv[1] - 48;
	argv[1] = argv[1] + 2;
	arr[4][0] = *argv[1] - 48;
	argv[1] = argv[1] + 2;

	arr[1][5] = *argv[1] - 48;
	argv[1] = argv[1] + 2;
	arr[2][5] = *argv[1] - 48;
	argv[1] = argv[1] + 2;
	arr[3][5] = *argv[1] - 48;
	argv[1] = argv[1] + 2;
	arr[4][5] = *argv[1] - 48;
	argv[1] = argv[1] + 2;


	

*/


