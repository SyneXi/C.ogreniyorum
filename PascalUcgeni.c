#include <stdio.h>
#include <math.h>

int C(int x, int y){
    int top=1,bottom=1,a,sonuc;
    a=y;
    for(a;1<=a;a--){
        top=top*x;
        x--;
    }
    for(y;1<=y;y--){
        bottom=bottom*y;
    }
    sonuc=top/bottom;
    return sonuc;
}

void bosluk(int sayi){
    int x=sayi*3;
    for(x;1<=x;x--){
        printf(" ");
    }
}

int main(){
    int i,j,n;
    printf("Bir sayi giriniz: ");
    scanf("%d", &n);
    for(i=0;i<=n;i++){
        bosluk(n-i);
        for (j=0;j<=i;j++){
            printf("%-6d", C(i,j));
        }
        printf("\n");
    }
}
