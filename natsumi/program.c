#include <stdio.h>

struct score {
    int no;
    char name[50];
    int english;
    int math;
};

int main(void) {
    int i;
    struct score exam;
    FILE *fp;

    printf("出席番号：");
    scanf("%d", &exam.no);
    printf("氏名：");
    scanf("%s", exam.name);
    printf("英語の点数：");
    scanf("%d", &exam.english);
    printf("数学の点数：");
    scanf("%d", &exam.math);
    
    fp = fopen("result.txt", "w");

    if(fp == NULL) {
        printf("result.txtを開けませんでした。\n");
        return 0;
    }

    fprintf(fp, "\n");
    fprintf(fp, "試験結果\n");
    fprintf(fp, "\n");
    fprintf(fp, "%d番 %s\n", exam.no, exam.name);
    fprintf(fp, "--------------------\n");
    fprintf(fp, "英語：%3d点\n", exam.english);
    fprintf(fp, "数学：%3d点\n", exam.math);

    printf("結果をファイルに書き出しました！\n");

    fclose(fp);

    return 0;
}