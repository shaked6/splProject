//
// Created by shaked on 25/11/2019.
//
#include <iostream>
#include "../include/Action.h"
#include "../include/Session.h"
#include "../include/Watchable.h"

using namespace std;

int Watchable::getLength() const {
    return this->length;
}

std::vector<std::string> Watchable::getTags() const {
    return this->tags;
}

int Episode::getSeason() const {
    return this->season;
}

int Episode::getEpisodeNumber() const{
    return this->episode;
}

std::string Movie::toString() const {
    std::string str = ""+getName() + " " + to_string(this->getLength())+ " minutes [";
    for(int i=0;i<getTags().size();i++){
        str+=getTags().at(i);
        if(getTags().size()-1) str+=", ";
    }
    str+="]";
    return str;
}

std::string Episode::toString() const {
    std::string str = ""+getName() + " S";
    if(this->getSeason()<10)
        str+="0"+to_string(getSeason())+"E";
    else str+=to_string(getSeason())+"E";

    if(this->getEpisodeNumber()<10)
        str+="0"+to_string(getEpisodeNumber())+" ";
    else str+=to_string(getEpisodeNumber())+" ";

    str+= to_string(this->getLength())+ " minutes [";
    for(int i=0;i<getTags().size();i++){
        str+=getTags().at(i);
        if(getTags().size()-1) str+=", ";
    }
    str+="]";
    return str;
}

std::string Movie::getName() const{
    return this->name;
}

std::string Episode::getName() const{
    return this->seriesName;
}