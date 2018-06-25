#include "gtest/gtest.h"
#include "aux_test_functions.h"

extern "C"
{
#include "projeto.h"
}

TEST(insere_em_ordem, Array2ElementosInicio)
{
	int v[] = { 2, 1 };
	int v_esperado[] = { 1, 2 };

	insere_em_ordem(v, v[1], sizeof(v)/sizeof(v[0]) - 1);

	ASSERT_TRUE(ArraysMatch(v_esperado, v));
}

TEST(insere_em_ordem, Array2ElementosFim)
{
	int v[] = { 2, 3 };
	int v_esperado[] = { 2, 3 };

	insere_em_ordem(v, v[1], sizeof(v)/sizeof(v[0]) - 1);

	ASSERT_TRUE(ArraysMatch(v_esperado, v));
}

TEST(insere_em_ordem, Array2ElementosFimNaoMexeAposFimDoArray)
{
	int v[] = { 2, 5, 3 };
	int v_esperado[] = { 2, 5, 3 };

	insere_em_ordem(v, v[1], sizeof(v)/sizeof(v[0]) - 2);

	ASSERT_TRUE(ArraysMatch(v_esperado, v));
}

TEST(insere_em_ordem, Array3ElementosInicio)
{
	int v[] = { -3, -2, -4 };
	int v_esperado[] = { -4, -3, -2 };

	insere_em_ordem(v, v[2], sizeof(v)/sizeof(v[0]) - 1);

	ASSERT_TRUE(ArraysMatch(v_esperado, v));
}

TEST(insere_em_ordem, Array3ElementosMeio)
{
	int v[] = { 1, 7, 3 };
	int v_esperado[] = { 1, 3, 7 };

	insere_em_ordem(v, v[2], sizeof(v)/sizeof(v[0]) - 1);

	ASSERT_TRUE(ArraysMatch(v_esperado, v));
}

TEST(insere_em_ordem, Array3ElementosFim)
{
	int v[] = { 0, 16, 18 };
	int v_esperado[] = { 0, 16, 18 };

	insere_em_ordem(v, v[2], sizeof(v)/sizeof(v[0]) - 1);

	ASSERT_TRUE(ArraysMatch(v_esperado, v));
}

TEST(insere_em_ordem, Array3ElementosInicioNaoMexeAposFimDoArray)
{
	int v[] = { 3, 5, 2, 4 };
	int v_esperado[] = { 2, 3, 5, 4 };

	insere_em_ordem(v, v[2], sizeof(v)/sizeof(v[0]) - 2);

	ASSERT_TRUE(ArraysMatch(v_esperado, v));
}

TEST(insere_em_ordem, Array7ElementosInicio)
{
	int v[] = { 3, 7, 8, 10, 12, 15, 1 };
	int v_esperado[] = { 1, 3, 7, 8, 10, 12, 15 };

	insere_em_ordem(v, v[6], sizeof(v)/sizeof(v[0]) - 1);

	ASSERT_TRUE(ArraysMatch(v_esperado, v));
}

TEST(insere_em_ordem, Array7ElementosMeio)
{
	int v[] = { 5, 6, 8, 9, 10, 11, 7 };
	int v_esperado[] = { 5, 6, 7, 8, 9, 10, 11 };

	insere_em_ordem(v, v[6], sizeof(v)/sizeof(v[0]) - 1);

	ASSERT_TRUE(ArraysMatch(v_esperado, v));
}

TEST(insere_em_ordem, Array7ElementosFim)
{
	int v[] = { 1, 2, 3, 5, 8, 13, 21 };
	int v_esperado[] = { 1, 2, 3, 5, 8, 13, 21 };

	insere_em_ordem(v, v[6], sizeof(v)/sizeof(v[0]) - 1);

	ASSERT_TRUE(ArraysMatch(v_esperado, v));
}

TEST(insere_em_ordem, Array7ElementosMeioNaoMexeAposFimDoArray)
{
	int v[] = { 4, 6, 10, 12, 14, 16, 8, 5 };
	int v_esperado[] = { 4, 6, 8, 10, 12, 14, 16, 5 };

	insere_em_ordem(v, v[6], sizeof(v)/sizeof(v[0]) - 2);

	ASSERT_TRUE(ArraysMatch(v_esperado, v));
}
