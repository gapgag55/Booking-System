#include <stdio.h>

char menus(char lower, char upper, char text[]) {
    
    printf("\tEnter %c or %c for\t%s\n\n", lower, upper, text);
    return 0;
}

int numlen(int num) {
    int count = 0;
    int mod;
    
    while(num > 0) {
        num = num / 10;
        mod = num % 1;
        
        num = num - mod;
        ++count;
    }
    return count;
}

char *getMonth(int order) {
    char *month;
    
    switch (order) {
        case 1:
            month = "Jan";
            break;
        case 2:
            month = "Feb";
            break;
        case 3:
            month = "Mar";
            break;
        case 4:
            month = "Api";
            break;
        case 5:
            month = "May";
            break;
        case 6:
            month = "Jun";
            break;
        case 7:
            month = "July";
            break;
        case 8:
            month = "Aug";
            break;
        case 9:
            month = "Sep";
            break;
        case 10:
            month = "Oct";
            break;
        case 11:
            month = "Nov";
            break;
        case 12:
            month = "Dec";
            break;
        default:
            month = "Error";
            break;
    }
    
    return month;
}

// getMonthInt("Nov");

int getMonthInt(char m[]) {
    
    if(strcmp(m,"Jan") == 0) {
        return 0;
    } else if(strcmp(m,"Feb") == 0) {
        return 1;
    } else if(strcmp(m,"Mar") == 0) {
        return 2;
    } else if(strcmp(m,"Api") == 0) {
        return 3;
    } else if(strcmp(m,"May") == 0) {
        return 4;
    } else if(strcmp(m,"Jun") == 0) {
        return 5;
    } else if(strcmp(m,"July") == 0) {
        return 6;
    } else if(strcmp(m,"Aug") == 0) {
        return 7;
    } else if(strcmp(m,"Sep") == 0) {
        return 8;
    } else if(strcmp(m,"Oct") == 0) {
        return 9;
    } else if(strcmp(m,"Nov") == 0) {
        return 10;
    } else if(strcmp(m, "Dec") == 0){
        return 11;
    } else {
        return -1;
    }
}

int getRoom(int id) {
    int room;
    
    switch (id) {
        case 1:
            room = 101;
            break;
        case 2:
            room = 102;
            break;
        case 3:
            room = 103;
            break;
        case 4:
            room = 104;
            break;
        default:
            room = 105;
            break;
    }
    
    return room;
}
