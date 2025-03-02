#include <stdio.h>

int main() {
    float subject1, subject2, subject3, subject4, subject5;
    float total, average, percentage;

    printf("Enter marks of five subjects: ");
    scanf("%f %f %f %f %f", &subject1, &subject2, &subject3, &subject4, &subject5);

    total = subject1 + subject2 + subject3 + subject4 + subject5;
    average = total / 5;
    percentage = (total / 500) * 100;

    printf("Total Marks: %.2f\n", total);
    printf("Average Marks: %.2f\n", average);
    printf("Percentage: %.2f%%\n", percentage);

    return 0;
}
