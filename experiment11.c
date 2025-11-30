#include <stdio.h>
/* mantasha shaikh
uin:251P065
roll no:55
comps*/
struct Employee {
    int id;
    char name[30];
    float salary;
};

int main() {
    struct Employee e;
    FILE *fp, *temp;
    int choice, id;

    while (1) {
        printf("\n1.Add  2.Display  3.Edit  4.Delete  5.Exit\n");
        printf("Choice: ");
        scanf("%d", &choice);

        if (choice == 1) {              // ADD
            fp = fopen("emp.dat", "ab");
            printf("ID: "); scanf("%d", &e.id);
            printf("Name: "); scanf("%s", e.name);
            printf("Salary: "); scanf("%f", &e.salary);
            fwrite(&e, sizeof(e), 1, fp);
            fclose(fp);
        }

        else if (choice == 2) {         // DISPLAY
            fp = fopen("emp.dat", "rb");
            while (fread(&e, sizeof(e), 1, fp))
                printf("%d  %s  %.2f\n", e.id, e.name, e.salary);
            fclose(fp);
        }

        else if (choice == 3) {         // EDIT
            fp = fopen("emp.dat", "rb+");
            printf("Enter ID to edit: ");
            scanf("%d", &id);

            while (fread(&e, sizeof(e), 1, fp)) {
                if (e.id == id) {
                    printf("New Name: ");
                    scanf("%s", e.name);
                    printf("New Salary: ");
                    scanf("%f", &e.salary);
                    fseek(fp, -sizeof(e), SEEK_CUR);
                    fwrite(&e, sizeof(e), 1, fp);
                    break;
                }
            }
            fclose(fp);
        }

        else if (choice == 4) {         // DELETE
            fp = fopen("emp.dat", "rb");
            temp = fopen("temp.dat", "wb");
            printf("Enter ID to delete: ");
            scanf("%d", &id);

            while (fread(&e, sizeof(e), 1, fp))
                if (e.id != id)
                    fwrite(&e, sizeof(e), 1, temp);

            fclose(fp);
            fclose(temp);

            remove("emp.dat");
            rename("temp.dat", "emp.dat");
        }

        else if (choice == 5) {
            break;                      // EXIT
        }
    }

    return 0;
}
