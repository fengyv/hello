#include <stdio.h>

#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>


unsigned char * matrix_line_end(unsigned char *start_string, unsigned char * stop_string) {
    if((start_string == NULL) || (stop_string == NULL) || (start_string >= stop_string))
        return NULL;

do_char_compare:
    
    while(*start_string != '\r')
    {
        if(start_string >= (stop_string - 1))
        {
            return NULL;
        }
        start_string++;
    }

    start_string++;
    if(*start_string == '\n')
    {
        start_string--;
        return start_string;
    }
    goto do_char_compare;

    return NULL;
}

struct student
{
    char i;
    char j;
    char *p;
};

struct student stu[] = 
{
    [0] = {0, 0, 0},
    [1] = {0, 0, "12345678"},
    [2] = {0, 0, "2222222222"},
};
int main(int argc, char *argv[])
{
	char *massg="asdfgh";
	*massg++;
	printf("%s", massg);
	return 0;
}
