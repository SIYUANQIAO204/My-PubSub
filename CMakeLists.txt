cmake_minimum_required(VERSION 3.29)
project(PUBSUB)

set(CMAKE_CXX_STANDARD 17)
add_executable(PUBSUB
    main.cpp
    Event.h
    HitEvent.h
    Event_bus.cpp
    Subscriber.cpp
    Publisher.h
    Subscriber.h
)