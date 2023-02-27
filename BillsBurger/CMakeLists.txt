cmake_minimum_required(VERSION 3.24)
project(BillsBurger)

set(CMAKE_CXX_STANDARD 17)

add_executable(BillsBurger main.cpp Drink.cpp Side_Item.cpp Burger.cpp Meal_Order.cpp)
