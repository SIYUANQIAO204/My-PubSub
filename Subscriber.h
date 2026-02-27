#include"Event.h"
#include<iostream>
#include<memory>
#pragma once
namespace Subscriber
{
    class Subscriber
    {
    private:
        int subscriberId;
    public:
        Subscriber(int id) : subscriberId(id) {}
        ~Subscriber() = default; // Default destructor
        void receiveEvent(std::shared_ptr<event::Event> event);
    };
}