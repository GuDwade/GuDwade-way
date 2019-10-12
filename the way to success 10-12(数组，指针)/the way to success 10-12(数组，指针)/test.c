#define _CRT_SECURE_NO_WARNINGS 1
void bubble_sort(int arr[], int sz)
{
	//趟数
	int i = 0;
	
	for(i=0; i<sz-1; i++)
	{
		//处理一趟排序的比较
		int flag = 1;//
		int j = 0;
		for(j=0; j<sz-i-1;j++)
		{
			if(arr[j] > arr[j+1])
			{
				int tmp  = 0;
				flag = 0;
				tmp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = tmp;
			}
		}
		if(flag == 1)
		{
			break;
		}
	}
}

void print(int arr[], int sz)//int *arr
{
	int i = 0;
	for(i=0; i<sz; i++)
	{
		printf("%d ", arr[i]);
	}
}

int main()
{
	int arr[] = {9,8,7,6,5,4,3,2,1,0};
	//冒泡排序-函数
	int sz = sizeof(arr)/sizeof(arr[0]);
	bubble_sort(arr, sz);
	print(arr, sz);
	return 0;
}
