#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>



int main(){
    //char color[]="green";
    //printf("%s\n",color);
    //printf("%d\n",sizeof(color));
    //color[2]='\0';
    //printf("%s\n",color);
    //printf("%d\n",color);

    //char *colorptr="blue";
    //printf("%c\n",colorptr[1]);
    //printf("%c\n",*(colorptr+1));
    //printf("%c\n",*colorptr+1);
    //printf("%c\n",colorptr);

    //printf("%s\n",colorptr);
    //*colorptr='c'; // can't do this!!
    //printf("%s\n",colorptr); 

//---------------- Array ---------------- //
    //char* colorptr="redocean";
    //printf("%d\n",sizeof(colorptr));

//---------------- Array Pointer ---------------- //
    //char*num[]={"one","two","three"};
    //printf("%s\n",num[2]);
    //printf("%c\n",num[2][1]);
    //printf("%s\n",*(num+2));
    //printf("%c\n",(*(num+2))[1]);
    //printf("%c\n",*(num+2));
    //printf("%c\n",*(num+2)[1]); // ได้อะไรก็ไม่รู้เพราะ num+2 แล้วจะได้ three จะได้ * three[1] มันจะทำ [1] ก่อนซึ่งในที่นี้จะได้อะไรก็ไม่รู้

//---------------- Scanf Array ---------------- //
    //char color[20]; // ถ้า [] ไว้น้อยจะเกิด Segmentation fault
    //scanf("%19s",color);
    //printf("[%s]\n",color);

//---------------- Scanf Array ---------------- //
    //char * color; // ระวังขอบเขตของ type ถ้าไม่ได้กำหนด malloc
    //scanf("%s",color);
    //printf("[%s]\n",color);

//---------------- Character Library ---------------- //
    //Check digi , char , etc.
    //printf("%s\n");
    //    isdigit('8') ? "Yes": "Nope"; // ตัวเลข
//
    //printf("%s\n");
    //    isalpha('a') ? "Yes": "Nope"; // ตัวอักษร
//
    //printf("%s\n");
    //    isxdigit('F') ? "Yes": "Nope"; // ตัวเลขฐาน 16
//
    //printf("%s\n");
    //    isupper('A') ? "Yes": "Nope"; // ตัวใหญ่
    //
    //printf("%s\n");
    //    islower('a') ? "Yes": "Nope"; // ตัวเล็ก
    // etc.

//---------------- String Library ---------------- //
    //const char* string="51.2% abc";
    //char *rem;
//
    //atoi;// array to int
    //double d = strtod(string,&rem); // str to double เปลี่ยน strings ใน string ไม่ได้
    //printf("[%.2f]\n",d); // [51.20]
    //printf("[%s]\n",rem); // [% abc]
//
    //const char* string1="-123abc";
    //char *rem2;
    //long l = strtol(string1,&rem2,0); // 0 คือ เลขฐานที่จะเปลี่ยน
    //printf("[%ld]\n",l); // [-123]
    //printf("[%s]\n",rem2); // [abc]

//---------------- String I/O ---------------- //
    //.
    //.
    //.

//---------------- String Handing lib ---------------- //
    //char* strcpy
    //char x[]="Happy ez",y[25],z[25];
    //printf("%s\n",strcpy(y,x));
    //strncpy(z,x,15-1); //ไม่เอา '\0' ต้องไปเพิ่มเอง
    //printf("%s\n",y);

//---------------- String Handing lib  cmp---------------- //
    //int strcmp(const char*s1,const char*s2); เอา str 2 ตัวมา เปรียบเทียบกัน ถ้า ascii s1<s2 return >0 if s1>s2 return <0 if s1==s2 return 0 
    //printf("%s\n",strerror(0));
    //printf("%s\n",strerror(1));
    //printf("%s\n",strerror(2));
    //printf("%s\n",strerror(-1)); // same strerror('a')
}
void Struct()
{
    
}