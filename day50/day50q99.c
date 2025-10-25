//Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.
#include <stdio.h>
#include <string.h>

int main() {
    char date[20], day[3], month[3], year[5];
    gets(date);
    int i;
    day[0] = date[0]; day[1] = date[1]; day[2] = '\0';
    month[0] = date[3]; month[1] = date[4]; month[2] = '\0';
    year[0] = date[6]; year[1] = date[7]; year[2] = date[8]; year[3] = date[9]; year[4] = '\0';
    if(strcmp(month,"01")==0) printf("%s-Jan-%s\n", day, year);
    else if(strcmp(month,"02")==0) printf("%s-Feb-%s\n", day, year);
    else if(strcmp(month,"03")==0) printf("%s-Mar-%s\n", day, year);
    else if(strcmp(month,"04")==0) printf("%s-Apr-%s\n", day, year);
    else if(strcmp(month,"05")==0) printf("%s-May-%s\n", day, year);
    else if(strcmp(month,"06")==0) printf("%s-Jun-%s\n", day, year);
    else if(strcmp(month,"07")==0) printf("%s-Jul-%s\n", day, year);
    else if(strcmp(month,"08")==0) printf("%s-Aug-%s\n", day, year);
    else if(strcmp(month,"09")==0) printf("%s-Sep-%s\n", day, year);
    else if(strcmp(month,"10")==0) printf("%s-Oct-%s\n", day, year);
    else if(strcmp(month,"11")==0) printf("%s-Nov-%s\n", day, year);
    else if(strcmp(month,"12")==0) printf("%s-Dec-%s\n", day, year);
    return 0;
}

