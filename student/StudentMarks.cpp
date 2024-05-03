#include <stdio.h>

int main() {
	
    int ArMrk, MMrk, EnMrk, TotalMarks, FinalMark;
    // Assuming a maximum name length of 10 characters
	char StudentName[10]; 
    
    // student name
    printf("Enter student name: ");
    scanf("%s", StudentName);
    
    // student marks
    printf("Enter Arabic Mark: ");
    scanf("%d", &ArMrk);
    printf("Enter Math Mark: ");
    scanf("%d", &MMrk);
    printf("Enter English Mark: ");
    scanf("%d", &EnMrk);

    // The final mark
    TotalMarks = ArMrk + MMrk + EnMrk;
    FinalMark = TotalMarks / 3;
    
    // print the name and the final mark
    printf("Student Name: %s\n", StudentName);
    printf("Average = %d\n", FinalMark);

	
	
}
