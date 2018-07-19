#include<stdio.h>

typedef struct
{
  float Weight;
  float Profit;
}ITEM;

void main()
{
   int num;
   float capacity,Ratio[20];
   ITEM item[20];

   printf("Enter num of items\n");
   scanf("%d",&num);

   printf("Capacity of Knapsack\n");
   scanf("%f",&capacity);

   get_Weight_Profit(item,num);
   get_pwRatio(item,Ratio,num);
   arrange(item,num);
   KNAPSACK(item,num,capacity);
}

get_Weight_Profit(ITEM item[],int num)
{
    int i;
    printf("Enter Weight & Profit of %d Items\n",num);
    for(i=0;i<num;i++)
      scanf("%f %f",&item[i].Weight, &item[i].Profit);
}

get_pwRatio(ITEM item[],float Ratio[],int num)
{
    int i;
    for(i=0;i<num;i++)
      Ratio[i] = (item[i].Profit)/(item[i].Weight);
}

arrange(ITEM item[],float Ratio[],int num)
{
    int i,j;
    float temp;

    for(i=0;i<num;i++)
    {
        for(j=i+1;j<num;j++)
        {
            if(Ratio[i]<Ratio[j])
            {
                temp = Ratio[i];
                Ratio[i] = Ratio[j];
                Ratio[j] = temp;

                temp = item[i].Weight;
                item[i].Weight = item[j].Weight;
                item[j].Weight = temp;

                temp = item[i].Profit;
                item[i].Profit = item[j].Profit;
                item[j].Profit = temp;
            }
        }
    }
}

void KNAPSACK(ITEM item[],int num,float capacity)
{
    float cap,solVector[20],maxProfit=0.0;
    int i;

    cap = capacity;

    for(i=0;i<num;i++)
      solVector[i] = 0.0;

    for(i=0;i<num;i++)
    {
        if(item[i].Weight>cap)
        break;
        else
        {
           solVector[i] = 1.0;
           cap = cap - item[i].Weight;
        }
    }
    if(i<=num)
      solVector[i] = cap/item[i].Weight;

    for(i=0;i<num;i++)
     maxProfit = maxProfit + (solVector[i]*item[i].Profit);

    printf("Solution Vector is\n");
    for(i=9;i<num;i++)
    printf("%f ",solVector[i]);

    printf("Maximum Profit is : %f",maxProfit);
}
