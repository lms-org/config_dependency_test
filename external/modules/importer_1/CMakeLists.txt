set(FILES
	importer_1.cpp
	importer_1.h)

add_library(importer_1 MODULE ${FILES})
target_link_libraries(importer_1 PRIVATE lmscore test_service)
