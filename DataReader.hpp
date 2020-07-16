#ifndef DataReader_hpp
#define DataReader_hpp

#include <string>
#include <fstream>

class DataReader {
public:
	DataReader();
	~DataReader();
	DataReader(const std::string &inputFileName);

	std::vector<std::string> getPokemonData() const;
	std::vector<std::string> getFriendsData() const;

private:
	void readFile(); //read the inputfile and generate pokemonData and firendsData

	std::string fileName_;
	std::vector<std::string> pokemonData;
	std::vector<std::string> friendsData_;
};

#endif