#include <stdio.h>

struct job
{
    int id;
    int profit;
    int deadline;
};

int main()
{
    int n,i,j;
    struct job temp;

    printf("Enter number of jobs: ");
    scanf("%d",&n);

    struct job jobs[n];

    for(i=0;i<n;i++)
    {
        printf("Enter profit and deadline for job %d: ",i+1);
        scanf("%d%d",&jobs[i].profit,&jobs[i].deadline);
        jobs[i].id=i+1;
    }

    // Sorting jobs by profit (descending)
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(jobs[i].profit < jobs[j].profit)
            {
                temp=jobs[i];
                jobs[i]=jobs[j];
                jobs[j]=temp;
            }
        }
    }

    int maxDeadline=0;

    for(i=0;i<n;i++)
    {
        if(jobs[i].deadline > maxDeadline)
        maxDeadline=jobs[i].deadline;
    }

    int slot[maxDeadline];

    for(i=0;i<maxDeadline;i++)
    slot[i]=-1;
    
    int totalProfit=0;

    for(i=0;i<n;i++)
    {
        for(j=jobs[i].deadline-1;j>=0;j--)
        {
            if(slot[j]==-1)
            {
                slot[j]=jobs[i].id;
                totalProfit+=jobs[i].profit;
                break;
            }
        }
    }

    printf("\nScheduled Jobs: ");

    for(i=0;i<maxDeadline;i++)
    {
        if(slot[i]!=-1)
        printf("Job %d ",slot[i]);
    }

    printf("\nMaximum Profit = %d",totalProfit);

    return 0;
}