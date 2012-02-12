#ifndef ABSFUNCTION_H
#define ABSFUNCTION_H

#include "function.h"
#include "context.h"

class AbsFunction : public Function
{
public:
	AbsFunction();
	Value* evaluate(Context*);
};

#endif // ABSFUNCTION_H
