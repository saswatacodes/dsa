#include <stdio.h>
int main() {
    int r, c, count = 0;
    scanf("%d%d", &r, &c);
    int a[r][c];
    for(int i=0; i<r; i++) for(int j=0; j<c; j++) {
        scanf("%d", &a[i][j]);
        if(a[i][j] == 0) count++;
    }
    printf(count > (r*c)/2 ? "Yes" : "No");
}
