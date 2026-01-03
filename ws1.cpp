#include <stdio.h>
int main() {
    int n1,n2,n3,n4, win1,win2,lose1,lose2,max2;
    scanf("%d %d %d %d", &n1, &n2, &n3, &n4);
    win1 = (n1 > n2) ? n1 : n2;
    lose1 = (n1 < n2) ? n1 : n2;
    win2 = (n3 > n4) ? n3 : n4;
    lose2 = (n3 < n4) ? n3 : n4;
    max2 = (win1 > win2)? ((win2 > lose1)? win2 : lose1) : ((win1 > lose2)? win1 : lose2);
    printf("%d\n", max2);
    return 0;
}