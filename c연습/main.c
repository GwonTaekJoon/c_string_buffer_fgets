#include <stdio.h>

int main(){
    char perID[7];
    char name[10];
    
    fputs("주민번호 앞 6자리 입력: ",stdout);
    fgets(perID,sizeof(perID),stdin);
    
    fputs("이름 입력: ",stdout);
    fgets(name,sizeof(name),stdin);
    
    printf("주민번호 : %s \n",perID);
    printf("이름: %s \n",name);
    return 0;
}
/*000107을 입력하면 입력버퍼에는 000107\n이 있지만
 최대 7글자를 읽는 과정에서 문자 6개와 NULL값을, 읽어야 하기에
 \n이 남는다.
 이 오류를 고치기 위해서는 fgets함수 후에 getchar함수를 통하여 입력버퍼에 남아있는
 엔터를 지워주면 된다.*/

