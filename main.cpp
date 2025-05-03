#include "network.h"
int main() {
    SocialNetwork sn;
    sn.addUser("Aaish");
    sn.addUser("Ahmed");
    sn.addConnection("Aaish", "Ahmed");
    sn.showConnections("Aaish");
    return 0;
}
