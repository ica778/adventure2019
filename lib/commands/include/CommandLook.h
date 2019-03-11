#ifndef CommandLook_h
#define CommandLook_h

#include "Command.h"
#include <boost/lexical_cast.hpp>

using boost::lexical_cast;
using boost::bad_lexical_cast;
using usermanager::OnlineUserManager;
using charactermanager::CharacterManager;

class CommandLook : public Command
{
public:
	CommandLook(CharacterManager& c, OnlineUserManager& u, WorldManager& w): Command(c, u, w) {}
	
	virtual void executeInHeartbeat(const std::string& username, const std::vector<std::string>& fullCommand);
	virtual std::vector<std::string> reassembleCommand(std::string& fullCommand, bool& commandIsValid);
};


#endif