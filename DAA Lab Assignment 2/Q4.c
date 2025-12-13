#include <stdio.h>

void bucketSort(int a[], int n){
    int bucket[100] = {0};

    for(int i=0; i<n; i++){
        bucket[a[i]]++;
    }

    int k = 0;
    for(int i=0; i<100; i++){
        while(bucket[i]--){
            a[k++] = i;
        }
    }
}

int main(){
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int a[n];
    printf("Enter %d elements (0-99): ", n);
    for(int i=0; i<n; i++) scanf("%d", &a[i]);

    bucketSort(a, n);

    printf("Sorted array: ");
    for(int i=0; i<n; i++) printf("%d ", a[i]);

    return 0;
}
