#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 10
#define PASSWORD 2025

// 學生資料結構定義
typedef struct {
    char name[50];
    int id;
    int math, physics, english;
    float avg;
} Student;

// 函式宣告
void welcomeScreen();
int login();
void mainMenu();
void enterGrades(Student *students, int *n);
void displayGrades(Student *students, int n);
void searchGrades(Student *students, int n);
void rankGrades(Student *students, int n);

// 主程式
int main() {
    Student students[MAX];
    int n = 0;
    char choice;

    system("clear"); // Windows 請改用 "cls"
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
                printf("確定離開？(y/n): ");
                scanf(" %c", &confirm);
                if (confirm == 'y' || confirm == 'Y') {
                    printf("系統結束，感謝使用！\n");
                    return 0;
                }
                break;
            }
            default:
                printf("無效選項，請重新選擇。\n");
                break;
        }

        printf("請按 Enter 鍵繼續...");
        getchar(); getchar();
    }

    return 0;
}

// 1. 登入畫面
void welcomeScreen() {
    for (int i = 0; i < 20; i++) {
        printf("== 歡迎使用簡易成績系統 [%02d] ==\n", i+1);
    }
}

// 2. 密碼驗證，最多三次
int login() {
    int input, attempts = 0;
    while (attempts < 3) {
        printf("請輸入 4 位數密碼：");
        scanf("%d", &input);
        if (input == PASSWORD) {
            printf("密碼正確，歡迎進入系統！\n");
            return 1;
        } else {
            printf("密碼錯誤，請再試一次。\n");
            attempts++;
        }
    }
    printf("錯誤次數過多，系統鎖定！\n");
    return 0;
}

// 3. 主選單
void mainMenu() {
    printf("------------[Grade System]----------\n");
    printf("| a. Enter student grades          |\n");
    printf("| b. Display student grades        |\n");
    printf("| c. Search for student grades     |\n");
    printf("| d. Grade ranking                 |\n");
    printf("| e. Exit system                   |\n");
    printf("------------------------------------\n");
    printf("請選擇選項：");
}

// 4. 輸入學生成績
void enterGrades(Student *students, int *n) {
    system("clear");
    printf("請輸入學生人數 (5~10)：");
    scanf("%d", n);

    if (*n < 5 || *n > 10) {
        printf("學生數需介於 5 到 10 人之間，請重新輸入。\n");
        return;
    }

    for (int i = 0; i < *n; i++) {
        printf("學生 %d 資料：\n", i + 1);
        printf("姓名：");
        scanf("%s", students[i].name);

        printf("學號 (6 位整數)：");
        scanf("%d", &students[i].id);
        if (students[i].id < 100000 || students[i].id > 999999) {
            printf("學號格式錯誤，請重新輸入。\n");
            i--;
            continue;
        }

        printf("數學成績 (0~100)：");
        scanf("%d", &students[i].math);
        if (students[i].math < 0 || students[i].math > 100) {
            printf("成績輸入錯誤。\n");
            i--;
            continue;
        }

        printf("物理成績 (0~100)：");
        scanf("%d", &students[i].physics);
        if (students[i].physics < 0 || students[i].physics > 100) {
            printf("成績輸入錯誤。\n");
            i--;
            continue;
        }

        printf("英文成績 (0~100)：");
        scanf("%d", &students[i].english);
        if (students[i].english < 0 || students[i].english > 100) {
            printf("成績輸入錯誤。\n");
            i--;
            continue;
        }

        students[i].avg = (students[i].math + students[i].physics + students[i].english) / 3.0f;
    }
    printf("資料輸入完畢！\n");
}

// 5. 顯示所有學生資料
void displayGrades(Student *students, int n) {
    system("clear");
    printf("姓名\t學號\t\t數學\t物理\t英文\t平均\n");
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

// 6. 搜尋學生成績
void searchGrades(Student *students, int n) {
    system("clear");
    char target[50];
    int found = 0;

    printf("請輸入要搜尋的學生姓名：");
    scanf("%s", target);

    for (int i = 0; i < n; i++) {
        if (strcmp(students[i].name, target) == 0) {
            printf("找到學生：\n");
            printf("姓名：%s\n", students[i].name);
            printf("學號：%d\n", students[i].id);
            printf("數學：%d，物理：%d，英文：%d\n", students[i].math, students[i].physics, students[i].english);
            printf("平均：%.1f\n", students[i].avg);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("查無此學生資料。\n");
    }
}

// 7. 平均成績排序
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

    printf("平均成績排名：\n");
    printf("姓名\t學號\t\t平均\n");
    printf("------------------------------\n");
    for (int i = 0; i < n; i++) {
        printf("%s\t%d\t%.1f\n", students[i].name, students[i].id, students[i].avg);
    }
}
