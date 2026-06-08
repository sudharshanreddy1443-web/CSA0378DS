#include <stdio.h>
int main(){
	int n,i,key,a[100];
	printf("enter no of elements");
	scanf("%d",&n);
	for (i=0;i<n;i++)
	scanf("%d",&a[i]);
	scanf("%d",&key);
	
    for(i=0;i<n;i++) {
    	if (a[i]==key) {
    		printf("found the element");
    		return 0;
		}
	}
	printf("not found");
}
