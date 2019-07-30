#include <stdio.h>

#define STUDENTS 5
#define QUIZZES 5

int main(void)
{
    int student, quiz; 
    float quiz_total = 0.0f, 
          current_quiz, 
          lowest_score, highest_score, 
          student_grades[STUDENTS][QUIZZES];

    for (student = 0; student < STUDENTS; student++) {
        printf("Enter quiz grades for student %d: ", student + 1);
        for (quiz = 0; quiz < QUIZZES; quiz++) {
            scanf("%f", &student_grades[student][quiz]);
        }
    }

    for (student = 0; student < STUDENTS; student++) {
        printf("Student %d: \n", student + 1);
        quiz_total = 0.0f;

        for (quiz = 0; quiz < QUIZZES; quiz++) {
            quiz_total += student_grades[student][quiz];
        }
        printf("\ttotal score:   %12f\n", quiz_total);
        printf("\taverage score: %12f\n\n", quiz_total / QUIZZES);
    }
    printf("\n");

    for (quiz = 0; quiz < QUIZZES; quiz++) {
        printf("Quiz %d: \n", quiz + 1);

        quiz_total = 0.0f;
        lowest_score = student_grades[0][quiz];
        highest_score = lowest_score;

        for (student = 0; student < STUDENTS; student++) {
            current_quiz = student_grades[student][quiz];
            quiz_total += current_quiz;
            
            if (current_quiz < lowest_score) {
                lowest_score = current_quiz;
            }

            if (current_quiz > highest_score) {
                highest_score = current_quiz;
            }

        }
        printf("\taverage score:%12f\n", quiz_total / QUIZZES);
        printf("\tlowest score: %12f\n", lowest_score);
        printf("\thighest score:%12f\n", highest_score);
    }

    return 0;
}
