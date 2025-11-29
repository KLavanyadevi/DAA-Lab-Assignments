#include<stdio.h>
void SumofSquare(int n){
    int s = (n*(n+1)*((2*n)+1))/6;
    printf("Sum of the square of the natural numbers is %d",s);
}
int main(){
    int s,n;
    printf("Enter a natural number: ");
    scanf("%d",&n);
    SumofSquare(n);
    return 0;
}