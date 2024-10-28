#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char name[20];
    char Reg[20];
    int m1, m2, m3;
    float avg;
} S;

void read(char *name, char *reg, int *a, int *b, int *c, int i) {
    printf("Enter the name of student %d:\n", i + 1);
    scanf("%s", name);
    printf("Enter the register number:\n");
    scanf("%s", reg);
    printf("Enter the marks of three tests:\n");
    scanf("%d %d %d", a, b, c);
}

void display(char *name, char *reg, int a, int b, int c) {
    printf("****** Student Details ******\n");
    printf("Student Name: %s\n", name);
    printf("Register No: %s\n", reg);
    printf("Marks of 3 tests: m1=%d, m2=%d, m3=%d\n", a, b, c);
}

void Average(int a, int b, int c) {
    float avg;
    if (a >= b && b >= c) {
        avg = (float)(a + b) / 2;
    } else if (a >= c && c >= b) {
        avg = (float)(a + c) / 2;
    } else {
        avg = (float)(b + c) / 2;
    }
    printf("The average of the best 2 marks is: %.2f\n", avg);
}

int main() {
    S *s1, s[100];
    int n, choice, n1, i, n2;
    
    while (1) {
        printf("1. Read the student data\n2. Display the data\n3. Calculate the average\n4. Exit\n");
        printf("Enter your choice:\n");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the number of students: ");
                scanf("%d", &n);
                s1 = (S*) malloc(n * sizeof(S));
                for (i = 0; i < n; i++) {
                    read((s1 + i)->name, (s1 + i)->Reg, &(s1 + i)->m1, &(s1 + i)->m2, &(s1 + i)->m3, i);
                }
                break;

            case 2:
                printf("1. Display single student data\n2. Display all student data\n");
                printf("Enter your choice:\n");
                scanf("%d", &n1);
                
                if (n1 == 1) {
                    printf("Enter the student index (starting from 0): ");
                    scanf("%d", &n2);
                    if (n2 < n) {
                        display((s1 + n2)->name, (s1 + n2)->Reg, (s1 + n2)->m1, (s1 + n2)->m2, (s1 + n2)->m3);
                    } else {
                        printf("Invalid student index.\n");
                    }
                } else if (n1 == 2) {
                    for (i = 0; i < n; i++) {
                        display((s1 + i)->name, (s1 + i)->Reg, (s1 + i)->m1, (s1 + i)->m2, (s1 + i)->m3);
                    }
                } else {
                    printf("Invalid choice.\n");
                }
                break;

            case 3:
                printf("Enter the student index to calculate the average (starting from 0): ");
                scanf("%d", &n2);
                if (n2 < n) {
                    Average((s1 + n2)->m1, (s1 + n2)->m2, (s1 + n2)->m3);
                } else {
                    printf("Invalid student index.\n");
                }
                break;

            case 4:
                printf("Thank you for using the program.\n");
                free(s1);
                exit(0);

            default:
                printf("Invalid input.\n");
        }
    }

    return 0;
}
#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char name[20];
    char Reg[20];
    int m1, m2, m3;
    float avg;
} S;

void read(char *name, char *reg, int *a, int *b, int *c, int i) {
    printf("Enter the name of student %d:\n", i + 1);
    scanf("%s", name);
    printf("Enter the register number:\n");
    scanf("%s", reg);
    printf("Enter the marks of three tests:\n");
    scanf("%d %d %d", a, b, c);
}

void display(char *name, char *reg, int a, int b, int c) {
    printf("****** Student Details ******\n");
    printf("Student Name: %s\n", name);
    printf("Register No: %s\n", reg);
    printf("Marks of 3 tests: m1=%d, m2=%d, m3=%d\n", a, b, c);
}

void Average(int a, int b, int c) {
    float avg;
    if (a >= b && b >= c) {
        avg = (float)(a + b) / 2;
    } else if (a >= c && c >= b) {
        avg = (float)(a + c) / 2;
    } else {
        avg = (float)(b + c) / 2;
    }
    printf("The average of the best 2 marks is: %.2f\n", avg);
}

