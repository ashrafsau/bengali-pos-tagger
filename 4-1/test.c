#include <locale.h>
#include <stdio.h>
#include <wchar.h>

int main()
{
    FILE *input;
    wchar_t buf[1000];
    set<>
    freopen("oo.txt","w",stdout);

    setlocale(LC_CTYPE,"it_IT.UTF-8");   // put your locale here

    if ((input = fopen("data.txt","r")) == NULL)
         return 1;

    while (fgetws(buf,1000,input)!=NULL)
        wprintf(L"%s",buf);

    fclose(input);
}
