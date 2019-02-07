#ifndef ACCOUNTMANAGER_H
#define ACCOUNTMANAGER_H

#include "User.h"
#include "OnlineUserManager.h"
#include <string>
#include <iostream> 

using usermanager::OnlineUserManager;
using user::User; 

namespace accountmanager {

class AccountManager {
  public:
    enum class ACCOUNT_CODE : uint8_t {
      SUCCESFUL_LOGIN,    
      USER_NOT_FOUND,  
      USER_ALREADY_LOGGED_IN,
      USER_NOT_ONLINE,
      USER_LOGGED_OUT,
      INVALID_USERNAME,
      INVALID_PASSWORD,
      ACCOUNT_CREATED      
    };

  private:

  public:
    AccountManager();
    ~AccountManager();
    
    // Why is the first parameter id?
    static ACCOUNT_CODE login(const std::string&, const std::string&, const std::string& );

    static ACCOUNT_CODE logOut(const std::string&);

    ACCOUNT_CODE createUser(const std::string&, const std::string&);

    bool isOnline();

    void updateOnlineStatus();
    const OnlineUserManager& getUserManager();
    // User* getOnlineUser(std::string);

    };
}

#endif