int main() {
    S *s1, s[100];
    int n, choice, n1, i, n2;
    
    while (1) {
        printf("1. Read the student data\n2. Display the data\n3. Calculate the average\n4. Exit\n");
        printf("Enter your choice:\n");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the number of students: ");
                scanf("%d", &n);
                s1 = (S*) malloc(n * sizeof(S));
                for (i = 0; i < n; i++) {
                    read((s1 + i)->name, (s1 + i)->Reg, &(s1 + i)->m1, &(s1 + i)->m2, &(s1 + i)->m3, i);
                }
                break;

            case 2:
                printf("1. Display single student data\n2. Display all student data\n");
                printf("Enter your choice:\n");
                scanf("%d", &n1);
                
                if (n1 == 1) {
                    printf("Enter the student index (starting from 0): ");
                    scanf("%d", &n2);
                    if (n2 < n) {
                        display((s1 + n2)->name, (s1 + n2)->Reg, (s1 + n2)->m1, (s1 + n2)->m2, (s1 + n2)->m3);
                    } else {
                        printf("Invalid student index.\n");
                    }
                } else if (n1 == 2) {
                    for (i = 0; i < n; i++) {
                        display((s1 + i)->name, (s1 + i)->Reg, (s1 + i)->m1, (s1 + i)->m2, (s1 + i)->m3);
                    }
                } else {
                    printf("Invalid choice.\n");
                }
                break;

            case 3:
                printf("Enter the student index to calculate the average (starting from 0): ");
                scanf("%d", &n2);
                if (n2 < n) {
                    Average((s1 + n2)->m1, (s1 + n2)->m2, (s1 + n2)->m3);
                } else {
                    printf("Invalid student index.\n");
                }
                break;

            case 4:
                printf("Thank you for using the program.\n");
                free(s1);
                exit(0);

            default:
                printf("Invalid input.\n");
        }
    }

    return 0;
}
#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char name[20];
    char Reg[20];
    int m1, m2, m3;
    float avg;
} S;

void read(char *name, char *reg, int *a, int *b, int *c, int i) {
    printf("Enter the name of student %d:\n", i + 1);
    scanf("%s", name);
    printf("Enter the register number:\n");
    scanf("%s", reg);
    printf("Enter the marks of three tests:\n");
    scanf("%d %d %d", a, b, c);
}

void display(char *name, char *reg, int a, int b, int c) {
    printf("****** Student Details ******\n");
    printf("Student Name: %s\n", name);
    printf("Register No: %s\n", reg);
    printf("Marks of 3 tests: m1=%d, m2=%d, m3=%d\n", a, b, c);
}

void Average(int a, int b, int c) {
    float avg;
    if (a >= b && b >= c) {
        avg = (float)(a + b) / 2;
    } else if (a >= c && c >= b) {
        avg = (float)(a + c) / 2;
    } else {
        avg = (float)(b + c) / 2;
    }
    printf("The average of the best 2 marks is: %.2f\n", avg);
}

