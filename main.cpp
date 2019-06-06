#include <iostream>
#include <string>
#include <vector>

#include "./Operators/Mult.h"
#include "./Operators/Add.h"
#include "./Operators/Sub.h"
#include "./Operators/Div.h"
#include "./Operators/Pow.h"
#include "./Op&Rand/Op.h"
#include "./Op&Rand/Rand.h"
#include "./Sort/sort.hpp"
#include "./Containers/container.hpp"
#include "./decorators/Abs.hpp"
#include "./decorators/Ceil.hpp"
#include "./decorators/Floor.hpp"
#include "./decorators/Paren.h"
#include "./decorators/Trunc.h"
#include "base.hpp"

#include "./Iterator/iterator.h"

#include "visitor.hpp"

#include "base_factory.hpp"
#include "./AbstractFactorySubs/Sci.h"
#include "./AbstractFactorySubs/Precision.h"
#include "./AbstractFactorySubs/StdDouble.h"


int main (){
	
/*	
        Op* op2 = new Op(-2.7);
        Op* op5 = new Op(-5.2);
        Op* op9 = new Op(9.9);
        Mult* M = new Mult(op2, op5);
        Sub* S = new Sub(op9, op5);
        Add* A = new Add(op2, op9);
        Div* D = new Div(op5, op2);
        Pow* P = new Pow(op9, op2);
	DummyRoot* root = new DummyRoot(D);
        
	cout << "Pre-order Iteration" << endl;
	PreOrderIterator* theItr = new PreOrderIterator(root);
	for ( theItr->first(); !theItr->is_done(); theItr->next() ){
		cout << theItr->current()->stringify();
		cout << endl;
	} 
*/
	
	
	Op* op2 = new Op(-6.9);
        Op* op5 = new Op(-5.3);
        Op* op9 = new Op(9.8);
        Mult* M = new Mult(op2, op5);
        Sub* S = new Sub(op9, op5);
        Add* A = new Add(op2, op9);
        Div* D = new Div(op5, op2);
        Pow* P = new Pow(op9, op2);
	Mult* TreeM = new Mult(M, D);
	Add* TreeA = new Add(TreeM, op2); 
	//DummyRoot* root2 = new DummyRoot(TreeA);
	CountVisitor* visitor = new CountVisitor(TreeA);

	cout << endl << endl;
	cout << "Pre-order Iteration" << endl << endl;
	PreOrderIterator* secondItr = new PreOrderIterator(TreeA);
	for ( secondItr->first(); !secondItr->is_done(); secondItr->next() ){
                cout << secondItr->current()->stringify();
		secondItr->current()->accept(visitor);
                cout << endl;
        }	
	cout << endl << endl;

	cout << "All counted nodes: " << endl << endl;
	cout << visitor->op_count() << endl; 
	cout << visitor->rand_count() << endl;
	cout << visitor->add_count() << endl;
	cout << visitor->mult_count() << endl;
	cout << visitor->sub_count() << endl;
	cout << visitor->div_count() << endl;
	cout << visitor->pow_count() << endl;
	cout << visitor->ceil_count() << endl;
	cout << visitor->floor_count() << endl;
	cout << visitor->abs_count() << endl;
	cout << visitor->trunc_count() << endl;
	cout << visitor->paren_count() << endl;

	
	
	
        return 0;

}
