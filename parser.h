//
// Created by Pablo Brenes on 24 mar 2018.
//

#ifndef PARSER_PARSER_H
#define PARSER_PARSER_H

#include "token.h"

bool iniciarScanner(char archivoFuente[]);
bool finalizarScanner();
token demeToken();

#endif //PARSER_PARSER_H
