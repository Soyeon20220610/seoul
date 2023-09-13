int arr(int size, char *input)
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
		arr[0][r] = *input[1] - '0';
		input[1] = input[1] + 2;
		r++;
	}
	r = 1;
	while (r <= 4)
	{
		arr[5][r] = *input[1] - '0';
		input[1] = input[1] + 2;
		r++;
	}
	r = 1;
	while (r <= 4)
	{
		arr[r][0] = *input[1] - '0';
		input[1] = input[1] + 2;
		r++;
	}
	r = 1;
	while (r <= 4)
	{
		arr[r][5] = *input[1] - '0';
		input[1] = input[1] + 2;
		r++;
	}
}

int rush(int arr)
{
    while ()
}