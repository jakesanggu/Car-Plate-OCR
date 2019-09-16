/*
 * match.h
 *
 *  Created on: 2019. 6. 3.
 *      Author: LEE SANG GU
 */

#ifndef MATCH_H_
#define MATCH_H_


typedef struct value {
    double percent;
    int cost;
}value;

typedef struct TP {
    int first;
    int second;
    int error;
}TP;

TP predict(int what, char something[], char something2[]);
TP ch_match(char something[]);
TP ch_match2(char something[], char something2[]);
int ch_match2_jar(char something[], int mor_type);
TP num_match(char something[]);
value template(char path1[], char path2[]);
value Ctemplate(char path1[], char path2[]);
value Ctemplate_mor(char path1[], char path2[]);
value Ctemplate_jar(char path1[], char path2[]);
int pow(int a, int b);


#define COLS   24   //���� �ȼ� ũ��
#define ROWS   40

#define C_COLS   40   //�ѱ��� �ȼ� ũ��
#define C_ROWS   40

#define C2_COLS   40   //�и� ���� �ȼ� ũ��
#define C2_ROWS   40

#define CJ_COLS   40   //�и� ���� �ȼ� ũ��
#define CJ_ROWS   40


#define NTYPE 0    //���ڸ��
#define CTYPE 1    //�ѱ��ڸ��
#define C2TYPE 2   //����,���� �и����

#define gur 0  //��
#define gor 1  //��
#define gur 2  //��
#define nar 3  //��
#define nur 4  //��
#define dar 5  //��
#define dur 6  //��
#define rar 7  //��
#define rur 8  //��
#define mur 9  //��
#define bur 10 //��
#define our 11 //��
#define oor 12 //��
#define hur 13 //��
#define hor 14 //ȣ

#define aa 0 //��
#define uu 1 //��
#define oo 2 //��
#define wo 3 //��
#define ae 4 //��

#define gi 0 //��
#define ni 1 //��
#define di 2 //��
#define ri 3 //��
#define mi 4 //��
#define bi 5 //��
#define si 6 //��
#define ei 7 //��
#define ji 8 //��
#define hi 9 //��




#define PATH_NUM_TEMPLATE "/sdcard/im2char/database/nums/%d/1 (%d).bmp"  //���� �����ͺ��̽� ���
#define PATH_CHAR_TEMPLATE "/sdcard/im2char/database/chars/one/%d/1 (%d).bmp" // �ѱ��ڸ�� �����ͺ��̽� ���
#define PATH_MOR_TEMPLATE "/sdcard/im2char/database/chars/moum/%d/1 (%d).bmp" //�и���� ���� �����ͺ��̽����
#define PATH_JAR_TEMPLATE "/sdcard/im2char/database/chars/jaum/%d/1 (%d).bmp" //�и���� ���� �����ͺ��̽� ���



#endif /* MATCH_H_ */
