/**
 * ほしい物リストを作成するプログラム
 */
#include <stdio.h>

// 欲しいものの構造体
struct item
{
    // 名前
    char name[100];
    // 値段
    int price;
};

int main(void)
{
    // ファイルポインタの宣言
    FILE *fp;
    // 構造体の宣言
    struct item want;
    // ファイルから読み取った行を保持する変数
    char s[200];

    // ファイルを追記モードで開く
    fp = fopen("list.txt", "a");

    // ファイルが開けなかったらエラーを表示して終了
    if(fp == NULL)
    {
        printf("エラー！ファイルが開けませんでした\n");
        return 0;
    }

    // 欲しいものを入力
    printf("欲しいものを入力します。\n");
    printf("名前\n");
    scanf("%s", want.name);
    printf("値段\n");
    scanf("%d", &want.price);

    // ファイルの先頭に入力した欲しいものを追加
    fprintf(fp, "名前：%s\n", want.name);
    fprintf(fp, "値段：%d\n", want.price);
    fprintf(fp, "\n");

    // ファイルを閉じる
    fclose(fp);

    return 0;
}