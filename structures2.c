#include <stdio.h>   //Access array structure members

int k = 4;

struct Car  
{
    char brand [25];
    char model [25];
    int year;
    
}c[3];


int main(){
    int num;

    printf("Enter the number of cars -:");
    scanf("%d", &num);
    

    for(int i=1;i<=num;i++){
        
        printf("\nEnter the brand name of your car %d-:", i);
        scanf("%s",&c[i].brand);
        printf("\nEnter the model of your car %d     -:", i);
        scanf("%s",&c[i].model);
        printf("\nEnter the build year of your car %d-:", i);
        scanf("%d",&c[i].year);

            
        
            printf("\nThe brand is %s", c[i].brand);
            printf("\nThe model is %s",c[i].model);
            printf("\nThe build year is %d",c[i].year);

     }

    
     


    return 0;
}