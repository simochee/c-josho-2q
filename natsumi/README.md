# テスト結果を入力して一覧と平均・最高点をファイルに出力する

## もくじ

<!-- TOC -->

- [テスト結果を入力して一覧と平均・最高点をファイルに出力する](#テスト結果を入力して一覧と平均・最高点をファイルに出力する)
    - [もくじ](#もくじ)
    - [プログラムに用いた要素](#プログラムに用いた要素)
    - [実行結果](#実行結果)
    - [コメント付きプログラム](#コメント付きプログラム)
    - [解説](#解説)
    - [提出用ソースコード](#提出用ソースコード)

<!-- /TOC -->

## プログラムに用いた要素

* 繰り返し
* 配列
* 構造体
* ファイル操作

## 実行結果

```
出席番号：38
氏名：山田太郎
英語の点数：72
数学の点数：86
```

```
# result.txt

試験結果

38番 山田太郎
--------------------
英語： 72点
数学： 86点

```

## コメント付きプログラム

```c
/**
 * 試験結果を入力して文書形式にしたものをファイルに出力するプログラム
 */
#include <stdio.h>

// 成績管理の構造体
struct score {
    // 出席番号
    int no;
    // 氏名
    char name[50];
    // 英語の点数
    int english;
    // 数学の点数
    int math;
};

int main(void) {
    int i;
    // 構造体の宣言
    struct score exam;
    // ファイルポインタのアクセス
    FILE *fp;

    // 情報を入力
    printf("出席番号：");
        scanf("%d", &exam.no);
    printf("氏名：");
        scanf("%s", exam.name);
    printf("英語の点数：");
        scanf("%d", &exam.english);
    printf("数学の点数：");
        scanf("%d", &exam.math);
    
    // ファイルを開く
    fp = fopen("result.txt", "w");

    // ファイルが開けなかった場合
    if(fp == NULL) {
        printf("result.txtを開けませんでした。\n");
        return 0;
    }

    // 結果を出力（printfと雰囲気は一緒）
    fprintf(fp, "\n");
    fprintf(fp, "試験結果\n");
    fprintf(fp, "\n");
    fprintf(fp, "%d番 %s\n", exam.no, exam.name);
    fprintf(fp, "--------------------\n");
    fprintf(fp, "英語：%3d点\n", exam.english);
    fprintf(fp, "数学：%3d点\n", exam.math);

    // 出力が成功したことを表示
    printf("結果をファイルに書き出しました！\n");

    // ファイルを閉じる
    fclose(fp);

    return 0;
}
```

## 解説

## 提出用ソースコード

[ハイライトされたプログラム](./program.c)

[プログラムのみ](https://raw.githubusercontent.com/simochee/c-josho-2q/master/natsumi/program.c)

