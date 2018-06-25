#include "gtest/gtest.h"
#include "aux_test_functions.h"

extern "C"
{
#include "projeto.h"
}

TEST(ordena_dois_elementos, ElementosEmOrdem)
{
	int v[] = { 1, 2 };
	int v_esperado[] = { 1, 2 };

	ordena_dois_elementos(v);

	ASSERT_TRUE(ArraysMatch(v_esperado, v));
}

TEST(ordena_dois_elementos, ElementosEmOrdemNaoMexeAposFimDoArray)
{
	int v[] = { 1, 2, 1 };
	int v_esperado[] = { 1, 2, 1 };

	ordena_dois_elementos(v);

	ASSERT_TRUE(ArraysMatch(v_esperado, v));
}

TEST(ordena_dois_elementos, ElementosForaDeOrdem)
{
	int v[] = { -1, -2 };
	int v_esperado[] = { -2, -1 };

	ordena_dois_elementos(v);

	ASSERT_TRUE(ArraysMatch(v_esperado, v));
}

TEST(ordena_dois_elementos, ElementosForaDeOrdemNaoMexeAposFimDoArray)
{
	int v[] = { -1, -2, -1 };
	int v_esperado[] = { -2, -1, -1 };

	ordena_dois_elementos(v);

	ASSERT_TRUE(ArraysMatch(v_esperado, v));
}

TEST(ordena_dois_elementos, ElementosIguais)
{
	int v[] = { 0, 0 };
	int v_esperado[] = { 0, 0 };

	ordena_dois_elementos(v);

	ASSERT_TRUE(ArraysMatch(v_esperado, v));
}

TEST(ordena_dois_elementos, ElementosIguaisNaoMexeAposFimDoArray)
{
	int v[] = { 0, 0, -1 };
	int v_esperado[] = { 0, 0, -1 };

	ordena_dois_elementos(v);

	ASSERT_TRUE(ArraysMatch(v_esperado, v));
}