#include "lib.h"

bool funzione (char carattere) {
    if (((char)97<=carattere and carattere<=(char)122) or ((char)65<=carattere and carattere<=(char)90)){
        return true;    //se è una lettera
    }
    else return false;   // se non è una lettera
}

char conversione (char carattere){
    if ('a'<=carattere and carattere<='z') {
        carattere-=(char)32;
    }
    else carattere+=(char)32;

    return carattere;
}
