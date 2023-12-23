#include "FrequencyCounter.h"

void FrequencyCounter::readFile(string fileName) {
    char character;
    ifstream inputFile;

    inputFile.open(fileName, ios::in);

    while(inputFile.get(character))
        frequencyMap[character]++;

      cout << item.first << item.second <<endl;

    inputFile.close();
}

const unordered_map<char, int> &FrequencyCounter::getFrequencyMap() const {
    return frequencyMap;
}
