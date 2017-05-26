#include <stdio.h>

/*
 * This program accepts marks of five subjects and
 * calculates the total, average and percentage
 */

int main() // the main function
{
    int marks; 
    int total = 0; 
    int range; 
    int grange; 
    int av_grange; 
    int average; 
    int percentage; 
    int count_subj;

    printf("\nThis program gets the total, average and percentage of subject marks of five subjects.\n\n");
    
    /* for loop to get subject marks */
    for(count_subj = 1; count_subj <= 5; count_subj++){
        printf("Enter the mark for subject %d: ",count_subj);
        scanf("%d", &marks);
        printf("Out of?: ");
        scanf("%d", &range);
        total += marks; 
        grange += range;
        
    }

    average = total/5;
    av_grange = grange/5;
    percentage = (average*100)/av_grange;

    printf("\nTotal marks: %d/%d\nAverage: %d/%d\nPercentage: %d%%\n", total,grange,average,av_grange,percentage);

}
