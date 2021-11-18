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
			list->pushBack(2, "Alexandra");
			Assert::IsTrue(!list->isEmpty() && list->getSize() == 2);
		}
		TEST_METHOD(TestPushFront)
		{
			list->pushBack(2, "Alexandra");
			Assert::IsTrue(!list->isEmpty() && list->getSize() == 2);
		}
		TEST_METHOD(TestPopBack)
		{
			list->pushBack(2, "Alexandra");
			list->popBack();
			Assert::IsTrue(!list->isEmpty() && list->getSize() == 1);
		}
		TEST_METHOD(TestPopFront)
		{
			list->pushBack(2, "Alexandra");
			list->popFront();
			Assert::IsTrue(!list->isEmpty() && list->getSize() == 1);
		}
		TEST_METHOD(TestInsert)
		{
			list->pushBack(2, "Alexandra");
			List* list2 = new List(new Element(3, "Ingvar"));
			list2->pushBack(4, "Valgard");
			list->insert(list2, 1);
			Assert::IsTrue(!list->isEmpty() && list->getSize() == 4);
		}
		TEST_METHOD(TestRemove)
		{
			list->pushBack(2, "Alexandra");
			list->pushBack(3, "Ingvar");
			list->pushBack(4, "Valgard");
			list->remove(3);
			Assert::IsTrue(!list->isEmpty() && list->getSize() == 3);
		}
		TEST_METHOD(TestGetSize)
		{
			list->pushBack(2, "Alexandra");
			Assert::IsTrue(!list->isEmpty() && list->getSize() == 2);
		}
		TEST_METHOD(TestClear)
		{
			list->clear();
			Assert::IsTrue(list->isEmpty());
		}
		TEST_METHOD(TestSet)
		{
			list->set(1, "Alexandra", 1);
			Assert::IsTrue(list->at(1)->getName() == "Alexandra");
		}
		TEST_METHOD(TestIsEmpty)
		{
			List* emptyList = new List();
			Assert::IsTrue(!list->isEmpty() && emptyList->isEmpty());
		}
		TEST_METHOD(TestAt)
		{
			list->pushBack(2, "Alexandra");
			list->pushBack(3, "Alex");
			Assert::IsTrue(list->at(2)->getName() == "Alex");
		}
		TEST_METHOD(oneManPopBack)
		{
			List* list = new List();
			list->pushBack(0,"Alexandra");
			list->popBack();
			Assert::IsTrue(list->getElement()->getName() == "Alexandra");
		}
		TEST_METHOD(emptyPushBack)
		{
			List* list = new List();
			list->pushBack(0, "Alexandra");
			Assert::IsTrue(list->getElement()->getName() == "Alexandra");
		}
		TEST_METHOD(emptyPushFront)
		{
			List* list = new List();
			list->pushFront(0, "Alexandra");
			Assert::IsTrue(list->getElement()->getName() == "Alexandra");
		}
	};
}
