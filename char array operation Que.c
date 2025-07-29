// 2} character array sorting for given condition

#include <stdio.h>
#include<string.h>

void sortasc(char arr[],int st,int end){
    for(int i=st;i<end;i++){
        for(int j=i+1;j<=end;j++){
            if(arr[i]>arr[j]){
            char temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;}
        }
    }
     }
      void sortdsc(char arr[],int st,int end){
    for(int i=st;i<end;i++){
        for(int j=i+1;j<=end;j++){
            if(arr[i]<arr[j]){
            char temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;}
        }
    }
    }
int main() {
    int n,m;
    printf("enter the size of array greater than 6:");
    scanf("%d",&n);
   
   char arr[n];
    for(int i=0;i<n;i++){
        scanf(" %c",&arr[i]);
}

printf("emter value of m for sort first m asc and last m dsc:");
scanf("%d",&m);

    sortasc(arr,0,m-1);
    sortdsc(arr,n-m,n-1);
    printf("first condition output is:");
    for(int i=0;i<n;i++){
        printf(" %c",arr[i]);}
        
        int mid=n/2;
        if(n%2==0){
        sortdsc(arr,0,mid-1 );
        sortasc(arr,mid,n-1);
        }
        else{
         sortdsc(arr,0,mid-1 );
        sortasc(arr,mid+1,n-1);   
        }
        
        printf("\nsecond condition output is:");
    for(int i=0;i<n;i++){
        printf(" %c",arr[i]);} 
    
return 0;
}

OUTPUT:
enter the size of array greater than 6:9
x c v b d g h d a 
emter value of m for sort first m asc and last m dsc:3
first condition output is: c v x b d g h d a
second condition output is: x v c b d a d g h
