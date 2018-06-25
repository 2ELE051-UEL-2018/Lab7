#ifndef TESTES_ORDENACAO_H
#define TESTES_ORDENACAO_H

#include <ctime>
#include "gtest/gtest.h"
#include "aux_test_functions.h"

extern "C"
{
#include "projeto.h"
}

#ifndef FUNCAO_ORDENACAO
#error Necessario definir FUNCAO_ORDENACAO para a funcao de ordenacao a ser testada
#endif

TEST(FUNCAO_ORDENACAO, Array1Elemento)
{
	int v[] = { 0 };
	int v_esperado[sizeof(v)/sizeof(v[0])];

	ordenacao_generica(v, v_esperado, sizeof(v)/sizeof(v[0]));
	FUNCAO_ORDENACAO(v, sizeof(v)/sizeof(v[0]));

	ASSERT_TRUE(ArraysMatch(v_esperado, v));
}

TEST(FUNCAO_ORDENACAO, Array2ElementosInicio)
{
	int v[] = { 2, 1 };
	int v_esperado[sizeof(v)/sizeof(v[0])];

	ordenacao_generica(v, v_esperado, sizeof(v)/sizeof(v[0]));
	FUNCAO_ORDENACAO(v, sizeof(v)/sizeof(v[0]));

	ASSERT_TRUE(ArraysMatch(v_esperado, v));
}

TEST(FUNCAO_ORDENACAO, Array2ElementosFim)
{
	int v[] = { 2, 3 };
	int v_esperado[sizeof(v)/sizeof(v[0])];

	ordenacao_generica(v, v_esperado, sizeof(v)/sizeof(v[0]));
	FUNCAO_ORDENACAO(v, sizeof(v)/sizeof(v[0]));

	ASSERT_TRUE(ArraysMatch(v_esperado, v));
}

TEST(FUNCAO_ORDENACAO, Array2ElementosFimNaoMexeAposFimDoArray)
{
	int v[] = { 2, 5, 3 };
	int v_esperado[sizeof(v)/sizeof(v[0])];
	v_esperado[sizeof(v)/sizeof(v[0]) - 1] = v[sizeof(v)/sizeof(v[0]) - 1];

	ordenacao_generica(v, v_esperado, sizeof(v)/sizeof(v[0]) - 1);
	FUNCAO_ORDENACAO(v, sizeof(v)/sizeof(v[0]) - 1);

	ASSERT_TRUE(ArraysMatch(v_esperado, v));
}

TEST(FUNCAO_ORDENACAO, Array2ElementosIguais)
{
	int v[] = { 0, 0 };
	int v_esperado[sizeof(v)/sizeof(v[0])];

	ordenacao_generica(v, v_esperado, sizeof(v)/sizeof(v[0]));
	FUNCAO_ORDENACAO(v, sizeof(v)/sizeof(v[0]));

	ASSERT_TRUE(ArraysMatch(v_esperado, v));
}

TEST(FUNCAO_ORDENACAO, Array3ElementosInicio)
{
	int v[] = { -3, -2, -4 };
	int v_esperado[sizeof(v)/sizeof(v[0])];

	ordenacao_generica(v, v_esperado, sizeof(v)/sizeof(v[0]));
	FUNCAO_ORDENACAO(v, sizeof(v)/sizeof(v[0]));

	ASSERT_TRUE(ArraysMatch(v_esperado, v));
}

TEST(FUNCAO_ORDENACAO, Array3ElementosMeio)
{
	int v[] = { 1, 7, 3 };
	int v_esperado[sizeof(v)/sizeof(v[0])];

	ordenacao_generica(v, v_esperado, sizeof(v)/sizeof(v[0]));
	FUNCAO_ORDENACAO(v, sizeof(v)/sizeof(v[0]));

	ASSERT_TRUE(ArraysMatch(v_esperado, v));
}

TEST(FUNCAO_ORDENACAO, Array3ElementosFim)
{
	int v[] = { 0, 16, 18 };
	int v_esperado[sizeof(v)/sizeof(v[0])];

	ordenacao_generica(v, v_esperado, sizeof(v)/sizeof(v[0]));
	FUNCAO_ORDENACAO(v, sizeof(v)/sizeof(v[0]));

	ASSERT_TRUE(ArraysMatch(v_esperado, v));
}

TEST(FUNCAO_ORDENACAO, Array3ElementosInicioNaoMexeAposFimDoArray)
{
	int v[] = { 3, 5, 2, 4 };
	int v_esperado[sizeof(v)/sizeof(v[0])];
	v_esperado[sizeof(v)/sizeof(v[0]) - 1] = v[sizeof(v)/sizeof(v[0]) - 1];

	ordenacao_generica(v, v_esperado, sizeof(v)/sizeof(v[0]) - 1);
	FUNCAO_ORDENACAO(v, sizeof(v)/sizeof(v[0]) - 1);

	ASSERT_TRUE(ArraysMatch(v_esperado, v));
}

TEST(FUNCAO_ORDENACAO, Array3Elementos2IguaisInicio)
{
	int v[] = { 7, 7, 3 };
	int v_esperado[sizeof(v)/sizeof(v[0])];

	ordenacao_generica(v, v_esperado, sizeof(v)/sizeof(v[0]));
	FUNCAO_ORDENACAO(v, sizeof(v)/sizeof(v[0]));

	ASSERT_TRUE(ArraysMatch(v_esperado, v));
}

