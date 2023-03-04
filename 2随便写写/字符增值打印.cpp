//输入的字符串值都增加一且打印出来
#include <stdio.h>

int main() {
    char str[100];

    printf("请输入一个字符串：");
    fgets(str, 100, stdin);                     //fgets() 是 C 语言中的一个函数，用于从文件或标准输入读取一行字符串。

    for (int i = 0; str[i] != '\0'; i++) {
        str[i]+=3; // 将每个字符加上3
    }

    printf("增加3后的字符串是：%s", str);

    return 0;
}
/*
请输入一个字符串：yjy da shuai B!
 增加3后的字符串是：|m|#gd#vkxdl#E$
*/


