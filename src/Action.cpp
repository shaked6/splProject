//
// Created by shaked on 24/11/2019.
//
#include <iostream>
#include "../include/Action.h"
#include "../include/Session.h"

using namespace std;

void CreateUser::act(Session &sess) {

}

PrintContentList::PrintContentList(std::string errorMsg, ActionStatus status) {}
void PrintContentList::act(Session &sess) {
    int index=1;
    std::string str="";
    for(Watchable* cont: sess.getContent()){
        str=index+". ";
        str+=cont.toString();
        std::cout<<str<< '\n';
        index++;
    }
    complete();
}
std::string PrintContentList::toString() const {}

PrintWatchHistory::PrintWatchHistory(std::string errorMsg, ActionStatus status) {}
void PrintWatchHistory::act(Session &sess) {
    int index=1;
    std::string str="";
    for(Watchable* cont: sess.getActiveUser().get_history()){
        str=index+". ";
        str+=cont.toString();
        std::cout<<str<< '\n';
        index++;
    }
    complete();
}