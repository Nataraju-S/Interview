#include<iostream>
#include<cstdio>
#define fi for(i=0;i<n;i++)
#define fj for(j=0;j<n;j++)
#define fv for(v=0;v<n;v++)
using namespace std;
void calculateMode(int array[], int size)
{
    
        int counter = 1;
        int max = 0;
        int mode = array[0];
        for (int pass = 0; pass < size - 1; pass++)
        {
           if ( array[pass] == array[pass+1] )
           {
              counter++;
              if ( counter > max )
              {
                  max = counter;
                  mode = array[pass];
              }
           } else
              counter = 1; // reset counter.
        }
    cout << "The mode is: " << mode << endl;
}

int main(){
	int array[1000],n;
	int i;
	printf("enter\n");
	cin>>n;
	fi
	{
		scanf("%d",&array[i]);
	}
	calculateMode(array,n);
return 0;
}
