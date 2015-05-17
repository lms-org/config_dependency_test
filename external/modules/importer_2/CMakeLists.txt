set(FILES
	importer_2.cpp
	importer_2.h)

add_library(importer_2 MODULE ${FILES})
target_link_libraries(importer_2 PRIVATE lms)
