// #include<stdio.h>
// int main(){
//     int arr1[3][5] = {
//         {1 , 2 ,3 ,4 ,5},
//         {6 , 7, 8, 9, 10},
//         {11 , 12, 13, 14, 15}
//     };
//     for(int i=0; i<3; i++){
//         for(int j=0; j<5; j++){
//             printf("%d ",arr1[i][j]);
//         }
//         printf("\n");
//     }
// }

#include<stdio.h>
int main(){
    int n , m;
    printf("Enter a Row and Comlum : ");
    scanf("%d%d",&n , &m);
    int arr[n][m];

    printf("Enter a Element of Array\n");
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            scanf("%d",&arr[i][j]);
        }
        printf("\n");
    }

    printf("\nDisplay of Array \n");
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
}

