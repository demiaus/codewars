#define _GNU_SOURCE     // For strdupa()
#include <stdlib.h>
#include <string.h>

#define OUT_MAX 1024    // Output array size maximum
#define L_DELIM " "     // Letters are separated by a single whitespace
#define W_DELIM "   "   // Letters are separated by three whitespaces

const char *morse[55] = {".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--..", "-----", ".----", "..---", "...--", "....-", ".....", "-....", "--...", "---..", "----.", ".-.-.-", "--..--", "..--..", ".----.", "-.-.--", "-..-.", "-.--.", "-.--.-", ".-...", "---...", "-.-.-.", "-...-", ".-.-.", "-....-", "..--.-", ".-..-.", "...-..-", ".--.-.", "...---..."};  
const char *ascii[55] = {"A",  "B",    "C",    "D",   "E", "F",    "G",   "H",    "I",  "J",    "K",   "L",    "M",  "N",  "O",   "P",    "Q",    "R",   "S",   "T", "U",   "V",    "W",   "X",    "Y",    "Z",    "0",     "1",     "2",     "3",     "4",     "5",     "6",     "7",     "8",     "9",     ".",      ",",      "?",      "'",      "!",      "/",     "(",     ")",      "&",     ":",      ";",      "=",     "+",     "-",      "_",      "\"",     "$",       "@",      "SOS"};

const char *
decode_char(const char *c)
{
    unsigned char i = 0;

    while (strcmp(morse[i], c) != 0)
    {   i++;
    }

    return ascii[i];
}

char *
decode_word(char *word)
{
    char *w = strdupa(word);
    unsigned char len = 1;
    char *delim = L_DELIM;
    while (*word) { len += *word++ == *delim; }
    char *decoded = calloc(len + 1, 1); if (decoded == NULL) return NULL;
    char *token = strtok(w, delim);

    while (token)
    {   strcat(decoded, decode_char(token));
        token = strtok(NULL, delim);
    }

    return decoded;
}

char *
decode_morse(const char* morse_code)
{   
    printf("input:\n%s\n", morse_code);
    char *decoded = calloc(OUT_MAX, 1);
    if (decoded == NULL) return NULL;
    char *code = strdupa(morse_code);
    char *needle = W_DELIM;
    char needle_s = strlen(needle);

    while (*code)
    {   
        while (*code == ' ') code++;
        if (!*code) break;

        char *delim = strstr(code, needle);

        if (delim)
        {   memset(delim, 0, needle_s);
        }

        char *word = decode_word(code);
        strcat(decoded, word);
        free(word);

        if (delim)
        {   code = delim + needle_s;
            while (*code == ' ') code++;
            if (!*code)
            {   break;
            }
            strcat(decoded, " ");
        }
        else
        {   break;
        }
    }

    decoded = realloc(decoded, strlen(decoded) + 1);
    printf("output:\n%s\n", decoded);

    return decoded;
}

int
main(void)
{
    char *morse = "   .   .   ";
    char *str = decode_morse(morse);

    free(str);

    return 0;
}