#include "pch.h"
#include "CppUnitTest.h"
#include "../lab1_v2/list.h"
#include "../lab1_v2/List.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Tests
{
	TEST_CLASS(Tests)
	{
	public:
		List* list = new List(new Element(1, "Vadim"));
		TEST_METHOD(TestPushBack)
		{
			list->pushBack(new Element(2, "Alexandra"));
			Assert::IsTrue(!list->isEmpty() && list->getSize() == 2);
		}
		TEST_METHOD(TestPushFront)
		{
			list->pushBack(new Element(2, "Alexandra"));
			Assert::IsTrue(!list->isEmpty() && list->getSize() == 2);
		}
		TEST_METHOD(TestPopBack)
		{
			list->pushBack(new Element(2, "Alexandra"));
			list->popBack();
			Assert::IsTrue(!list->isEmpty() && list->getSize() == 1);
		}
		TEST_METHOD(TestPopFront)
		{
			list->pushBack(new Element(2, "Alexandra"));
			list->popFront();
			Assert::IsTrue(!list->isEmpty() && list->getSize() == 1);
		}
		TEST_METHOD(TestInsert)
		{
			list->pushBack(new Element(2, "Alexandra"));
			List* list2 = new List(new Element(3, "Ingvar"));
			list2->pushBack(new Element(4, "Valgard"));
			list->insert(list2, 1);
			Assert::IsTrue(!list->isEmpty() && list->getSize() == 4);
		}
		TEST_METHOD(TestRemove)
		{
			list->pushBack(new Element(2, "Alexandra"));
			list->pushBack(new Element(3, "Ingvar"));
			list->pushBack(new Element(4, "Valgard"));
			list->remove(3);
			Assert::IsTrue(!list->isEmpty() && list->getSize() == 3);
		}
		TEST_METHOD(TestGetSize)
		{
			list->pushBack(new Element(2, "Alexandra"));
			Assert::IsTrue(!list->isEmpty() && list->getSize() == 2);
		}
		TEST_METHOD(TestClear)
		{
			list->clear();
			Assert::IsTrue(list->isEmpty());
		}
		TEST_METHOD(TestSet)
		{
			Element* newMan = new Element(1, "Alexandra");
			list->set(newMan, 1);
			Assert::IsTrue(list->at(1) == newMan);
		}
		TEST_METHOD(TestIsEmpty)
		{
			List* emptyList = new List();
			Assert::IsTrue(!list->isEmpty() && emptyList->isEmpty());
		}
		TEST_METHOD(TestAt)
		{
			Element* newMan1 = new Element(2, "Alexandra");
			Element* newMan2 = new Element(3, "Alex");
			list->pushBack(newMan1);
			list->pushBack(newMan2);
			Assert::IsTrue(list->at(2) == newMan1);
		}
	};
}
