#include <stdio.h>

int main()
{
    int arr[100], n, pos, valu;

    printf("Enter a number of element : ");
    scanf("%d", &n);

    printf("Enter a Element of Array : \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter a position of Element : ");
    scanf("%d", &pos);

    printf("Enter a Element : ");
    scanf("%d", &valu);

    for (int i = n; i > pos; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[pos - 1] = valu;
    n++;

    printf("After insert ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}