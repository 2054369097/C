#include <stdio.h>
#include <string.h>
int main()
{
	int i;
	char a[100000]; 
	printf("加密内容:");
	scanf("%s",&a);
	for(i=0;i<strlen(a);i++)
	{
		a[i]=a[i]+4;
	}
	printf("结果是:");
	printf("%s",a);
	return 0;
}
