#include"Event.h"
#include<iostream>
#include<memory>
namespace Subscriber
{
    class Subscriber
    {
    private:
        int subscriberId;
    public:
        Subscriber(int id) : subscriberId(id) {}
        ~Subscriber() = default; // Default destructor
        
        void receiveEvent(const std::shared_ptr<Event::Event> event);
    };
}