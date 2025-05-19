#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 10
#define PASSWORD 2025

// �ǥ͸�Ƶ��c�w�q
typedef struct {
    char name[50];
    int id;
    int math, physics, english;
    float avg;
} Student;

// �禡�ŧi
void welcomeScreen();
int login();
void mainMenu();
void enterGrades(Student *students, int *n);
void displayGrades(Student *students, int n);
void searchGrades(Student *students, int n);
void rankGrades(Student *students, int n);

// �D�{��
int main() {
    Student students[MAX];
    int n = 0;
    char choice;

    system("clear"); // Windows �Ч�� "cls"
    welcomeScreen();
    if (!login()) return 0;

    while (1) {
        system("clear");
        mainMenu();
        scanf(" %c", &choice);

        switch (choice) {
            case 'a':
                enterGrades(students, &n);
                break;
            case 'b':
                displayGrades(students, n);
                break;
            case 'c':
                searchGrades(students, n);
                break;
            case 'd':
                rankGrades(students, n);
                break;
            case 'e': {
                char confirm;
                printf("�T�w���}�H(y/n): ");
                scanf(" %c", &confirm);
                if (confirm == 'y' || confirm == 'Y') {
                    printf("�t�ε����A�P�¨ϥΡI\n");
                    return 0;
                }
                break;
            }
            default:
                printf("�L�Ŀﶵ�A�Э��s��ܡC\n");
                break;
        }

        printf("�Ы� Enter ���~��...");
        getchar(); getchar();
    }

    return 0;
}

// 1. �n�J�e��
void welcomeScreen() {
    for (int i = 0; i < 20; i++) {
        printf("== �w��ϥ�²�����Z�t�� [%02d] ==\n", i+1);
    }
}

// 2. �K�X���ҡA�̦h�T��
int login() {
    int input, attempts = 0;
    while (attempts < 3) {
        printf("�п�J 4 ��ƱK�X�G");
        scanf("%d", &input);
        if (input == PASSWORD) {
            printf("�K�X���T�A�w��i�J�t�ΡI\n");
            return 1;
        } else {
            printf("�K�X���~�A�ЦA�դ@���C\n");
            attempts++;
        }
    }
    printf("���~���ƹL�h�A�t����w�I\n");
    return 0;
}

// 3. �D���
void mainMenu() {
    printf("------------[Grade System]----------\n");
    printf("| a. Enter student grades          |\n");
    printf("| b. Display student grades        |\n");
    printf("| c. Search for student grades     |\n");
    printf("| d. Grade ranking                 |\n");
    printf("| e. Exit system                   |\n");
    printf("------------------------------------\n");
    printf("�п�ܿﶵ�G");
}

// 4. ��J�ǥͦ��Z
void enterGrades(Student *students, int *n) {
    system("clear");
    printf("�п�J�ǥͤH�� (5~10)�G");
    scanf("%d", n);

    if (*n < 5 || *n > 10) {
        printf("�ǥͼƻݤ��� 5 �� 10 �H�����A�Э��s��J�C\n");
        return;
    }

    for (int i = 0; i < *n; i++) {
        printf("�ǥ� %d ��ơG\n", i + 1);
        printf("�m�W�G");
        scanf("%s", students[i].name);

        printf("�Ǹ� (6 ����)�G");
        scanf("%d", &students[i].id);
        if (students[i].id < 100000 || students[i].id > 999999) {
            printf("�Ǹ��榡���~�A�Э��s��J�C\n");
            i--;
            continue;
        }

        printf("�ƾǦ��Z (0~100)�G");
        scanf("%d", &students[i].math);
        if (students[i].math < 0 || students[i].math > 100) {
            printf("���Z��J���~�C\n");
            i--;
            continue;
        }

        printf("���z���Z (0~100)�G");
        scanf("%d", &students[i].physics);
        if (students[i].physics < 0 || students[i].physics > 100) {
            printf("���Z��J���~�C\n");
            i--;
            continue;
        }

        printf("�^�妨�Z (0~100)�G");
        scanf("%d", &students[i].english);
        if (students[i].english < 0 || students[i].english > 100) {
            printf("���Z��J���~�C\n");
            i--;
            continue;
        }

        students[i].avg = (students[i].math + students[i].physics + students[i].english) / 3.0f;
    }
    printf("��ƿ�J�����I\n");
}

// 5. ��ܩҦ��ǥ͸��
void displayGrades(Student *students, int n) {
    system("clear");
    printf("�m�W\t�Ǹ�\t\t�ƾ�\t���z\t�^��\t����\n");
    printf("-------------------------------------------------------\n");

    for (int i = 0; i < n; i++) {
        printf("%s\t%d\t%d\t%d\t%d\t%.1f\n",
               students[i].name,
               students[i].id,
               students[i].math,
               students[i].physics,
               students[i].english,
               students[i].avg);
    }
}

// 6. �j�M�ǥͦ��Z
void searchGrades(Student *students, int n) {
    system("clear");
    char target[50];
    int found = 0;

    printf("�п�J�n�j�M���ǥͩm�W�G");
    scanf("%s", target);

    for (int i = 0; i < n; i++) {
        if (strcmp(students[i].name, target) == 0) {
            printf("���ǥ͡G\n");
            printf("�m�W�G%s\n", students[i].name);
            printf("�Ǹ��G%d\n", students[i].id);
            printf("�ƾǡG%d�A���z�G%d�A�^��G%d\n", students[i].math, students[i].physics, students[i].english);
            printf("�����G%.1f\n", students[i].avg);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("�d�L���ǥ͸�ơC\n");
    }
}

// 7. �������Z�Ƨ�
void rankGrades(Student *students, int n) {
    system("clear");
    Student temp;

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (students[i].avg < students[j].avg) {
                temp = students[i];
                students[i] = students[j];
                students[j] = temp;
            }
        }
    }

    printf("�������Z�ƦW�G\n");
    printf("�m�W\t�Ǹ�\t\t����\n");
    printf("------------------------------\n");
    for (int i = 0; i < n; i++) {
        printf("%s\t%d\t%.1f\n", students[i].name, students[i].id, students[i].avg);
    }
}
