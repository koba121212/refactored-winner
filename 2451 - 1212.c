/****************************************************************************
                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/




#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char password[100];
    int hasUpper = 0, hasLower = 0;

    printf("パスワードを入力してください。 ");
    scanf("%99s", password);

    int length = strlen(password);

    // 文字をチェック
    for (int i = 0; i < length; i++) {
        if (isupper(password[i])) hasUpper = 1;
        if (islower(password[i])) hasLower = 1;
    }

    int isStrong = 1;


    if (length < 8) {
        printf("文字数が8文字未満です。\n");
        isStrong = 0;
    }
    if (!hasUpper) {
        printf("大文字が含まれていません。\n");
        isStrong = 0;
    }
    if (!hasLower) {
        printf("小文字が含まれていません。\n");
        isStrong = 0;
    }

    // 結果表示
    if (isStrong) {
        printf("このパスワードは強いパスワードです！\n");
    } else {
        printf(" このパスワードは強くありません。\n");
        printf("改善しましょう\n");
    }

    return 0;
}
