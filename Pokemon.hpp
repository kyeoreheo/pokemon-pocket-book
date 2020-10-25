#ifndef Pokemon_hpp
#define Pokemon_hpp

#include <string>
#include <vector>

class Pokemon {
public:
	Pokemon();
	~Pokemon();
	Pokemon(const std::string &name, const std::string &height, const std::string &weight, const std::string &type, const std::string &friends);
	
	std::string getName() const;
	void addFriend(const Pokemon &name);
	void removeFriendByName(const std::string &name);
	void clearFriends();
	int numberOfFriends();
	void info();
	void separateFriends(const std::string &friendName);
	std::vector<Pokemon> friends_;
	std::vector<std::string> friendNames_;

private:	
	std::string name_;
	std::string height_;
	std::string weight_;
	std::string type_;
};

#endif