set(FILES
	transformer.cpp
	transformer.h)

add_library(transformer MODULE ${FILES})
target_link_libraries(transformer PRIVATE lmscore)
