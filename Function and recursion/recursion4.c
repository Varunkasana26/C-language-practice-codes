#include <stdio.h>
void greeting(int n)
{
    if (n == 0)  return;
    printf("%d\n", n);
    greeting(n - 1);
    return;
}
void greeting1(int n)
{
    if (n == 0)  return;
    greeting1(n - 1);
    printf("%d\n", n);
    return;
}
int main()
{
    int n;
    printf("enter a number :");
    scanf("%d", &n);
    greeting(n);
    greeting1(n);
    return 0;
}