#include<stdio.h>
void Print(int *num, int n)
{
    int i;
    for(i = 0; i < n; i++)
        printf("%d ", num[i]);
    puts("\n");
    return;
}
void Bubble(int *num, int n)
{
    long int i, j;
    for(i = 0; i < n; i++)
    {
        for(j = 0; i + j < n - 1; j++)
        {
            if(num[j] > num[j + 1])
            {
                int temp = num[j];
                num[j] = num[j + 1];
                num[j + 1] = temp;
            }
            Print(num, n);
        }
    }
    return;
}
int main()
{
    long int num[999];
    long int i=-1;
    long int s;
    printf("请输入排序数列（以-1为结尾）：");
    while(1) {
        scanf("%u",&s);
        if(s<=-1) break;
        i=i+1;
        num[i]=s;
    }
    Bubble(num, i);
    return 0;
}
