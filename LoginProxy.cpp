#include "LoginProxy.hpp"

LoginProxy::LoginProxy(const std::string& l, const std::string& p) : password(p), login(l), account(new LoginImplement()) {}

LoginProxy::~LoginProxy() {
  delete account;
}

bool LoginProxy::authenticate(){
  std::string pass;
  std::string log;
  std::cin >> log >> pass;
  if(pass == password && log == login) {
    return true;
  }
  else return false;
}

void LoginProxy::showMain() {
  if(authenticate()) {
    account->showMain();
  }
  else {
    std::cout << "Wrong username or password!" << std::endl;
  }
}
