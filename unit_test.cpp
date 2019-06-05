#include "./Operators/Mult.h"
#include "./Operators/Add.h"
#include "./Operators/Sub.h"
#include "./Operators/Pow.h"
#include "./Operators/Div.h"
#include "./Op&Rand/Op.h"
#include "./Op&Rand/Rand.h"
#include "./Sort/sort.hpp"
#include "./Containers/container.hpp"
#include "./decorators/Abs.hpp"
#include "./decorators/Ceil.hpp"
#include "./decorators/Floor.hpp"
#include "./decorators/Paren.h"
#include "./decorators/Trunc.h"
#include "./PrecisionAndSci/PrecisionOp.h"
#include "./PrecisionAndSci/PrecisionRand.h"
#include "./PrecisionAndSci/SciOp.h"
#include "./PrecisionAndSci/SciRand.h"

#include "base_factory.hpp"
#include "./AbstractFactorySubs/Precision.h"
#include "./AbstractFactorySubs/Sci.h"
#include "./AbstractFactorySubs/StdDouble.h"

#include "base.hpp"
#include <string>
#include <sstream>
#include <iomanip>

using namespace std;

#include "gtest/gtest.h"

TEST(PreciseTestSet, PreciseOpTest)
{
    PrecisionOp* seven = new PrecisionOp(345.456320976);
    EXPECT_EQ(seven->stringify(), "345.46");
}
TEST(PreciseTestSet, PreciseRandTest) {
	PrecisionRand* randomVal = new PrecisionRand();
	ostringstream OS;
	OS << setprecision(2);
	OS << std::fixed;
	OS << randomVal->evaluate();
	EXPECT_EQ(randomVal->stringify(), OS.str());
}

TEST(SciTestSet, SciOpTest)
{
	double testVal = 70000000000000000;
	SciOp* test = new SciOp(testVal);
	ostringstream Test;
	Test << scientific;
	Test << testVal;
	EXPECT_EQ(test->stringify(), Test.str());
}

TEST(SciTestSet, SciRandTest)
{
	SciRand* test = new SciRand();
	ostringstream Test;
	Test << scientific;
	Test << test->evaluate();
	EXPECT_EQ(test->stringify(), Test.str());
}
//TEST(AbstractPreciseTestSet, PreciseOpTest){
	

TEST(AbstractSciTestSet, SciOpFactoryTest)
{
	double testVal = 70000000000000000;
	BaseFactory* test = new Sci;
	Op* op = test->createOp(testVal);
	ostringstream Test;
        Test << scientific;
        Test << testVal;
        EXPECT_EQ(op->stringify(), Test.str());
}

TEST(AbstractSciTestSet, SciRandFactoryTest)
{
	BaseFactory* test = new Sci;
	Rand* rand = test->createRand();
	ostringstream Test;
        Test << scientific;
        Test << rand->evaluate();
        EXPECT_EQ(rand->stringify(), Test.str());
}
TEST(AbstractStdTestSet, StdOpFactoryTest) {
	double testVal = 70.00076986;
	BaseFactory* test = new StdDouble;
	Op* op = test->createOp(testVal);
	ostringstream Test;
	Test << std::fixed;
	Test << testVal;
	EXPECT_EQ(op->stringify(), Test.str());
}
TEST(AbstractStdTestSet, StdRandFactoryTest) {
        BaseFactory* test = new StdDouble;
        Rand* rand = test->createRand();
        ostringstream Test;
	Test << std::fixed;
        Test << rand->evaluate();
        EXPECT_EQ(rand->stringify(), Test.str());
}
TEST(AbstractPrecisionTestSet, PrecisionOpFactoryTest) {
	double testVal = 70.678584;
	BaseFactory* test = new Precision;
	Op* op = test->createOp(testVal);
	ostringstream Test;
	Test << std::fixed;
	Test << setprecision(2);
	Test << testVal;
	EXPECT_EQ(op->stringify(), Test.str());
}
TEST(AbstractPrecisionTestSet, PrecisionRandFactoryTest) {
        BaseFactory* test = new Precision;
        Rand* rand = test->createRand();
        ostringstream Test;
        Test << std::fixed;
        Test << setprecision(2);
        Test << rand->evaluate();
        EXPECT_EQ(rand->stringify(), Test.str());
}

	


int main() {
  ::testing::InitGoogleTest();
  return RUN_ALL_TESTS();
}
