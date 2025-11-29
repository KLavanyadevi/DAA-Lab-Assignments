#include<stdio.h>
void Sum(int n){
    int s = ((n*(n+1))/2)*((n*(n+1))/2);
    printf("Sum of the cube of the natural numbers is %d",s);
}
int main(){
    int s,n;
    printf("Enter a natural number: ");
    scanf("%d",&n);
    Sum(n);
    return 0;
}