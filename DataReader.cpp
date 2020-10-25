#include "DataReader.hpp"

DataReader::DataReader() {
    fileName_ = "";
    line_ = "";
}

DataReader::~DataReader() {
    fileName_ = "";
    line_ = "";
}

DataReader::DataReader(const std::string& inputFileName) {
    fileName_ = inputFileName;
    line_ = "";
    readFile();
}

void DataReader::readFile() {
    std::ifstream file(fileName_);
    if(file.is_open()) {
        while(getline(file, line_)) {
            if(line_[0] != '/' && line_[1] != '/') {
                pokedex_.push_back(line_);
                separateCategories(line_);
            }
        }
        file.close();
    }
}

void DataReader::separateCategories(const std::string& inputLine) {
    std::string temp = "";
    int currentCategory = 0;
    for(int i = 0; i < inputLine.size(); i++) {
        if(inputLine[i] != '/') {
            temp += inputLine[i];
        } else {
            pokemonNames.push_back(removeSpaces(temp));
            temp = "";
            currentCategory = i;
            break;
        }
    }

    for(int i = currentCategory + 2; i < inputLine.size(); i++) {
        if(inputLine[i] != '/') {
            temp += inputLine[i];
        } else {
            height.push_back(removeSpaces(temp));
            temp = "";
            currentCategory = i;
            break;
        }
    }

    for(int i = currentCategory + 2; i < inputLine.size(); i++) {
        if(inputLine[i] != '/') {
            temp += inputLine[i];
        } else {
            weight.push_back(removeSpaces(temp));
            temp = "";
            currentCategory = i;
            break;
        }
    }

    for(int i = currentCategory + 2; i < inputLine.size(); i++) {
        if(inputLine[i] != '/') {
            temp += inputLine[i];
        } else {
            type.push_back(removeSpaces(temp));
            temp = "";
            currentCategory = i;
            break;
        }
    }

    for(int i = currentCategory + 2; i < inputLine.size(); i++) {
        temp += inputLine[i];
    }
    friends.push_back(removeSpaces(temp));
}

std::string DataReader::removeSpaces(const std::string& inputString) const {
    std::string result;
    int currentCategory = 0;
    for(int i = 0; i < inputString.size(); i++) {
        if(inputString[i] != ' ') {
            result += inputString[i];
        }
    }
    return result;
}