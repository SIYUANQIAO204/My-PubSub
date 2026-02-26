#include"subscriber.h"

namespace Subscriber
{
    void Subscriber::receiveEvent(const std::shared_ptr<Event::Event> event)
    {
        std::cout << "Subscriber " << subscriberId << " received an event." << std::endl;
    }
}