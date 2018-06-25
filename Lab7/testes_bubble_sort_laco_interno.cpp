#include "gtest/gtest.h"
#include "aux_test_functions.h"

extern "C"
{
#include "projeto.h"
}

TEST(bubble_sort_laco_interno, Array2ElementosEmOrdem)
{
	int v[] = { 1, 2 };
	int v_esperado[] = { 1, 2 };

	bubble_sort_laco_interno(v, sizeof(v)/sizeof(v[0]));

	ASSERT_TRUE(ArraysMatch(v_esperado, v));
}

TEST(bubble_sort_laco_interno, Array2ElementosForaDeOrdem)
{
	int v[] = { 3, 2 };
	int v_esperado[] = { 2, 3 };

	bubble_sort_laco_interno(v, sizeof(v)/sizeof(v[0]));

	ASSERT_TRUE(ArraysMatch(v_esperado, v));
}

TEST(bubble_sort_laco_interno, Array3ElementosEmOrdem)
{
	int v[] = { 3, 5, 7 };
	int v_esperado[] = { 3, 5, 7 };

	bubble_sort_laco_interno(v, sizeof(v)/sizeof(v[0]));

	ASSERT_TRUE(ArraysMatch(v_esperado, v));
}

TEST(bubble_sort_laco_interno, Array3ElementosPermutacao1)
{
	int v[] = { 3, 7, 5 };
	int v_esperado[] = { 3, 5, 7 };

	bubble_sort_laco_interno(v, sizeof(v)/sizeof(v[0]));

	ASSERT_TRUE(ArraysMatch(v_esperado, v));
}

TEST(bubble_sort_laco_interno, Array3ElementosPermutacao2)
{
	int v[] = { 5, 3, 7 };
	int v_esperado[] = { 3, 5, 7 };

	bubble_sort_laco_interno(v, sizeof(v)/sizeof(v[0]));

	ASSERT_TRUE(ArraysMatch(v_esperado, v));
}

TEST(bubble_sort_laco_interno, Array3ElementosPermutacao3)
{
	int v[] = { 5, 7, 3 };
	int v_esperado[] = { 5, 3, 7 };

	bubble_sort_laco_interno(v, sizeof(v)/sizeof(v[0]));

	ASSERT_TRUE(ArraysMatch(v_esperado, v));
}

TEST(bubble_sort_laco_interno, Array3ElementosPermutacao4)
{
	int v[] = { 7, 3, 5 };
	int v_esperado[] = { 3, 5, 7 };

	bubble_sort_laco_interno(v, sizeof(v)/sizeof(v[0]));

	ASSERT_TRUE(ArraysMatch(v_esperado, v));
}

TEST(bubble_sort_laco_interno, Array3ElementosPermutacao5)
{
	int v[] = { 7, 5, 3 };
	int v_esperado[] = { 5, 3, 7 };

	bubble_sort_laco_interno(v, sizeof(v)/sizeof(v[0]));

	ASSERT_TRUE(ArraysMatch(v_esperado, v));
}

TEST(bubble_sort_laco_interno, Array5ElementosEmOrdem)
{
	int v[] = { 6, 1, 2, 3, 4 };
	int v_esperado[] = { 1, 2, 3, 4, 6 };

	bubble_sort_laco_interno(v, sizeof(v)/sizeof(v[0]));

	ASSERT_TRUE(ArraysMatch(v_esperado, v));
}

TEST(bubble_sort_laco_interno, Array5ElementosPrimeiroMaior)
{
	int v[] = { 6, 1, 2, 3, 4 };
	int v_esperado[] = { 1, 2, 3, 4, 6 };

	bubble_sort_laco_interno(v, sizeof(v)/sizeof(v[0]));

	ASSERT_TRUE(ArraysMatch(v_esperado, v));
}

TEST(bubble_sort_laco_interno, Array5ElementosAleatorio)
{
	int v[] = { 3, 2, 8, 4, 0 };
	int v_esperado[] = { 2, 3, 4, 0, 8 };

	bubble_sort_laco_interno(v, sizeof(v)/sizeof(v[0]));

	ASSERT_TRUE(ArraysMatch(v_esperado, v));
}