#include<stdio.h>

#include<conio.h>

void activity_selection(int start[], int end[], int n)
{
    printf("selected activities are : ");
    printf("0 ");
    int j,i=0;
    for(j=1; j<n; j++)
        if(start[j]>= end[i])
         {
             printf("%d ",j);
             i=j;
         }

}

int main()
{
    int n,i;
    printf("enter the size of the list: ");
    scanf("%d",&n);
    int start[n],end[n];
    printf("Enter values : \n");

    for(i=0; i< n ;i++)
        {
        scanf("%d %d",&start[i],&end[i]);
        }

        activity_selection(start,end,n);

        return 0;

}
