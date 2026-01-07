#include <stdio.h>
#include <stdlib.h>

typedef struct student {
    char name[50];
    int studentID;
    float studentGPA;
    struct student *next;
} student;

student *head = NULL;

void addstudent() {
    student *newStudent = malloc(sizeof(student));
    if (newStudent == NULL) {
        printf("Memory allocation failed!\n");
        return;
    }
    printf("Student name: ");
    scanf("%s", newStudent->name);
    printf("Student ID: ");
    scanf("%d", &newStudent->studentID);
    printf("Student GPA: ");
    scanf("%f", &newStudent->studentGPA);
    newStudent->next = NULL;

    if (head == NULL) {
        head = newStudent;
    } else {
        student *temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newStudent;
    }
    printf("Student added successfully\n");
}

void removeStudent() {
    if (head == NULL) {
        printf("List is empty\n");
        return;
    }
    int id;
    printf("the ID of the student you want to remove: ");
    scanf("%d", &id);

    student *temp = head;
    student *oneDownTemp = NULL;

    if (temp != NULL && temp->studentID == id) {
        head = temp->next;
        free(temp);
        printf("Student removed\n");
        return;
    }

    while (temp != NULL && temp->studentID != id) {
        oneDownTemp = temp;
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("student not found\n");
        return;
    }
    oneDownTemp->next = temp->next;
    free(temp);
    printf("Student deleted\n");
}

void searchStudent() {
    int id;
    printf("The ID of the student you want to find: ");
    scanf("%d", &id);

    student *temp = head;
    while (temp != NULL) {
        if (temp->studentID == id) {
            printf("Name: %s || ID: %d || GPA: %.2f\n", temp->name, temp->studentID, temp->studentGPA);
            return;
        }
        temp = temp->next;
    }
    printf("Student not found\n");
}

void studentDisplay() {
    if (head == NULL) {
        printf("List is empty\n");
        return;
    }
    student *temp = head;
    printf("----------STUDENTS----------\n");
    while (temp != NULL) {
        printf("Name: %s || ID: %d || GPA: %.2f\n", temp->name, temp->studentID, temp->studentGPA);
        temp = temp->next;
    }
}

void freeAll() {
    student *temp;

    while (head != NULL) {
        temp = head;
        head = head->next;
        free(temp);
    }
    printf("All memory deallocated BYEBYE!");
}

int main() {
    int choice;
    printf("--------MENU--------\n");
    printf("1.Add student\n");
    printf("2.Remove student\n");
    printf("3.Find student\n");
    printf("4.Display all\n");
    printf("0.Exit");
    printf("Your choice: ");
    scanf("%d", &choice);
    while (choice < 0 || choice > 4) {
        printf("Invalid Choice please try again: \n");
        scanf("%d", &choice);
    }
    while (choice != 0) {
        while (choice < 0 || choice > 4) {
            printf("Invalid Choice please try again: \n");
            scanf("%d", &choice);
        }
        switch (choice) {
            case 1:
                addstudent();
                break;
            case 2:
                removeStudent();
                break;
            case 3:
                searchStudent();
                break;
            case 4:
                studentDisplay();
                break;
        }
        printf("--------MENU--------\n");
        printf("1.Add student\n");
        printf("2.Remove student\n");
        printf("3.Find student\n");
        printf("4.Display all\n");
        printf("0.Exit\n");
        printf("Your new choice : ");
        scanf("%d", &choice);
    }
    freeAll();
    return 0;
}
