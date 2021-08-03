#include<stdio.h>
int X[10],G[10][10];
void next_color(int k){
    int i;
    X[k]=1;
    for(i=0;i<k;i++){
      if(G[i][k]!=0&&X[k]==X[i])
         X[k]=X[i]+1;
   }
};

int main()
{
    int n,e,i,j,k,l;
    printf("Enter number of vertices:");
    scanf("%d",&n);
    printf("Enter number of edges:");
    scanf("%d",&e);
    printf("enter the edges which are connected(for eg:if 1 and 2 are connented enter 1 2)\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            G[i][j]=0;
        }
    }
    for(int i=0;i<e;i++){
        scanf("%d %d",&k,&l);
        G[k][l]=1;
        G[l][k]=1;
    }
    for(int i=0;i<n;i++){
      next_color(i);
    }
    printf("The color matrix:\n");
    for(int i=0;i<n;i++){
        printf("vertex[%d]:%d \n",i+1,X[i]);
    }
return 0;
}