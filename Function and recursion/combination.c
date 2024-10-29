#include<stdio.h>
int main()
{
int n,r;
int ncr;
int nfact=1;//n!
int rfact=1;//r!
int nrfact=1;//(n-r)!
printf("enter n:");
scanf("%d",&n);
printf("enter r:");
scanf("%d",&r);
for(int i=1;i<=n;i++){
    nfact=nfact*i;
}
for(int i=1;i<=r;i++){
    rfact=rfact*i;
}
for(int i=1;i<=(n-r);i++){
    nrfact=nrfact*i;
}
ncr = nfact/(rfact*nrfact);
printf("Final value is %d",ncr);
 return 0;
}