/*
 * Author: Austin Applegate
 * Date Modified: 2/6/13
 * Lab Number: 2
 * File Name: Translaator.cpp
 */
#ifndef Translator_H
#define Translator_H

#include <fstream>
#include <string>
#include "TranslationTable.h"

template<typename Key, typename Value>

class Translator {
  private:
    TranslationTable<std::string, int> T1;
    TranslationTable<int, std::string> T2;

  public:
    Translator(std::ifstream& in);
    void TanslateMsg(std::ifstream& in);

};
#include "Translator.cpp"
#endif
