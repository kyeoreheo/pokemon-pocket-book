#ifndef DataReader_hpp
#define DataReader_hpp

#include <string>
#include <fstream>
#include <vector>

class DataReader {
public:
	DataReader();
	~DataReader();
	DataReader(const std::string &inputFileName);
	std::vector<std::string> pokemonNames;
	std::vector<std::string> height;
	std::vector<std::string> weight;
	std::vector<std::string> type;
	std::vector<std::string> friends;
	std::string removeSpaces(const std::string& inputString) const;

private:
	void readFile();
	void separateCategories(const std::string& inputLine);

	std::string fileName_;
	std::string line_;
	std::vector<std::string> pokedex_;
};

#endif