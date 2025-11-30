#include <stdio.h>

/*
mantasha shaikh
uin: 251P065
roll no : 55
comps C
*/

struct student {
    int rollno;
    char name[20];
    float marks;
};

int main() {
    struct student s[5];
    int i, topperindex = 0;

    printf("Enter details of 5 students:\n");

    for (i = 0; i < 5; i++) {
        printf("\nStudent %d:\n", i + 1);

        printf("Enter name: ");
        scanf("%s", s[i].name);

        printf("Enter roll number: ");
        scanf("%d", &s[i].rollno);

        printf("Enter total marks: ");
        scanf("%f", &s[i].marks);

        if (s[i].marks > s[topperindex].marks) {
            topperindex = i;
        }
    }

    printf("\nTopper Details:\n");
    printf("Name: %s\n", s[topperindex].name);
    printf("Roll number: %d\n", s[topperindex].rollno);
    printf("Total marks: %.2f\n", s[topperindex].marks);

    return 0;
}
