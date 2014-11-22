#include <stdio.h>

void PrintOutArray(int *a,int n)
{
	int i;
	for(i = 0;i<n;i++)
		printf("%d ",a[i]);
	printf("\n");
}
void Swap(int *a,int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

void InsertSort1_1(int *a,int n)
{
	int i, j, k;  
    for (i = 1; i < n; i++)  
    {  
        //为a[i]在前面的a[0...i-1]有序区间中找一个合适的位置  
        for (j = i - 1; j >= 0; j--)  
            if (a[j] < a[i])  
                break;  
  
        //如找到了一个合适的位置  
        if (j != i - 1)  
        {  
            //将比a[i]大的数据向后移  
            int temp = a[i];  
            for (k = i - 1; k > j; k--)  
                a[k + 1] = a[k];  
            //将a[i]放到正确位置上  
            a[k + 1] = temp;  
		} 
		
		
	}
}

void InsertSort1_2(int *a , int n)   
{  
    for(int i=1;i<n;i++)//循环从第二个数组元素开始，因为arr[0]作为最初已排序部分   
    {  
        int temp=a[i];//temp标记为未排序第一个元素   
        int j=i-1;  
        while (j>=0 && a[j]>temp)/*将temp与已排序元素从大到小比较，寻找temp应插入的位置*/  
        {   
            a[j+1]=a[j];    
            j--;   
        }   
        a[j+1]=temp;   
    }   
}   

void InsertSort2(int *a, int n)  
{  
    int i, j;  
    for (i = 1; i < n; i++)  
        if (a[i] < a[i - 1])  
        {  
            int temp = a[i];  
            for (j = i - 1; j >= 0 && a[j] > temp; j--)  
                a[j + 1] = a[j];  
            a[j + 1] = temp;  
        }  
}  

void InsertSort3(int a[], int n)  
{  
    int i, j;  
    for (i = 1; i < n; i++)  
        for (j = i - 1; j >= 0 && a[j] > a[j + 1]; j--)  
            Swap(&a[j], &a[j + 1]);  
}  

int main()
{
	const int MAXN = 10;  
    int a[MAXN] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};  
    //InsertSort1_1(a, MAXN);
	//InsertSort1_2(a, MAXN); 
	//InsertSort2(a, MAXN); 
	InsertSort3(a, MAXN);
    PrintOutArray(a, MAXN);  
    return 0;  
	
}


