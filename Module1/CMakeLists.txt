#Get current folder name
get_filename_component(name ${CMAKE_CURRENT_SOURCE_DIR} NAME)

set(SRC_DIR ${CMAKE_CURRENT_SOURCE_DIR}/src)
set(HDR_DIR ${CMAKE_CURRENT_SOURCE_DIR}/include)

file(GLOB SRCS "${SRC_DIR}/*.cpp")
add_library(${name} ${SRCS})

target_include_directories(${name} PUBLIC 
	${HDR_DIR}
	${CMAKE_SOURCE_DIR}/GTestBuild/include
)

file(GLOB HDRS "${HDR_DIR}/*.h")
source_group(TREE ${HDR_DIR} PREFIX "Module Header Files" FILES ${HDRS})
