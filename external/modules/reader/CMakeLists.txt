set(FILES
	reader.cpp
	reader.h)

add_library(reader MODULE ${FILES})
target_link_libraries(reader PRIVATE lmscore)
