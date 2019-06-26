#include<stdio.h>
int main(){
int number_walls,index;
scanf("%d",&number_walls);

int walls_height[number_walls];
for(index=0;index<number_walls;index++)
    scanf("%d",&walls_height[index]);

int height_jump,slips_away;
scanf("%d %d",&height_jump,&slips_away);

int total_jumps=0;
for(index=0;index<number_walls;index++){
    if(walls_height[index]<=height_jump){
      total_jumps++;
//        continue;
    }
    else{
        int height=walls_height[index];
        while(height>height_jump){
            total_jumps++;
            height=height-(height_jump-slips_away);
        }
        total_jumps++;
}
}


printf("%d",total_jumps);

}
