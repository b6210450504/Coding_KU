#include <stdio.h>
int main() {
    FILE* fp;
    char word[100];
    int number,total=0;

    fp=fopen("data.in.txt", "r");
    
    while (fscanf(fp,"%s %d",word,&number)!=-1){
        printf("---%s(%d)---\n",word,number);
        total+=number;
    }

    fclose(fp); //ถ้าไม่ปิด จะไม่สารารถเปลี่ยนแปลงfileนั้นๆได้เลย!
    printf("Total is %d\n",total);
    return 0;
}