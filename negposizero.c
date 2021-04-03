 #include <conio.h>
 #include<stdio.h>
 
 
int main()
{
    int a[1000],i,n,c=0,p=0,z=0;
   
    printf("Enter size of the array : ");
    scanf("%d", &n);
 
    printf("Enter elements in array : ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
 
     for(i=0; i<n; i++)
    {
         
        if(a[i] < 0)
         c++;
        else if (a[i]>0)
        p++;
        else
        z++;
    }

    
         printf("  count  of negative numbers  in array: %d",c);
         printf("  count  of positive numbers  in array: %d",p);
         printf("  count  of zero numbers  in array: %d",z);
         
 
    return 0;
}