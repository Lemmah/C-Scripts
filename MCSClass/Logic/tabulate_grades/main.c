#include <stdio.h>
#include <cs50.h>

/*
 * An improvement of how to tabulate subject marks
 * Now, using arrays and loops
 *
 */

int main()
{
    //Storing subject names and subject marks in parrallel arrays
    int subjectMarks[20];
    string subjectNames[20];

    printf("Welcome to merit grade calculator. Please enter the subject name and subject marks.\n");

    for(int nameCounter = 0;nameCounter <= 2; nameCounter++)
    {
        char subjName[20]; // get destroyed while loop exits: temporarily store the subject names
        printf("Subject %d name: ", nameCounter+1);
        scanf("%s",subjName);
        char *subjNameAdd = subjectNames[nameCounter];
        subjNameAdd = subjName;
       // subjectNames[nameCounter] = subjName;

        int markCounter = 0;
        while(markCounter < 1)
        {
            int mark; // get destroyed while loop exits: just to temporarily hold the marks
            printf("%s mark: ", subjName);
            scanf("%d", &mark);
            subjectMarks[nameCounter] = mark;
            markCounter++;
        }
    }

    printf("Total Subjects: %lu\n", sizeof(subjectNames)/(20*2)-1);
    printf("\n\tSubject\t\t\t\tMark\t\tGrade\n");
    for(int subjNum = sizeof(subjectMarks)/20 - 1, loopCount = 0; loopCount < subjNum; loopCount++)
    {
        if(subjectMarks[loopCount] > 50)
        {
            char grade[5] = "PASS";
            printf("\t%s\t\t:\t%d\t:\t%s\n",subjectNames[loopCount], subjectMarks[loopCount], grade);
        }
        else
        {
            char grade[5] = "FAIL";
            printf("\t%s\t\t:\t%d\t:\t%s\n",subjectNames[loopCount], subjectMarks[loopCount], grade);
        }
    }
}
