#define CATCH_CONFIG_MAIN
#define CATCH_CONFIG_ENABLE_BENCHMARKING
#include "catch.hpp"

TEST_CASE("Catch operability", "[simple]"){
    REQUIRE(1+1 == 2);
}

#include "funcs.h"

TEST_CASE("test 1, file", "[simple]"){
    std::ofstream inputPrepare;
    inputPrepare.open ("input.txt", std::ofstream::trunc);
    inputPrepare<<
                "5 3\n"
                "1 2 1 3 2"
            ;
    inputPrepare.close();

    std::ifstream input( "input.txt", std::ofstream::in);
    std::ofstream output("output.txt", std::ofstream::trunc);
    parseFile(input,output);
    input.close();
    output.close();

    std::ifstream outputCheck("output.txt", std::ofstream::in);
    std::stringstream buffer;
    buffer<<outputCheck.rdbuf();
    outputCheck.close();
    INFO(buffer.str());
    REQUIRE(((buffer.str() ==
            "2 4") || (buffer.str() ==
                     "3 5"))
    );
}

TEST_CASE("test 2", ""){
    std::stringstream input(
            "6 4\n"
            "2 4 2 3 3 1"
    );
    std::stringstream output;
    parseFile(input,output);
    REQUIRE(output.str() ==
            "2 6"
    );
}

TEST_CASE("2 lines of uniques", ""){
    std::stringstream input(
            "13 3\n"
            "1 2 3 3 3 3 3 3 3 3 1 2 3"
    );
    std::stringstream output;
    parseFile(input,output);
    INFO(output.str());
    REQUIRE(((output.str() ==
            "1 3") || (output.str() ==
                       "11 13"))
    );
}

TEST_CASE("1 tree", ""){
    std::stringstream input(
            "1 1\n"
            "1"
    );
    std::stringstream output;
    parseFile(input,output);
    REQUIRE(output.str() ==
            "1 1"
    );
}
