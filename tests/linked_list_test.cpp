#include <catch2/catch_test_macros.hpp>
#include <catch2/benchmark/catch_benchmark.hpp>
#include <catch2/benchmark/catch_constructor.hpp>
#include <catch2/generators/catch_generators_range.hpp>

#include "../src/linked_list.hpp"
#include "../src/link.hpp"

TEST_CASE( "it returns Hello World" ) {

    Link gold = Link("Gold");
    Node* node_one = new Node(&gold);
    Link silver = Link("Silver");
    Node* node_two = new Node(&silver);
    node_one->next = node_two;
    Link bronze = Link("Bronze");
    Node* node_three = new Node(&bronze);
    node_two->next = node_three;

    REQUIRE( node_one->link->get_material() == "Gold" );
    REQUIRE( node_two->link->get_material() == "Silver" );
    REQUIRE( node_three->link->get_material() == "Bronze" );

    REQUIRE( node_one->next == node_two );
    REQUIRE( node_two->next == node_three );
    REQUIRE( node_three->next == nullptr );

    
}
