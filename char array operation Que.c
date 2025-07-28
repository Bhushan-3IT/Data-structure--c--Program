#include <stdio.h>
int main() {
    int n;
    printf("enter size of charecter array:");
    scanf("%d",&n);
    char arr[n];
    
    for(int i=0;i<n;i++){
        scanf(" %c",&arr[i]);
    }
    
    //for asc
    int st1=0,end1=2;
    for(int i=st1;i<end1;i++){
        for(int j=i+1;j<=end1;j++){
            if(arr[i]>arr[j]){
            char temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
           }
        }
    }
    
    // for des
    int st2=n-3,end2=n-1;
    for(int i=st2;i<end2;i++){
        for(int j=i+1;j<=end2;j++){
            if(arr[i]<arr[j]){
            char temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
                
            }
        }
    }
    
    for(int i=0;i<n;i++){
        printf(" %c",arr[i]);
    } 
     return 0;
}

OUTPUT:
enter size of charecter array:9
b c a x y x u w z
 a b c x y x z w u
