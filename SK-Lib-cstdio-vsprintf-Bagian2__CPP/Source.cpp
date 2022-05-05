#pragma warning(disable:4996)

#include <cstdio>
#include <cstdarg>
#include <conio.h>

/*
    Source by Programiz (https://www.programiz.com)
    Modified For Learn by RK
    I.D.E : VS2022
*/

void write(char* buf, const char* fmt, ...) {
    va_list args;
    va_start(args, fmt);
    vsprintf(buf, fmt, args);
    va_end(args);
}

int main() {
    char buffer[100];
    char fname[20] = "Bjarne";
    char lname[20] = "Stroustrup";
    char lang[5] = "C++";

    write(buffer, "%s was created by %s %s\n", lang, fname, lname);
    printf("%s", buffer);

    _getch();
    return 0;
}