#include<stdio.h>
int main(){
    int a[100], b[100] ,c[200];
    int n1 ,n2;
    printf("Enter of num first Array size :");
    scanf("%d",&n1);

    printf("\nEnter First Array Element\n");
    for(int i=0; i<n1; i++){
        scanf("%d",&a[i]);
    }

    printf("Enter of num Second Array size :");
    scanf("%d",&n2);

    printf("\nEnter Second Array Element\n");
    for(int i=0; i<n2; i++){
        scanf("%d",&b[i]);
    }

    for(int i=0; i<n1; i++){
        c[i] = a[i];
    }

    for(int i=0; i<n2; i++){
        c[n1 + i] = b[i];
    }

    printf("\nAfter Marging Array\n");
    for(int i=0; i<n1+n2; i++){
        printf("%d ",c[i]);
    }
}
