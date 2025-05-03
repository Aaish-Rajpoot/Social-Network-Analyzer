#include "network.h"
#include <iostream>
using namespace std;

void SocialNetwork::addUser(string user) {
    adj[user] = {};
}

void SocialNetwork::addConnection(string a, string b) {
    adj[a].push_back(b);
    adj[b].push_back(a);
}

void SocialNetwork::showConnections(string user) {
    cout << user << "'s connections:\n";
    for (auto& conn : adj[user])
        cout << "- " << conn << endl;
}
