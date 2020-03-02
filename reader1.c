#include <stdio.h>
int main() {
    FILE* fp;
    char line[100],word[30];
    int number,total=0;

    fp=fopen("data.in.txt", "r");//

    while (fgets(line,99,fp)!=NULL)
    {
        printf(">>%s<<\n",line); // show strings line
        sscanf(line,"%s %d",word,&number); // find word and number in line and can change array to int
        total+=number;
    }
    

    fclose(fp); //ถ้าไม่ปิด จะไม่สารารถเปลี่ยนแปลงfileนั้นๆได้เลย!
    printf("Total is %d\n",total);
    return 0;
}