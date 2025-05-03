#ifndef NETWORK_H
#define NETWORK_H
#include <unordered_map>
#include <vector>
#include <string>
using namespace std;

class SocialNetwork {
    unordered_map<string, vector<string>> adj;
public:
    void addUser(string user);
    void addConnection(string a, string b);
    void showConnections(string user);
};

#endif
#pragma once
