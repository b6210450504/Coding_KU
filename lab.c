#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define static "use malloc"
char * stoupper(const char * ans) {
    char *count=(char *)malloc(sizeof(ans));
    for (int i = 0; ans!='\0'; i++)
    {
        count[i]=toupper(ans[i]);
    }
    return count;
}
int main(){
	char s[100];
	char* result;

	scanf("%s",s);
	result = stoupper(s);
        if (result == s) printf("ERROR.\n");
	printf("%s\n",result);
}
