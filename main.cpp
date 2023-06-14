#include "LoginProxy.hpp"

int main() {
    ILoginPage* user = new LoginProxy {"abc", "def"};

    user->showMain();

    delete user;
  
    return 0;
}
