set( CMAKE_C_FLAGS "-Wall -g" )

file( GLOB SRCS *.cpp *.hpp )

add_executable( tets1 ${SRCS} )

target_link_libraries(tets1 ${Boost_LIBRARIES} )