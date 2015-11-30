set(SOURCES
    "src/test_service.cpp"
    "src/interface.cpp"
)

set(HEADERS
    "include/test_service.h"
)

include_directories(include)
add_library(test_service SHARED ${SOURCES} ${HEADERS})
target_link_libraries(test_service PRIVATE lmscore)
