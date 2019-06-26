#include<stdlib.h>
#include<stdio.h>
int path(int maze[3][3]);
int main()
{
int i,j,maze[3][3], result=0;
for(int i=0;i<3;i++)
{
for(int j=0;j<3;j++)
scanf ("%d", &maze[i][j]);
}
printf("input\n");
for(int i=0;i<3;i++)
{
for(int j=0;j<3;j++)
{
printf("%d ",maze[i][j]);
}
printf("\n");
}
printf("%d", path(maze));
return 0;
}
int path(int m[3][3])
{
    static int i;
     for( i=0;i<3;i++){
    for(int j=0;j<3;j++){
    if((m[i][j]==1))
         path(m[i][j]);
    if(m[i][j]==0)
        return 0;
    if(m[i][j]==9)
        return 1;
}
}
}
