// tests.cpp
#include "Card.h"
#include "PersonWithObjects.h"
#include <gtest/gtest.h>


		
 		TEST(GameWithOjects,Test1)
		{
			PersonWithObjects p("Test1");
			Card c = Card(1,2);
			
			bool success = p.AddCardToHand(std::move(c));
			
			EXPECT_TRUE(success);

			

		}
 		TEST(GameWithOjects,Test2)
		{
			PersonWithObjects p("Test2");
			Card c = Card(1,2);
			bool success = p.HasCardInHand(1,2);
			EXPECT_TRUE(success);
		}
		

 
int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
