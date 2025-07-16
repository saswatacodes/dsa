#include <stdio.h>

int main(){
        int max = 0;
        int n;
        printf("Enter no. of elements:\n");
        scanf("%d", &n);
        printf("Length is %d\n", n);
        int arr[100];
        for(int i=0; i<n; i++){
                scanf("%d", &arr[i]);
                if(arr[i] > max)
                        max = arr[i];
        }
        printf("Maximum element is %d\n", max);
        return 0;
}
