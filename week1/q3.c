#include <stdio.h>
int main() {
    int n, first, second;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++) scanf("%d", &arr[i]);
    first = second = -1e9;
    for(int i=0; i<n; i++) {
        if(arr[i] > first) {
            second = first;
            first = arr[i];
        } else if(arr[i] > second && arr[i] < first) {
            second = arr[i];
        }
    }
    printf("%d", second);
}
