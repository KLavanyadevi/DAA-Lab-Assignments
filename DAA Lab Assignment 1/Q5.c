#include <stdio.h>
int main(){
    int a[3][3];
    printf("Enter 9 values:\n");
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            scanf("%d", &a[i][j]);
        }
    }
    // Transpose in-place
    for(int i=0; i<3; i++){
        for(int j=i+1; j<3; j++){
            int temp = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = temp;
        }
    }
    printf("Transpose:\n");
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
