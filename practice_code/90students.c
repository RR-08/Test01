#include<stdio.h>

float array[90],aver,sum=0;

int main(void){

    int i=0;

    for(;i<90;i++){
        printf("Enter the grade of student number %d:",(i+1));
        scanf("%f",&array[i]);
        while(array[i]>100){
            printf("the maximum grade is 100. enter correct score\n");
            scanf("%f",&array[i]);
        }
        sum+=array[i];
        
    }

    aver=sum/90;

    printf("the average of grades is %.2f",aver);

    int ab=0,bl=0;

    for(i=0;i<90;i++)
    {
        if(array[i]<=aver)
        bl++;
        else
        ab++;

    }

    printf("No of students below average are %d ",bl);
    printf("No students scored above average are %d",ab);


    return 0;
}