int main() {
    S *s1, s[100];
    int n, choice, n1, i, n2;
    
    while (1) {
        printf("1. Read the student data\n2. Display the data\n3. Calculate the average\n4. Exit\n");
        printf("Enter your choice:\n");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the number of students: ");
                scanf("%d", &n);
                s1 = (S*) malloc(n * sizeof(S));
                for (i = 0; i < n; i++) {
                    read((s1 + i)->name, (s1 + i)->Reg, &(s1 + i)->m1, &(s1 + i)->m2, &(s1 + i)->m3, i);
                }
                break;

            case 2:
                printf("1. Display single student data\n2. Display all student data\n");
                printf("Enter your choice:\n");
                scanf("%d", &n1);
                
                if (n1 == 1) {
                    printf("Enter the student index (starting from 0): ");
                    scanf("%d", &n2);
                    if (n2 < n) {
                        display((s1 + n2)->name, (s1 + n2)->Reg, (s1 + n2)->m1, (s1 + n2)->m2, (s1 + n2)->m3);
                    } else {
                        printf("Invalid student index.\n");
                    }
                } else if (n1 == 2) {
                    for (i = 0; i < n; i++) {
                        display((s1 + i)->name, (s1 + i)->Reg, (s1 + i)->m1, (s1 + i)->m2, (s1 + i)->m3);
                    }
                } else {
                    printf("Invalid choice.\n");
                }
                break;

            case 3:
                printf("Enter the student index to calculate the average (starting from 0): ");
                scanf("%d", &n2);
                if (n2 < n) {
                    Average((s1 + n2)->m1, (s1 + n2)->m2, (s1 + n2)->m3);
                } else {
                    printf("Invalid student index.\n");
                }
                break;

            case 4:
                printf("Thank you for using the program.\n");
                free(s1);
                exit(0);

            default:
                printf("Invalid input.\n");
        }
    }

    return 0;
}
#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char name[20];
    char Reg[20];
    int m1, m2, m3;
    float avg;
} S;

void read(char *name, char *reg, int *a, int *b, int *c, int i) {
    printf("Enter the name of student %d:\n", i + 1);
    scanf("%s", name);
    printf("Enter the register number:\n");
    scanf("%s", reg);
    printf("Enter the marks of three tests:\n");
    scanf("%d %d %d", a, b, c);
}

void display(char *name, char *reg, int a, int b, int c) {
    printf("****** Student Details ******\n");
    printf("Student Name: %s\n", name);
    printf("Register No: %s\n", reg);
    printf("Marks of 3 tests: m1=%d, m2=%d, m3=%d\n", a, b, c);
}

void Average(int a, int b, int c) {
    float avg;
    if (a >= b && b >= c) {
        avg = (float)(a + b) / 2;
    } else if (a >= c && c >= b) {
        avg = (float)(a + c) / 2;
    } else {
        avg = (float)(b + c) / 2;
    }
    printf("The average of the best 2 marks is: %.2f\n", avg);
}

int main() {
    S *s1, s[100];
    int n, choice, n1, i, n2;
    
    while (1) {
        printf("1. Read the student data\n2. Display the data\n3. Calculate the average\n4. Exit\n");
        printf("Enter your choice:\n");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the number of students: ");
                scanf("%d", &n);
                s1 = (S*) malloc(n * sizeof(S));
                for (i = 0; i < n; i++) {
                    read((s1 + i)->name, (s1 + i)->Reg, &(s1 + i)->m1, &(s1 + i)->m2, &(s1 + i)->m3, i);
                }
                break;

            case 2:
                printf("1. Display single student data\n2. Display all student data\n");
                printf("Enter your choice:\n");
                scanf("%d", &n1);
                
                if (n1 == 1) {
                    printf("Enter the student index (starting from 0): ");
                    scanf("%d", &n2);
                    if (n2 < n) {
                        display((s1 + n2)->name, (s1 + n2)->Reg, (s1 + n2)->m1, (s1 + n2)->m2, (s1 + n2)->m3);
                    } else {
                        printf("Invalid student index.\n");
                    }
                } else if (n1 == 2) {
                    for (i = 0; i < n; i++) {
                        display((s1 + i)->name, (s1 + i)->Reg, (s1 + i)->m1, (s1 + i)->m2, (s1 + i)->m3);
                    }
                } else {
                    printf("Invalid choice.\n");
                }
                break;

            case 3:
                printf("Enter the student index to calculate the average (starting from 0): ");
                scanf("%d", &n2);
                if (n2 < n) {
                    Average((s1 + n2)->m1, (s1 + n2)->m2, (s1 + n2)->m3);
                } else {
                    printf("Invalid student index.\n");
                }
                break;

            case 4:
                printf("Thank you for using the program.\n");
                free(s1);
                exit(0);

            default:
                printf("Invalid input.\n");
        }
    }

    return 0;
}
