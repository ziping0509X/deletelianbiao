//华为机试有问题的题目



#include <iostream>
#include <cstring>

using namespace std;

void fun(char* str,int* a){
    int len=strlen(str);
    if(len==3 && str[1]>=48&&str[1]<=57 && str[2]>=48&&str[2]<=57){
        if(str[0]=='A'){
            int num=(str[1]-48)*10;
            num=num+str[2]-48;
            *a=(*a)-num;
        }

        if(str[0]=='S'){
            int num=(str[1]-48)*10;
            num=num+str[2]-48;
            *(a+1)=*(a+1)-num;
        }

        if(str[0]=='D'){
            int num=(str[1]-48)*10;
            num=num+str[2]-48;
            *a=(*a)+num;
        }

        if(str[0]=='W'){
            int num=(str[1]-48)*10;
            num=num+str[2]-48;
            *(a+1)=*(a+1)+num;
        }
    }

    if(len==2 && str[1]>=48&&str[1]<=57 ){
        if(str[0]=='A'){
            int num=(str[1]-48);
            *a=(*a)-num;
        }

        if(str[0]=='S'){
            int num=(str[1]-48);
            *(a+1)=*(a+1)-num;
        }

        if(str[0]=='D'){
            int num=(str[1]-48);
            *a=(*a)+num;
        }

        if(str[0]=='W'){
            int num=(str[1]-48);
            *(a+1)=*(a+1)+num;
        }
    }

}

int main(void){
    char str[100000];
    int a[2]={0,0};
    int *p;
    p=a;
    gets(str);
    int len=strlen(str);
    cout<<len<<endl;
    int i=0;
    while(i<len){
        char str1[50000];//这里不是每次都重新声明一次数组吗？
        int j=0;
        while(str[i]!=';'){
            str1[j]=str[i];
            i++;
            j++;
        }
        str1[j]='\0';
        if(str[i]==';'){
            i++;
        }
        fun(str1,p);
    }
    cout<<a[0]<<","<<a[1];
}

