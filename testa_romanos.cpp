#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "romanos.hpp"

TEST_CASE( "Numeros romanos - algarismos unicos", "[romanos]" ) {
    REQUIRE( romanos_para_decimal("I") == 1 );
    REQUIRE( romanos_para_decimal("V") == 5 );
    REQUIRE( romanos_para_decimal("X") == 10 );
    REQUIRE( romanos_para_decimal("L") == 50 );
    REQUIRE( romanos_para_decimal("C") == 100 );
    REQUIRE( romanos_para_decimal("D") == 500 );
    REQUIRE( romanos_para_decimal("M") == 1000 );
}

TEST_CASE( "Numeros romanos - subtracao", "[romanos]" ) {
    REQUIRE( romanos_para_decimal("IV") == 4 );
    REQUIRE( romanos_para_decimal("II") == 2 );
    REQUIRE( romanos_para_decimal("III") == 3 );
    REQUIRE( romanos_para_decimal("VI") == 6 );
    REQUIRE( romanos_para_decimal("IX") == 9 );
    REQUIRE( romanos_para_decimal("VV") == -1 );
    REQUIRE( romanos_para_decimal("XXXX") == -1 );
    REQUIRE( romanos_para_decimal("VX") == -1 );
    REQUIRE( romanos_para_decimal("IL") == -1 );
    REQUIRE( romanos_para_decimal("IL") == -1 );
    REQUIRE( romanos_para_decimal("G") == -1 );
    REQUIRE( romanos_para_decimal("IL") == -1 );
    REQUIRE( romanos_para_decimal("G") == -1 );
    REQUIRE( romanos_para_decimal("IXI") == -1 );
    REQUIRE( romanos_para_decimal("MMXXVI") == 2026 );
    REQUIRE( romanos_para_decimal("IIX") == -1 );
    REQUIRE( romanos_para_decimal("") == -1 );
}