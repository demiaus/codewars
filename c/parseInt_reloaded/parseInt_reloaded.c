#include <string.h>

const char *dozen[] = {
    "z",    // 0
    "on",   // 1
    "tw",   // 2 
    "th",   // 3   
    "fo",   // 4
    "fi",   // 5
    "si",   // 6
    "se",   // 7
    "ei",   // 8
    "ni",   // 9
    "te",   // 10
    "ele"   // 11
};

const char *endings[] = {
    "elv",  // 12
    "tee",  // 13 - 19
    "ty",   // 20 ->
    ""
};

const char *magnitude[] = {
    "hu",   // hundred
    "tho",  // thousand
    "m",    // million
    ""
};

long mag_ints[] = {
    100,
    1000,
    1000000,
    0
};

long add10(long n)   { return n + 10; }
long times10(long n) { return n * 10; }
long times1(long n)  { return n     ; }

long parse_number_part(char *str)
{
    long n = 0;
    while (!strstr(str, dozen[n])) n++;
    return n;
}

unsigned char parse_ending(char *str)
{
    unsigned char i = 0;
    while (!strstr(str, endings[i])) i++;
    return i;
}

long parse_magnitude(char *str)
{
    unsigned char i = 0;
    while (!strstr(str, magnitude[i])) i++;
    return mag_ints[i];
}

long
parse_int(const char *number)
{
    char num[256] = { 0 };
    strcpy(num, number);
    long n = 0;
    long (*f[])(long) = { add10, add10, times10, times1 };
    char *token = strtok(num, " ");

    while (token)
    {

        if (strstr(token, "and") && strlen(token) == 3)
        {   goto _and;
        }
        long tmp_n = 0;
        long magn_n = 0;
        char *num1_str = token;
        char *num2_str = NULL;
        char *magn_str = NULL;

        if ((magn_n = parse_magnitude(num1_str)))
        {   n *= magn_n;
        }
        else
        {   if ((num2_str = strchr(token, '-')))
            {   *num2_str = 0;
                tmp_n = parse_number_part(num2_str + 1);
            }

            tmp_n += f[parse_ending(num1_str)](parse_number_part(num1_str));

            token = strtok(NULL, " ");
            magn_str = token;

            if (magn_str)
            {   magn_n = parse_magnitude(magn_str);
                if (magn_n > n) 
                {   n += tmp_n;
                    n *= magn_n;
                }
                else
                {   tmp_n *= magn_n;
                    n += tmp_n;
                }
            }
            else
            {   n += tmp_n;
            }

        }



        _and:
        token = strtok(NULL, " ");
    }


    return n;
}

int main(void)
{
    long i = parse_int("seven hundred thousand");


    return 0;
}