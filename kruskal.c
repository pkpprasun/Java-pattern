#include <stdio.h>
#include<conio.h>
int cost[20][20],parent[20],min,mincost=0;
int a,b,i,j,n,ne=1,u,v;
int find(int);
int uni(int,int);
void main()
{
    printf("\n enter the no. of vertices:");
    scanf("%d",&n);
    printf("\n enter the cost adjacency matrix:\n ");
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            scanf("%d",&cost[i][j]);
            if(cost[i][j]==0)
            cost[i][j]=999;
        }
    }
printf("the edges of minimum cost of spanning tree are\n");
while(ne<n)
{
    for(i=1,min=999;i<=n;i++){
        for(j=1;j<=n;j++){
            if(cost[i][j]<min){
                min=cost[i][j];
                a=u=i;
                b=v=j;
            }
        }
    }
    u=find(u);
    v=find(v);
    if(uni(u,v))
    {
        printf("\n %d edge(%d,%d)=%d\n",ne++,a,b,min);
        mincost+=min;
        
    }
    cost[a][b]=cost[b][a]=999;
}
printf("\n The mincost is:%d\n",mincost);
getch();
}
int find(int i){
    while(parent[i])
    {
        i=parent[i];
    }
    return i;
}
int uni(int i,int j){
    if(i!=j){
        parent[j]=i;
        return 1;
    }
    else  
       return 0;
}