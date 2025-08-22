#include <stdio.h>

int main()
{
    int a[] = {1,2,3,4,5,6,7,8,9,10};
    int (*p)[10] = &a;//数组当中的10不可以省略
    int sz = sizeof(a) / sizeof(a[0]);
    int i = 0;
    for(i = 0; i < sz; i++)
    {
        printf("%d ",*(*p + i)); // 通过数组指针访问数组元素
    }
    //实现了

}