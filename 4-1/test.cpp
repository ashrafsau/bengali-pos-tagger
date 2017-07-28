#include <locale.h>
#include <stdio.h>
#include <wchar.h>
#include<iostream>
#include<set>
#include<map>
#include<string>
#include<vector>
using  namespace std;

int main()
{
    FILE *input;
    wchar_t buf[1000];
    set<string> S;
    map<string, vector<string> >freq;
    int in=0;
    freopen("oo.txt","w",stdout);

    setlocale(LC_CTYPE,"it_IT.UTF-8");

    if ((input = fopen("data.txt","r")) == NULL)
        return 1;;;

    while (fgetws(buf,1000,input)!=NULL)
    {
        wstring ws(buf);
        string str(ws.begin(), ws.end());


        string st = "",tag="";
        int flag=0;
        for(int i=0; i<str.size(); i++)
        {
            if(str[i]==' ')
                flag=1;
            if(!flag)
                st+=str[i];
            else
                tag+=str[i];

        }
//            if(S.find(st)!=S.end())
        // cout<<st<<endl;
        S.insert(st);
        freq[st].push_back(tag);


        in++;

    }
    fclose(input);

    if ((input = fopen("data-21-40.txt","r")) == NULL)
        return 1;
    while (fgetws(buf,1000,input)!=NULL)
    {
        wstring ws(buf);
        string str(ws.begin(), ws.end());


        string st = "",tag="";
        int flag=0;
        for(int i=0; i<str.size(); i++)
        {
            if(str[i]==' ')
                flag=1;
            if(!flag)
                st+=str[i];
            else
                tag+=str[i];

        }
//            if(S.find(st)!=S.end())
        // cout<<st<<endl;
        S.insert(st);
        freq[st].push_back(tag);


        in++;

    }
    fclose(input);

    if ((input = fopen("data-41-60.txt","r")) == NULL)
        return 1;
    while (fgetws(buf,1000,input)!=NULL)
    {
        wstring ws(buf);
        string str(ws.begin(), ws.end());


        string st = "",tag="";
        int flag=0;
        for(int i=0; i<str.size(); i++)
        {
            if(str[i]==' ')
                flag=1;
            if(!flag)
                st+=str[i];
            else
                tag+=str[i];

        }
//            if(S.find(st)!=S.end())
        // cout<<st<<endl;
        S.insert(st);
        freq[st].push_back(tag);


        in++;

    }
    fclose(input);
    if ((input = fopen("data-61-80.txt","r")) == NULL)
        return 1;
    while (fgetws(buf,1000,input)!=NULL)
    {
        wstring ws(buf);
        string str(ws.begin(), ws.end());


        string st = "",tag="";
        int flag=0;
        for(int i=0; i<str.size(); i++)
        {
            if(str[i]==' ')
                flag=1;
            if(!flag)
                st+=str[i];
            else
                tag+=str[i];

        }
//            if(S.find(st)!=S.end())
        // cout<<st<<endl;
        S.insert(st);
        freq[st].push_back(tag);


        in++;

    }
    fclose(input);
    if ((input = fopen("data-81-100.txt","r")) == NULL)
        return 1;
    while (fgetws(buf,1000,input)!=NULL)
    {
        wstring ws(buf);
        string str(ws.begin(), ws.end());


        string st = "",tag="";
        int flag=0;
        for(int i=0; i<str.size(); i++)
        {
            if(str[i]==' ')
                flag=1;
            if(!flag)
                st+=str[i];
            else
                tag+=str[i];

        }
//            if(S.find(st)!=S.end())
        // cout<<st<<endl;
        S.insert(st);
        freq[st].push_back(tag);


        in++;

    }
    fclose(input);
    for(set<string>:: iterator it = S.begin(); it != S.end(); it++)
    {
        cout<<*it<<" : ";
        for(int i=0; i<freq[*it].size(); i++)
            cout<<" "<<freq[*it][i];
        cout<<endl;
    }
    printf("%d %d\n",in,S.size());

}
