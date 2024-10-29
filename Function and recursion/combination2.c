#include<stdio.h>
int main()
{
    int factorial(int x){
        int fact = 1;
        for(int i=1;i<=x;i++){
            fact=fact*i;
        }
        return fact;
    }
int n,r;
int ncr;
printf("enter n:");
scanf("%d",&n);
printf("enter r:");
scanf("%d",&r);
int nfact=factorial(n);//n!
int rfact=factorial(r);//r!
int nrfact=factorial(n-r);//(n-r)!
ncr = nfact/(rfact*nrfact);
printf("Final value is %d",ncr);

 return 0;
}