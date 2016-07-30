#include <bits/stdc++.h>
using namespace std;
char a[100000];
int count1,count2,count3;
int main()
{
	int n ;//= 100;
	//scanf("%d",&n);
	//while(n--){
	scanf("%s",a);
	if (strlen(a)==1)
	{
		printf("false\n");
		exit(0);
	}
	//printf("%s %d %d %d\n", a,count1,count2,count3);
	if (a[0]==']' || a[0]==')' || a[0]=='}'){
			printf("false\n");
			exit(0);
		}
		if (a[0]=='{')
			count1++;
		else if(a[0]=='(')
			 count3++;
		else if(a[0]=='[')
			count2++;	
		for (int i = 1; i < strlen(a); ++i)
		{
			printf("count1 = %d  count2= %d count3= %d\n",count1,count2,count3);
			if (a[i]=='['){
					count2++;
				}else if (a[i]=='{')
				{
					count1++;
				}else if(a[i]=='('){
					count3++;
				}
				else if (a[i]==')' && count3>0)
				{
					count3--;
				}else if (a[i]==')' && count3==0)
				{
					printf("false\n");
					break;
				}else if (a[i]==']' && count2>0)
				{
					count2--;
				}else if (a[i]==']' && count2==0)
				{
					printf("false\n");
					break;
				}else if(a[i]=='}' && count1>0){
					count1--;
				}else if(a[i]=='}' && count1==0){
					printf("false\n");
					break;
				}
			}
			if (count1==0 &&count3==0 &&count2==0)
			{
				printf("true\n");
			}else{
				printf("false\n");
			}

	return 0;
}