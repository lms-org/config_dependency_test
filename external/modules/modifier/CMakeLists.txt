set(FILES
	modifier.cpp
	modifier.h)

add_library(modifier MODULE ${FILES})
target_link_libraries(modifier PRIVATE lmscore)
