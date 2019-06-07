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

#include "./Iterator/iterator.h"
#include "visitor.hpp" 

#include "base.hpp"
#include <string>
#include <sstream>
#include <iomanip>

using namespace std;

#include "gtest/gtest.h"


TEST(VisitorTestSet, AddTest)
{

	Op* op2 = new Op(-6.9);
        Op* op5 = new Op(-5.3);
        Add* A = new Add(op2, op5);
	CountVisitor* visitor = new CountVisitor(A);
	A->accept(visitor);
	EXPECT_EQ(visitor->add_count(), 1);
}


TEST(VisitorTestSet, SubTest)
{
	Op* seven = new Op(7);
	Op* four = new Op(4);
	Sub* sub = new Sub(seven, four);
	CountVisitor* visitor = new CountVisitor(sub);
	sub->accept(visitor);
	EXPECT_EQ(visitor->sub_count(), 1);
}

TEST(VisitorTestSet, DivTest)
{
	Op* seven = new Op(7);
	Op* four = new Op(4);
	Div* div = new Div(seven, four);
	CountVisitor* visitor = new CountVisitor(div);
	div->accept(visitor);
	EXPECT_EQ(visitor->div_count(), 1);
}

TEST(VisitorTestSet, MultTest)
{
	Op* seven = new Op(7);
	Op* four = new Op(4);
	Mult* mult = new Mult(seven, four);
	CountVisitor* visitor = new CountVisitor(mult);
	mult->accept(visitor);
	EXPECT_EQ(visitor->mult_count(), 1);
}

TEST(VisitorTestSet, OpTest)
{
	Op* seven = new Op(7);
	Op* four = new Op(4);
	Add* add = new Add(seven, four);
	CountVisitor* visitor = new CountVisitor(add);
	add->accept(visitor);
	EXPECT_EQ(visitor->op_count(), 2);
}

int main() {
  ::testing::InitGoogleTest();
  return RUN_ALL_TESTS();
}
