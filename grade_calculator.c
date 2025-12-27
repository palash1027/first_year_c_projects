#include<stdio.h>
int main(){
    int m1,m2,m3,m4,m5;
    printf("enter marks of your 5 subjects  : ");
    scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
    int percentage = ((m1+m2+m3+m4+m5)/500)*100;
    if(percentage>=90 && percentage<100){
        printf("your grade is A");
    }
    else if(percentage>=80 && percentage<90){
        printf("your grade is B");
    }
    else if(percentage>=60 && percentage<80){
        printf("your grade is C");
    }
    else{
        printf("your grade is D");
    }
    return 0;
}
