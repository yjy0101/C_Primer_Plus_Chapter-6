//������ַ���ֵ������һ�Ҵ�ӡ����
#include <stdio.h>

int main() {
    char str[100];

    printf("������һ���ַ�����");
    fgets(str, 100, stdin);                     //fgets() �� C �����е�һ�����������ڴ��ļ����׼�����ȡһ���ַ�����

    for (int i = 0; str[i] != '\0'; i++) {
        str[i]+=3; // ��ÿ���ַ�����3
    }

    printf("����3����ַ����ǣ�%s", str);

    return 0;
}
/*
������һ���ַ�����yjy da shuai B!
 ����3����ַ����ǣ�|m|#gd#vkxdl#E$
*/


