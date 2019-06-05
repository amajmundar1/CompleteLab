CMAKE_MINIMUM_REQUIRED(VERSION 2.8)

ADD_SUBDIRECTORY(googletest)

SET(CMAKE_CXX_STANDARD 11)

ADD_EXECUTABLE(lab
   	main.cpp
	./Operators/Mult.cpp
	./Operators/Add.cpp
	./Operators/Sub.cpp
	./Operators/Pow.cpp
	./Operators/Div.cpp
	./Op&Rand/Op.cpp
	./Op&Rand/Rand.cpp
	./Sort/BubbleSort.cpp
	./Sort/SelectionSort.cpp
	./Containers/VectorCont.cpp
	./Containers/ListContainer.cpp
	./decorators/Abs.cpp
	./decorators/Ceil.cpp
	./decorators/Floor.cpp
	./decorators/Trunc.cpp
	./decorators/Paren.cpp
	./PrecisionAndSci/PrecisionOp.cpp
	./PrecisionAndSci/PrecisionRand.cpp
	./PrecisionAndSci/SciOp.cpp
	./PrecisionAndSci/SciRand.cpp
	./AbstractFactorySubs/Precision.cpp
	./AbstractFactorySubs/Sci.cpp
	./AbstractFactorySubs/StdDouble.cpp
	./Iterator/NullIterator.cpp
	./Iterator/BinaryIterator.cpp
	./Iterator/UnaryIterator.cpp
	./Iterator/PreOrderIterator.cpp
)
ADD_EXECUTABLE(test
        unit_test.cpp
	./Operators/Mult.cpp
        ./Operators/Add.cpp
        ./Operators/Sub.cpp
        ./Operators/Pow.cpp
        ./Operators/Div.cpp
        ./Op&Rand/Op.cpp
        ./Op&Rand/Rand.cpp
        ./Sort/BubbleSort.cpp
        ./Sort/SelectionSort.cpp
        ./Containers/VectorCont.cpp
        ./Containers/ListContainer.cpp
	./decorators/Abs.cpp
        ./decorators/Ceil.cpp
        ./decorators/Floor.cpp
	./decorators/Trunc.cpp
	./decorators/Paren.cpp
	./PrecisionAndSci/PrecisionOp.cpp
        ./PrecisionAndSci/PrecisionRand.cpp
	./PrecisionAndSci/SciOp.cpp
        ./PrecisionAndSci/SciRand.cpp
	./AbstractFactorySubs/Precision.cpp
        ./AbstractFactorySubs/Sci.cpp
        ./AbstractFactorySubs/StdDouble.cpp
	./Iterator/NullIterator.cpp
        ./Iterator/BinaryIterator.cpp
        ./Iterator/UnaryIterator.cpp
        ./Iterator/PreOrderIterator.cpp
)
TARGET_LINK_LIBRARIES(test gtest)
TARGET_COMPILE_DEFINITIONS(test PRIVATE gtest_disable_pthreads=ON)

