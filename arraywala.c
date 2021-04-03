
#include <stdio.h>
#include <limits.h> 

void func(int arr[]);

int main()
{
    int arr[60], size, i;
    printf("Enter elements in the array: ");
    for(i=0; i<3; i++)
    {
        scanf("%d", &arr[i]);
    }

    func(arr);

    return 0;
}

void func(int arr[])
{

    int max1, max2,i;

    for(i=0; i<3; i++)
    {
        if(arr[i] > max1)
        {

            max2 = max1;
            max1 = arr[i];
        }
        else if(arr[i] > max2 && arr[i] < max1)
        {

            max2 = arr[i];
        }
    }
    printf("First largest = %d\n", &max1);
    printf("Second largest = %d", &max2);

}