#include "pch.h"
#include "First.h"

#pragma once
namespace MyASM {
	public ref class First
	{
	public:
		static int IntegerAddSub(int a, int b, int c, int d)
		{
			int result = 0;
			result = IntegerAddSub_(a, b, c, d);
			return result;
		}
	};
}