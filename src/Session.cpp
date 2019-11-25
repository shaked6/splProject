//
// Created by shaked on 23/11/2019.
//
#include <iostream>
#include "../include/Action.h"
#include "../include/Session.h"

using namespace std;

User* Session::getActiveUser() const{
    return activeUser;
}

std::vector<Watchable*> Session::getContent() const{
    return content;
}