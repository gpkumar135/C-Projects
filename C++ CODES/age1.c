// Online C compiler to run C program online
#include <stdio.h>


    // Write C code her
    struct date{
        int dd;
        int mm;
        int yy;
    } ; 
    
    
  void main(){
        
    
        struct date d1;
        struct date d2;
        struct date age;
        printf("enter the present date");
        scanf("%d%d%d",&d1.dd,&d1.mm,&d1.yy);
        printf("enter date of birth");
        scanf("%d%d%d",&d2.dd,&d2.mm,&d2.yy);
        if(d1.dd<d2.dd)
         {
             age.dd=30+d1.dd-d2.dd;
             d1.mm--;
         }
        else
         {
             age.dd=d1.dd-d2.dd;
         }
         printf("%d days\n",age.dd);
        if(d1.mm<d2.mm)
         {
             age.mm=12+d1.mm-d2.mm;
             d1.yy--;
         }
        else
         {
             age.mm=d1.mm-d2.mm;
         }
         printf("%d months\n",age.mm);
         age.yy=d1.yy-d2.yy;
         printf("%d years\n",age.yy);
        
    
    }
