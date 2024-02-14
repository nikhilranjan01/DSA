#include<stdio.h>
int main()
{
    float profit[]={10,15,18,17,9,3,7};
    float weight[]={2,3,5,1,4,6,7};
    int n=sizeof(profit)/sizeof(profit[0]);
    float pw[n];
    printf("%d\n",n);
    for (int i=0 ; i<n ; i++)
    {
        pw[i]=(profit[i]/weight[i]);
        printf("%2f\t",pw[i]);
    }
    //sorting
    for (int i = 0; i < n; ++i){
      for (int j = i + 1; j < n; ++j){
         if (pw[i] < pw[j]){
            float a = pw[i], b = profit[i], c = weight[i];
            pw[i] = pw[j],profit[i] = profit[j],weight[i] = weight[j];
            pw[j] = a,profit[j] = b,weight[j] = c;  
         }
      }
   }
    printf("\n");
    for (int i=0 ; i<n ; i++)
    {
        // pw[i]=(profit[i]/weight[i]);
        printf("\n%2f\n",profit[i]);
        printf("%2f\n",weight[i]);
        printf("%2f\n",pw[i]);
    }
    float w=15,p=0;
    float x[n];
    for (int i=0;i<n;i++)
    {
        if (w>weight[i])
        {
            w=w-weight[i];
            p=p+profit[i];
            x[i]=1.0;
        }
        else
        {
            p=p+(w/weight[i])*profit[i];
            x[i]=(w/weight[i]);
            break;
        }
    }
    printf("\nprofit is %f\n",p);
    //printf("\n%f",w);
    for(int i=0;i<n;i++)
    {
        printf("%f\t",x[i]);
    }
}