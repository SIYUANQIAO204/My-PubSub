#include"subscriber.h"

namespace Subscriber
{
    void Subscriber::receiveEvent(std::shared_ptr<event::Event> event)
    {
        std::cout << "Subscriber " << subscriberId << " received an event." << std::endl;
    }
}