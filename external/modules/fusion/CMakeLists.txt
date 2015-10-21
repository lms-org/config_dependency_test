set(FILES
	fusion.cpp
	fusion.h)

add_library(fusion MODULE ${FILES})
target_link_libraries(fusion PRIVATE lmscore)
