// write a c program To input and display five Element of an  Array.
// wacp to insetr and delete an element from an array.


// #include<stdio.h>
// int main(){
//     int arr[5];
//     printf("Insert Element in Array\n");
//     for(int i=0; i<5; i++){
//         scanf("%d",&arr[i]);
//     }

//     printf("Display of Array\n");
//     for(int i=0; i<5; i++){
//         printf("%d ", arr[i]);
        
//     }
// }

// #include <stdio.h>

// int main()
// {
//     int arr[100], n, pos, valu;

//     printf("Enter a number of element : ");
//     scanf("%d", &n);

//     printf("Enter a Element of Array : \n");
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &arr[i]);
//     }

//     printf("Enter a position of Element : ");
//     scanf("%d", &pos);

//     printf("Enter a Element : ");
//     scanf("%d", &valu);

//     for (int i = n; i > pos; i--)
//     {
//         arr[i] = arr[i - 1];
//     }
//     arr[pos - 1] = valu;
//     n++;

//     printf("After insert ");
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d ", arr[i]);
//     }
// }


#include<stdio.h>
int main(){
    int arr[100], n , pos, value;
    printf("Enter a number size of Array : ");
    scanf("%d",&n);

    printf("Enter element of Array\n");
    for(int i=0; i<n; i++){
        scanf("%d",arr[i]);
    }

    printf("Enter a position : ");
    scanf("%d",&pos);

    printf("Enter a value in Insert : ");
    scanf("%d",&value);

    for(int i=n; i>pos; i--){
        arr[i] = arr[i -1];
    }

    arr[pos -1] = value;
    n++;
    printf("After insert \n");
    for(int i=0; i<n; i++){
        printf("%d",arr[i]);
    }
}