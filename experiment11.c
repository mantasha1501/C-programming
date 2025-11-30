#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*mantasha shaikh
uin:251P065
roll no:55
comps*/
struct Employee { int id; char name[50]; float salary; };

#ifdef _WIN32
    #define FILE_PATH "C:\\Users\\Public\\Documents\\employee.dat"
#else
    #define FILE_PATH "/tmp/employee.dat"
#endif

void add() {
    struct Employee e;
    FILE *f = fopen(FILE_PATH, "ab");
    if(!f){ printf("Error opening file!\n"); return; }

    printf("Enter ID: ");
    while(scanf("%d", &e.id) != 1) { printf("Invalid. Enter a number: "); while(getchar() != '\n'); }

    printf("Enter Name: ");
    while(getchar() != '\n'); 
    fgets(e.name, 50, stdin); e.name[strcspn(e.name,"\n")] = 0;

    printf("Enter Salary: ");
    while(scanf("%f", &e.salary) != 1) { printf("Invalid. Enter a number: "); while(getchar() != '\n'); }

    fwrite(&e, sizeof(e), 1, f);
    fclose(f);
    printf("Employee added successfully.\n");
}

void display() {
    struct Employee e;
    FILE *f = fopen(FILE_PATH, "rb");
    if(!f){ printf("No records found.\n"); return; }

    printf("\n--- Employee Records ---\n");
    while(fread(&e, sizeof(e), 1, f)) printf("ID: %d\nName: %s\nSalary: %.2f\n", e.id, e.name, e.salary);
    fclose(f);
}

void search() {
    struct Employee e; int id, found=0;
    FILE *f = fopen(FILE_PATH, "rb");
    if(!f){ printf("No records found.\n"); return; }

    printf("Enter ID to search: ");
    while(scanf("%d", &id) != 1) { printf("Invalid. Enter a number: "); while(getchar() != '\n'); }

    while(fread(&e, sizeof(e), 1, f)) {
        if(e.id == id) { printf("ID: %d\nName: %s\nSalary: %.2f\n", e.id, e.name, e.salary); found=1; break; }
    }
    if(!found) printf("Employee not found.\n");
    fclose(f);
}

int main() {
    int choice;
    while(1) {
        printf("\n1.Add 2.Display 3.Search 4.Exit\nChoice: ");
        if(scanf("%d", &choice) != 1) { printf("Invalid choice.\n"); while(getchar()!='\n'); continue; }
        switch(choice) {
            case 1: add(); break;
            case 2: display(); break;
            case 3: search(); break;
            case 4: exit(0);
            default: printf("Invalid choice.\n");
        }
    }
}
