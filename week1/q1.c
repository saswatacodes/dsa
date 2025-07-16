#include <stdio.h>
#include <stdlib.h>

int main(){
        int n;
        printf("Enter no. of elements:\n");
        scanf("%d", &n);
        int m=n+1;
        int arr[100];
        printf("Enter elements\n");
        for(int i=0; i<n; i++){
                scanf("%d", &arr[i]);
        }
        int e;
        printf("Enter element to be inserted\n");
        scanf("%d", &e);
        arr[m-1] = e;
        printf("Array after insertion is:\n");
        for(int i=0; i<m; i++){
                printf("%d\n", arr[i]);
        }
        return 0;
}

