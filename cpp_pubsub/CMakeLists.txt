cmake_minimum_required(VERSION 3.8)
project(cpp_pubsub)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# !!! find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(std_msgs REQUIRED)

# !!! executable named talker to run publisher node
add_executable(talker src/publisher_member_function.cpp)
ament_target_dependencies(talker rclcpp std_msgs)

# !!! executable name listener to run subscriber node
add_executable(listener src/subscriber_member_function.cpp)
ament_target_dependencies(listener rclcpp std_msgs)
  
# !!! executable name pub to run subscriber node
add_executable(pub src/basic_connection.cpp)
ament_target_dependencies(pub rclcpp std_msgs)

# !!! executable name basic to run subscriber node
add_executable(basic src/motors.cpp)
ament_target_dependencies(basic rclcpp std_msgs)

# !!! install part so ros can find executable
install(TARGETS
  talker
  listener
  pub
  basic
  DESTINATION lib/${PROJECT_NAME})

ament_package()
