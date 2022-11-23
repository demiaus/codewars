#define _GNU_SOURCE     // For strdupa()
#include <stdlib.h>
#include <string.h>

const char *morse[55] = {".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--..", "-----", ".----", "..---", "...--", "....-", ".....", "-....", "--...", "---..", "----.", ".-.-.-", "--..--", "..--..", ".----.", "-.-.--", "-..-.", "-.--.", "-.--.-", ".-...", "---...", "-.-.-.", "-...-", ".-.-.", "-....-", "..--.-", ".-..-.", "...-..-", ".--.-.", "...---..."};  
const char *ascii[55] = {"A",  "B",    "C",    "D",   "E", "F",    "G",   "H",    "I",  "J",    "K",   "L",    "M",  "N",  "O",   "P",    "Q",    "R",   "S",   "T", "U",   "V",    "W",   "X",    "Y",    "Z",    "0",     "1",     "2",     "3",     "4",     "5",     "6",     "7",     "8",     "9",     ".",      ",",      "?",      "'",      "!",      "/",     "(",     ")",      "&",     ":",      ";",      "=",     "+",     "-",      "_",      "\"",     "$",       "@",      "SOS"};


char *
decode_morse(const char* morse_code)
{   
    char *decoded = calloc(strlen(morse_code) + 1, 1);
    if (decoded == NULL) return NULL;   // Quit on calloc() fail
    char *code = strdupa(morse_code);
    while (*code == ' ') code++;        // Ignore leading spaces
    char *token = strtok(code, " ");

    while (*token)
    {
        unsigned char i = 0;
        while (strcmp(morse[i], token) != 0)
        {   i++;
        }
        strcat(decoded, ascii[i]);

        // Search for next '.' or '-' after the current token,
        // and give that pointer to strtok for next token
        token = strtok(strpbrk(token + strlen(token) + 1, ".-"), " ");

        if (token == NULL)
        {   break;
        }
        if (*(token - 1))           // If character before token is non-zero (space), 
        {   strcat(decoded, " ");   // append space to output
        }
    }

    decoded = realloc(decoded, strlen(decoded) + 1);    // Save some space

    return decoded;
}

int
main(void)
{
    char *morse = ".... . -.--   .--- ..- -.. .";
    char *str = decode_morse(morse);

    free(str);

    return 0;
}