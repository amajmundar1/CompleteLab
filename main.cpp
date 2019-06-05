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
#include "base_factory.hpp"
#include "./AbstractFactorySubs/Sci.h"
#include "./AbstractFactorySubs/Precision.h"
#include "./AbstractFactorySubs/StdDouble.h"


int main (){
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

/*

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
	DummyRoot* root2 = new DummyRoot(TreeA);

	cout << "Second Pre-order Iteration" << endl;
	PreOrderIterator* secondItr = new PreOrderIterator(root2);
	for ( secondItr->first(); !secondItr->is_done(); secondItr->next() ){
                cout << secondItr->current()->stringify();
                cout << endl;
        }	
*/
/*
        Mult* TreeM = new Mult(M, D);
        Add* TreeA = new Add(TreeM, op2);
	
	Op* seven = new Op(7);
	Op* five = new Op(5);
	Op* four = new Op(4);
	Sub* Tree1 = new Sub(seven, four);
	Paren* paren = new Paren(Tree1);
	Trunc* trunc = new Trunc(Tree1);
	Add* TreeParen = new Add(five, paren);
	Add* TreeTrunc = new Add(five, trunc);

	BaseFactory* SciFactory = new Sci;
	Op* SevenMill = SciFactory->createOp(7000000.00);
	Rand* randFac = SciFactory->createRand();

	BaseFactory* Prec = new Precision;
        Op* SevenMill2 = Prec->createOp(7000000.00);
        Rand* randFac2 = Prec->createRand();

	BaseFactory* Std = new StdDouble;
        Op* SevenMill3 = Std->createOp(7000000.00);
        Rand* randFac3 = Std->createRand();
		

	VectorContainer* vector = new VectorContainer();

	vector->add_element(S);
	vector->add_element(D);
	vector->add_element(P);
	vector->add_element(A);
	vector->add_element(op2);
	vector->add_element(op5);
	vector->add_element(op9);

	cout << "Vector output: " << endl;
	vector->print();

	cout << endl << endl;
	cout << "Absolute value of the sixth element: " << endl;
	Abs* Five2 = new Abs(op5);
	cout << Five2->evaluate() << endl;

	cout << endl << endl;
	cout << "Ceiling of the third element: " << endl;
        Ceil* P2 = new Ceil(P);
        cout << P2->evaluate() << endl;
	
	cout << endl << endl;
	cout << "Floor of the fourth element: " << endl;
        Floor* A2 = new Floor(A);
        cout << A2->evaluate() << endl;

	cout << endl << endl;
	cout << "5.000000+Paren(7.000000-4.000000): " << endl;
	cout << TreeParen->stringify() << endl;

	cout << endl << endl;
	cout << "5.000000+Trunc(7.000000-4.000000): " << endl;
	cout << TreeTrunc->stringify() << endl;

	cout << endl << endl;
	cout << "Create Op using Abstract Factory class to Display Scientific Notation" << endl;
	cout << "Variable before Scientific: " << SevenMill->evaluate() << endl;
	cout << "Variable after Scientific: " << SevenMill->stringify() << endl;

	cout << endl << endl;
	cout << "Create Rand using Abstract Factory class to Display Scientific Notation" << endl;
        cout << "Variable before Scientific: " << randFac->evaluate() << endl;
        cout << "Variable after Scientific: " << randFac->stringify() << endl;

cout << endl << endl;
        cout << "Create Op using Abstract Factory class to Display Precision" << endl;
        cout << "Variable before Precision: " << SevenMill2->evaluate() << endl;
        cout << "Variable after Precision: " << SevenMill2->stringify() << endl;

        cout << endl << endl;
        cout << "Create Rand using Abstract Factory class to Display Precision" << endl;
        cout << "Variable before Precision: " << randFac2->evaluate() << endl;
        cout << "Variable after Precision: " << randFac2->stringify() << endl;

	cout << endl << endl;
        cout << "Create Op using Abstract Factory class to Display Double" << endl;
        cout << "Variable before Double: " << SevenMill3->evaluate() << endl;
        cout << "Variable after Double: " << SevenMill3->stringify() << endl;

        cout << endl << endl;
        cout << "Create Rand using Abstract Factory class to Display Double" << endl;
        cout << "Variable before Double: " << randFac3->evaluate() << endl;
        cout << "Variable after Double: " << randFac3->stringify() << endl;
		
	

>>>>>>> d2357323c48d26739d8fb8a796a5703052ce957b
*/
	
        return 0;

}
