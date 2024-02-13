// WAP to sort array element in decreasing order using quick sort algorithm in c
#include<stdio.h>
void swap(int*a, int*b) {
    int t= *a;
    *a = *b;
    *b = t;
}

int divided (int arr [],int low, int high){
    int pivotelement = arr[high];
    int i =(low -1);

     for (int j = low; j<=high -1; j++){
        if (arr[j]>pivotelement) {
            i++;
            swap(&arr[i],&arr[j]);
        }
    }

    swap(&arr[i+1],&arr[high]);
    return(i+1);
}

void quickSort(int arr [],int low, int high){
    if (low < high) {
        int pi = divided(arr,low,high);
        quickSort(arr,low,pi -1);
        quickSort(arr,pi + 1,high);
    }
}

int main (){
    int arr [100],n,i;
    printf("input the num for element");
    scanf("%d" ,&n);
    printf("enter the element");
    for (i = 0; i <n; i++){
        scanf("%d",&arr[i]);  
    }

quickSort(arr,0,n-1);
printf("shorted arry");
  for (i = 0; i < n; i++) { 
    printf("%d", arr[i]);
    
}
printf("/n");
}