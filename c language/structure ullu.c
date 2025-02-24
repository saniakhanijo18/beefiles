#include <stdio.h>
struct student{
    char name[10];
    int marks;
};
int main(){
    int n,i;
    printf("enter number of student ");
    scanf("%d",&n);
    struct student j[n];
    printf("enter name and marks of student \n: ");
    for(i=0;i<=n;i++){
        scanf("%s %d",j[i].name,&j[i].marks);
    }
    for(i=0;i<=n;i++){
        printf("%s %d",j[i].name,j[i].marks);
    
    
}
for(i=0;i<n;i++){
if(j[i].marks<35){
    printf("%s\n%d",j[i].name , j[i].marks);
}
}
}