TEST(FUNCAO_ORDENACAO, Array3Elementos2IguaisFim)
{
	int v[] = { 7, 3, 3 };
	int v_esperado[sizeof(v)/sizeof(v[0])];

	ordenacao_generica(v, v_esperado, sizeof(v)/sizeof(v[0]));
	FUNCAO_ORDENACAO(v, sizeof(v)/sizeof(v[0]));

	ASSERT_TRUE(ArraysMatch(v_esperado, v));
}

TEST(FUNCAO_ORDENACAO, Array3Elementos2IguaisDiferenteNoMeio)
{
	int v[] = { 7, 3, 7 };
	int v_esperado[sizeof(v)/sizeof(v[0])];

	ordenacao_generica(v, v_esperado, sizeof(v)/sizeof(v[0]));
	FUNCAO_ORDENACAO(v, sizeof(v)/sizeof(v[0]));

	ASSERT_TRUE(ArraysMatch(v_esperado, v));
}

TEST(FUNCAO_ORDENACAO, Array3Elementos3IguaisDiferenteNoMeio)
{
	int v[] = { 7, 7, 7 };
	int v_esperado[sizeof(v)/sizeof(v[0])];

	ordenacao_generica(v, v_esperado, sizeof(v)/sizeof(v[0]));
	FUNCAO_ORDENACAO(v, sizeof(v)/sizeof(v[0]));

	ASSERT_TRUE(ArraysMatch(v_esperado, v));
}

TEST(FUNCAO_ORDENACAO, Array7ElementosInicio)
{
	int v[] = { 3, 7, 8, 10, 12, 15, 1 };
	int v_esperado[sizeof(v)/sizeof(v[0])];

	ordenacao_generica(v, v_esperado, sizeof(v)/sizeof(v[0]));
	FUNCAO_ORDENACAO(v, sizeof(v)/sizeof(v[0]));

	ASSERT_TRUE(ArraysMatch(v_esperado, v));
}

TEST(FUNCAO_ORDENACAO, Array7ElementosMeio)
{
	int v[] = { 5, 6, 8, 9, 10, 11, 7 };
	int v_esperado[sizeof(v)/sizeof(v[0])];

	ordenacao_generica(v, v_esperado, sizeof(v)/sizeof(v[0]));
	FUNCAO_ORDENACAO(v, sizeof(v)/sizeof(v[0]));

	ASSERT_TRUE(ArraysMatch(v_esperado, v));
}

TEST(FUNCAO_ORDENACAO, Array7ElementosFim)
{
	int v[] = { 1, 2, 3, 5, 8, 13, 21 };
	int v_esperado[sizeof(v)/sizeof(v[0])];

	ordenacao_generica(v, v_esperado, sizeof(v)/sizeof(v[0]));
	FUNCAO_ORDENACAO(v, sizeof(v)/sizeof(v[0]));

	ASSERT_TRUE(ArraysMatch(v_esperado, v));
}

TEST(FUNCAO_ORDENACAO, Array7ElementosMeioNaoMexeAposFimDoArray)
{
	int v[] = { 4, 6, 10, 12, 14, 16, 8, 5 };
	int v_esperado[sizeof(v)/sizeof(v[0])];
	v_esperado[sizeof(v)/sizeof(v[0]) - 1] = v[sizeof(v)/sizeof(v[0]) - 1];

	ordenacao_generica(v, v_esperado, sizeof(v)/sizeof(v[0]) - 1);
	FUNCAO_ORDENACAO(v, sizeof(v)/sizeof(v[0]) - 1);

	ASSERT_TRUE(ArraysMatch(v_esperado, v));
}

TEST(FUNCAO_ORDENACAO, Array100Elementos)
{
	int v[100];
	int v_esperado[sizeof(v)/sizeof(v[0])];
	int i;

	srand(0);
	for (i = 0; i < sizeof(v)/sizeof(v[0]); i++)
		v[i] = rand();

	ordenacao_generica(v, v_esperado, sizeof(v)/sizeof(v[0]));
	FUNCAO_ORDENACAO(v, sizeof(v)/sizeof(v[0]));

	ASSERT_TRUE(ArraysMatch(v_esperado, v));
}

TEST(FUNCAO_ORDENACAO, Array1000Elementos)
{
	int v[1000];
	int v_esperado[sizeof(v)/sizeof(v[0])];
	int i;

	srand(0);
	for (i = 0; i < sizeof(v)/sizeof(v[0]); i++)
		v[i] = rand();

	ordenacao_generica(v, v_esperado, sizeof(v)/sizeof(v[0]));
	FUNCAO_ORDENACAO(v, sizeof(v)/sizeof(v[0]));

	ASSERT_TRUE(ArraysMatch(v_esperado, v));
}

TEST(FUNCAO_ORDENACAO, Array1000ElementosAleatorios)
{
	int v[1000];
	int v_esperado[sizeof(v)/sizeof(v[0])];
	int i;

	srand((unsigned int)time(NULL));
	for (i = 0; i < sizeof(v)/sizeof(v[0]); i++)
		v[i] = rand();

	ordenacao_generica(v, v_esperado, sizeof(v)/sizeof(v[0]));
	FUNCAO_ORDENACAO(v, sizeof(v)/sizeof(v[0]));

	ASSERT_TRUE(ArraysMatch(v_esperado, v));
}
#endif // TESTES_ORDENACAO_H
