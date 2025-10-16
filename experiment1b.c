#include <stdio.h>

int main() {

    float phy, chem, math, avg;

    // taking input from user
    printf("Enter Physics marks: ");
    scanf("%f", &phy);

    printf("Enter Chemistry marks: ");
    scanf("%f", &chem);

    printf("Enter Mathematics marks: ");
    scanf("%f", &math);

    // calculating average
    avg = (phy + chem + math) / 3;

    // display average
    printf("Average of PCM = %f\n", avg);

    // checking eligibility using conditional operator
    (avg >= 50) ? printf("Student is eligible for admission\n")
                : printf("Student is not eligible for admission\n");

    return 0;
}
