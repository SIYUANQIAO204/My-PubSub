#include"Event_bus.h"
namespace event
{
    void EventBus::Init()
    {
        subscribers.clear(); // Clear the list of subscribers to initialize the event bus
    }

    void EventBus::subscribe(std::shared_ptr<Subscriber::Subscriber> subscriber)
    {
        subscribers.push_back(subscriber); // Add the subscriber to the list of subscribers
    }

    void EventBus::publish(std::shared_ptr<Event> event)
    {
        for (const auto& subscriber : subscribers)
        {
            subscriber->receiveEvent(event); // Notify each subscriber of the published event
        }
    }
}