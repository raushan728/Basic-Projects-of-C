#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define FILE_NAME "tasks.txt"

void addTask();
void viewTasks();
void deleteTask();

int main() {
    int choice;
    
    while (1) {
        printf("\n----- To-Do List -----\n");
        printf("1. Add Task\n");
        printf("2. View Tasks\n");
        printf("3. Delete Task\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); // Buffer clear
        
        switch (choice) {
            case 1:
                addTask();
                break;
            case 2:
                viewTasks();
                break;
            case 3:
                deleteTask();
                break;
            case 4:
                printf("Exiting program...\n");
                return 0;
            default:
                printf("Invalid choice! Try again.\n");
        }
    }
}

// ✅ Task add karne ka function
void addTask() {
    FILE *file = fopen(FILE_NAME, "a");
    if (file == NULL) {
        printf("Error opening file!\n");
        return;
    }

    char task[100];
    printf("Enter task: ");
    fgets(task, sizeof(task), stdin);
    task[strcspn(task, "\n")] = 0;  // Remove newline

    fprintf(file, "%s\n", task);
    fclose(file);
    printf("Task added successfully!\n");
}

// ✅ Tasks ko view karne ka function (Fix applied)
void viewTasks() {
    FILE *file = fopen(FILE_NAME, "r");
    if (file == NULL) {
        printf("No tasks found!\n");
        return;
    }

    char task[100];
    int count = 0;
    printf("\n----- Your Tasks -----\n");
    while (fgets(task, sizeof(task), file) != NULL) {
        printf("%d. %s", ++count, task);
    }
    
    if (count == 0) {
        printf("No tasks available!\n");
    }

    fclose(file);
}

// ✅ Task delete karne ka function (Delete All option added)
void deleteTask() {
    FILE *file = fopen(FILE_NAME, "r");
    if (file == NULL) {
        printf("No tasks found!\n");
        return;
    }

    char tasks[100][100];  // Max 100 tasks
    int count = 0;
    
    while (fgets(tasks[count], sizeof(tasks[count]), file) != NULL) {
        tasks[count][strcspn(tasks[count], "\n")] = 0; // Remove newline
        count++;
    }
    fclose(file);

    if (count == 0) {
        printf("No tasks to delete!\n");
        return;
    }

    // Show tasks
    printf("\n----- Your Tasks -----\n");
    for (int i = 0; i < count; i++) {
        printf("%d. %s\n", i + 1, tasks[i]);
    }

    printf("Enter task number to delete (or 0 to delete all): ");
    int delIndex;
    scanf("%d", &delIndex);
    getchar(); // Buffer clear

    if (delIndex == 0) { // Delete all tasks
        file = fopen(FILE_NAME, "w");
        fclose(file);
        printf("All tasks deleted successfully!\n");
        return;
    }

    if (delIndex < 1 || delIndex > count) {
        printf("Invalid task number!\n");
        return;
    }

    file = fopen(FILE_NAME, "w");
    for (int i = 0; i < count; i++) {
        if (i + 1 != delIndex) {
            fprintf(file, "%s\n", tasks[i]);
        }
    }
    fclose(file);
    printf("Task deleted successfully!\n");
}

