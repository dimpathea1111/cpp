#include <iostream>
#include <service/user.hpp>
#include <model/user.hpp>

using namespace std;

int main()
{
    User user;
    user.setId(1);
    user.setName("koko");
    user.setEmail("lolo");
    user.setPassword("@!#%$^%");
    user.getUserInfo();
    return 0;
}