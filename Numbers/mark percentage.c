#include <stdio.h>
int main()
{
   int phy,che,maths,bio,com,sum;
   float avg;
   scanf("%d\n%d\n%d\n%d\n%d",&phy,&che,&maths,&bio,&com);
   sum=phy+com+che+bio+maths;
   avg=(float)sum/5;
   printf("Percentage = %.2f \n",avg);
   if(avg>=90){
    printf("Grade A");
   }
   else if(avg>=80&&avg<90){
    printf("Grade B");
   }
   else if(avg>=70&&avg<80){
    printf("Grade C");
   }
   else if(avg>=60&&avg<70){
    printf("Grade D");
   }
   else if(avg>=40&&avg<60){
   printf("Grade E");

   }
   else if(avg<40){
        printf("Grade F");
   }


}
