#ifndef CommandCreateAva_h
#define CommandCreateAva_h

#include "Command.h"

using usermanager::OnlineUserManager;
using charactermanager::CharacterManager;

class CommandCreateAva : public Command
{
public:
	CommandCreateAva(CharacterManager& c, OnlineUserManager& u, WorldManager& w): Command(c, u, w) {}
	
	virtual std::string executePromptReply(const std::string& connectionID, const std::vector<std::string>& fullCommand);
	virtual std::vector<std::string> reassembleCommand(std::string& fullCommand, bool& commandIsValid);
};


#endif