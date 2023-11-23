#include <stdio.h>
#include <math.h>
void bosluk(int sayi){
    while (1<=sayi){
        printf(" ");
        sayi--;
    }
    
}

int main(){
    int i,j,n;
    printf("Bir sayi giriniz:");
    scanf("%d", &n);

    for(i=1;i<=n;i++){
        bosluk(2*(n-i));
        for(j=1;j<=i;j++){
            printf("%d ",j);
        }
        for(j=j-2;1<=j;j--){
            printf("%d ",j);
        }
        printf("\n");
    }
    for (i=i-2;1<=i;i--){
        bosluk(2*(n-i));
        for(j=1;j<=i;j++){
            printf("%d ", j);
        }
        for(j=j-2;1<=j;j--){
            printf("%d ",j);
        }
        printf("\n");
    }
}