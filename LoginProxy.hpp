#pragma once
#include "LoginImplement.hpp"
#include <string>
#include <iostream>

class LoginProxy : public ILoginPage {
public:
  LoginProxy(const std::string&, const std::string&);
  ~LoginProxy();
  void showMain() override;
private:
  std::string password;
  std::string login;
  LoginImplement* account;
  bool authenticate();
};