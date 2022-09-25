#include <stdio.h>
/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max(int a,int b){
    if(a>b){
        return a;
    }else{
        return b;
    }
}
int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int x=max(a,b);
    int y=max(c,d);
    int ans=max(x,y);
    printf("%d", ans);
    
    return 0;
}
