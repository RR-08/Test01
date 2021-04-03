# include <stdio.h>
# include <string.h>

void sort(char [10][10],int choice);

int main()
{
    int i,j,choice;
    char array[10][10];
    printf("Enter names");

    for(i=0;i<10;i++)
    {
        printf("\nName#%d:",i+1);
        gets(array[i]);
    }
    for(j=0;j<10;j++)
        puts(array[j]);
    printf("\nPress 1.Ascending\n2.Descending");
    scanf("%d",&choice);

    sort(array,choice);

    return 0;
}
void sort(char array[10][10], int choice)
{

    int i,k;
    if(choice==1)
    {

    }
}
