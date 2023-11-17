#include <stdio.h>

int main() {
  char name[50];
  int rollNumber, numSubjects;
  int subjectScores[100];
  float averageScore;
  char passFail;

  // Input student information


  printf("Enter student name: ");
  scanf("%s", name);

  printf("Enter roll number: ");
  scanf("%d", &rollNumber);

  printf("Enter number of subjects: ");
  scanf("%d", &numSubjects);

  // Input subject scores


  for (int i = 0; i < numSubjects; i++) {
    printf("Enter score for subject %d: ", i + 1);
    scanf("%d", &subjectScores[i]);
  }

  // Calculate average score


  averageScore = 0;
  for (int i = 0; i < numSubjects; i++) {
    averageScore += subjectScores[i];
  }
  averageScore /= numSubjects;

  // Determine pass/fail status


  if (averageScore >= 60) {
    passFail = 'P';
  } else {
    passFail = 'F';
  }

  // Generate report


  printf("\nStudent Report\n");
  printf("Name: %s\n", name);
  printf("Roll Number: %d\n", rollNumber);
  printf("\nSubject Scores:\n");
  for (int i = 0; i < numSubjects; i++) {
    printf("Subject %d: %d\n", i + 1, subjectScores[i]);
  }
  printf("\nAverage Score: %.2f\n", averageScore);
  printf("Pass/Fail: %c\n", passFail);

  return 0;
}
