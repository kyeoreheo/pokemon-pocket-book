#ifndef Account_hpp
#define Account_hpp

#include <string>
#include <vector>

class Pokemon {
public:
	Account();
	~Account();
	Account(const std::string &name, const std::string &height, const std::string &weight, const std::string &type);
	
	void addFriend();
	void removeFriendByName(const std::string &name);
	void clearFriends();
	int numberOfFriends();
	void info(); // dispay "name: -- \n height: -- \n weight: -- \n type: -- \n friends --, -- ..."

private:	
	std::string name_;
	std::string height_;
	std::string weight_;
	std::string type_;
	std::vector<Pokemon> friends_;
};

#endif