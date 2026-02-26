#include"HitEvent.h"
#include"Subscriber.h"
#include<vector>
#include<memory>
namespace Event
{
    class EventBus
    {
        private:
            std::vector<std::shared_ptr<Subscriber::Subscriber>> subscribers; // List of subscribers to the event bus

        public:
            void Init();
            void subscribe(std::shared_ptr<Subscriber::Subscriber> subscriber); // Method to add a subscriber to the event bus;
            void publish(std::shared_ptr<Event> event); // Method to publish an event to all subscribers
    };
}