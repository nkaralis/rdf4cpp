set(CTEST_SOURCE_DIRECTORY "./")
set(CTEST_BINARY_DIRECTORY "build-coverage/")
set(ENV{CXXFLAGS} "--coverage")
set(CTEST_CMAKE_GENERATOR "Unix Makefiles")
set(CTEST_USE_LAUNCHERS 1)
set(CTEST_COVERAGE_COMMAND "gcov")

ctest_start("Experimental")
ctest_configure()
ctest_build()
ctest_test()
ctest_coverage()
