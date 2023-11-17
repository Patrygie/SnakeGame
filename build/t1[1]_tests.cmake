add_test([=[HelloTest.BasicAssertions]=]  /home/patrygie/CppProjektyGitHub/Snake/build/t1 [==[--gtest_filter=HelloTest.BasicAssertions]==] --gtest_also_run_disabled_tests)
set_tests_properties([=[HelloTest.BasicAssertions]=]  PROPERTIES WORKING_DIRECTORY /home/patrygie/CppProjektyGitHub/Snake/build SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
set(  t1_TESTS HelloTest.BasicAssertions)
