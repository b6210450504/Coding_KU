#include <stdio.h>
int main() {
    FILE* fp;
    char str[100];
    
    fp=fopen("output.out","w");

    if (fp !=NULL){
        puts("Output to stdout");
        puts("Line 2 to stdout");
        fputs("Output to file",fp);
        fputs("\n",fp); //  || fputs("Output to file",fp);
        fputs("Line 2 to flie",fp);
        fputs("\n",fp);

        fprintf(fp,"%.2f - %.2f = %.2f\n",3000.0,1234.0,3000.0-1234.0);
        sprintf(str,"%d%08d",5,1);
        fputs(str,fp);
        fputs("\n",fp);

        fclose(fp);
    }
    
    return 0;
}