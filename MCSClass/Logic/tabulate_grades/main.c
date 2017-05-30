#include <stdio.h>
#include <cs50.h>
#include <string.h>

/* An improvement of how to tabulate subject marks
 * Now, using arrays and loops
 */

int main()
{
    //Storing subject names and subject marks in parrallel arrays
    int subjectMarks[20];
    string subjectNames[20];

    printf("Welcome to merit grade calculator. Please enter the subject name and subject marks.\n");

    // Prompting for subjects thrice
    for(int nameCounter = 0;nameCounter <= 2; nameCounter++)
    {
        char subjName[20]; // get destroyed while loop exits: temporarily store the subject names
        printf("Subject %d name: ", nameCounter+1);
        scanf("%s",subjName);
        subjectNames[nameCounter] = subjName;

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
    
    // Printing the Subjects in table format while also calculating the grades.
    printf("Total Subjects: %lu\n", sizeof(subjectNames)/(20*2)-1);
    printf("\n\tSubject\t\t\t\tMark\t\tGrade\n");
    for(int subjNum = sizeof(subjectMarks)/20 - 1, loopCount = 0; loopCount < subjNum; loopCount++)
    {
        // Initializing grade with U for 'ungraded' so as to catch bugs
        char grade[2] = "U";
        // Using the ternary operator to alter the grade if not failed
        int marks = subjectMarks[loopCount];
        (marks > 80) ? strcpy(grade, "A") :
        (marks > 70) ? strcpy(grade, "B") :
        (marks > 60) ? strcpy(grade, "C") :
        (marks > 50) ? strcpy(grade, "D") :
        (marks > 40) ? strcpy(grade, "E") :
        strcpy(grade, "F") ;

        // Printing the subjects, marks and grades in the respective order
        printf("\t%s\t\t:\t%d\t:\t%s\n",subjectNames[loopCount], subjectMarks[loopCount], grade);
    }
}
