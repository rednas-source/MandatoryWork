//
// Created by Oledo on 06.09.2023.
//

int main() {
//    int a = 5;
//    int &b;
//    int *c;
//    c = &b;               Program med syntax feil
//    *a = *b + *c;
//    &b = 2;


    int a = 5;
    int b = 0; //b må bli inilasisert
    int *c;
    c = &b;
    a = b + *c; // for å modifisere a so må man bruke a driekte
    b = 2; // kan inilaisere b direkkte.
}