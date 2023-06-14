#pragma once

class ILoginPage {
public:
  virtual void showMain() = 0;
  virtual ~ILoginPage() {};
};