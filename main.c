//Author: Alex Martin arm6554@psu.edu
//Collaborator:
//Collaborator:
//Collaborator:
//Section: 
//Breakout: 

#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>

int main(void) {
  double grade = atof(readline("Enter your CMPSC 131 grade: "));
  if(grade>=93.0){
    printf("Your letter grade for CMPSC 131 is A.\n");
  }
  else if(grade>=90.0){
    printf("Your letter grade for CMPSC 131 is A-.\n");
  }
  else if(grade>=87.0){
    printf("Your letter grade for CMPSC 131 is B+.\n");
  }
  else if(grade>=83.0){
    printf("Your letter grade for CMPSC 131 is B.\n");
  }
  else if(grade>=80.0){
    printf("Your letter grade for CMPSC 131 is B-.\n");
  }
  else if(grade>=77.0){
    printf("Your letter grade for CMPSC 131 is C+.\n");
  }
  else if(grade>=70.0){
    printf("Your letter grade for CMPSC 131 is C.\n");
  }
  else if(grade>=60.0){
    printf("Your letter grade for CMPSC 131 is D.\n");
  }
  else if(grade<90.0){
    printf("Your letter grade for CMPSC 131 is F.\n");
  }
  return 0;
}