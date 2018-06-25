#ifndef TESTES_BUSCA_H
#define TESTES_BUSCA_H

#include <ctime>
#include "gtest/gtest.h"
#include "aux_test_functions.h"

extern "C"
{
#include "projeto.h"
}

#ifndef FUNCAO_BUSCA
#error Necessario definir FUNCAO_BUSCA para a funcao de ordenacao a ser testada
#endif

TEST(FUNCAO_BUSCA, Array1ElementoExiste)
{
	int v[] = { 0 };

	ASSERT_EQ(0, FUNCAO_BUSCA(v, 0, sizeof(v)/sizeof(v[0])));
}

TEST(FUNCAO_BUSCA, Array1ElementoNaoExiste)
{
	int v[] = { 0 };

	ASSERT_EQ(-1, FUNCAO_BUSCA(v, 1, sizeof(v)/sizeof(v[0])));
}

TEST(FUNCAO_BUSCA, Array2ElementosEmOrdemExisteNoInicio)
{
	int v[] = { 3, 7 };

	ASSERT_EQ(0, FUNCAO_BUSCA(v, 3, sizeof(v)/sizeof(v[0])));
}

TEST(FUNCAO_BUSCA, Array2ElementosEmOrdemExisteNoFim)
{
	int v[] = { 3, 7 };

	ASSERT_EQ(1, FUNCAO_BUSCA(v, 7, sizeof(v)/sizeof(v[0])));
}

TEST(FUNCAO_BUSCA, Array2ElementosEmOrdemNaoExiste1)
{
	int v[] = { 3, 7 };

	ASSERT_EQ(-1, FUNCAO_BUSCA(v, 1, sizeof(v)/sizeof(v[0])));
}

TEST(FUNCAO_BUSCA, Array2ElementosEmOrdemNaoExiste2)
{
	int v[] = { 3, 7 };

	ASSERT_EQ(-1, FUNCAO_BUSCA(v, 5, sizeof(v)/sizeof(v[0])));
}

TEST(FUNCAO_BUSCA, Array2ElementosEmOrdemNaoExiste3)
{
	int v[] = { 3, 7 };

	ASSERT_EQ(-1, FUNCAO_BUSCA(v, 9, sizeof(v)/sizeof(v[0])));
}

#define busca_linear 1
#if FUNCAO_BUSCA == 1
#undef busca_linear
TEST(FUNCAO_BUSCA, Array2ElementosForaDeOrdemExisteNoInicio)
{
	int v[] = { 7, 3 };

	ASSERT_EQ(0, FUNCAO_BUSCA(v, 7, sizeof(v)/sizeof(v[0])));
}

TEST(FUNCAO_BUSCA, Array2ElementosForaDeOrdemExisteNoFim)
{
	int v[] = { 7, 3 };

	ASSERT_EQ(1, FUNCAO_BUSCA(v, 3, sizeof(v)/sizeof(v[0])));
}

TEST(FUNCAO_BUSCA, Array2ElementosForaDeOrdemNaoExiste1)
{
	int v[] = { 7, 3 };

	ASSERT_EQ(-1, FUNCAO_BUSCA(v, 1, sizeof(v)/sizeof(v[0])));
}

TEST(FUNCAO_BUSCA, Array2ElementosForaDeOrdemNaoExiste2)
{
	int v[] = { 7, 3 };

	ASSERT_EQ(-1, FUNCAO_BUSCA(v, 5, sizeof(v)/sizeof(v[0])));
}

TEST(FUNCAO_BUSCA, Array2ElementosForaDeOrdemNaoExiste3)
{
	int v[] = { 7, 3 };

	ASSERT_EQ(-1, FUNCAO_BUSCA(v, 9, sizeof(v)/sizeof(v[0])));
}
#endif

TEST(FUNCAO_BUSCA, Array3ElementosEmOrdemExisteNoInicio)
{
	int v[] = { 7, 11, 13 };

	ASSERT_EQ(0, FUNCAO_BUSCA(v, 7, sizeof(v)/sizeof(v[0])));
}

TEST(FUNCAO_BUSCA, Array3ElementosEmOrdemExisteNoMeio)
{
	int v[] = { 7, 11, 13 };

	ASSERT_EQ(1, FUNCAO_BUSCA(v, 11, sizeof(v)/sizeof(v[0])));
}

TEST(FUNCAO_BUSCA, Array3ElementosEmOrdemExisteNoFinal)
{
	int v[] = { 7, 11, 13 };

	ASSERT_EQ(2, FUNCAO_BUSCA(v, 13, sizeof(v)/sizeof(v[0])));
}

TEST(FUNCAO_BUSCA, Array3ElementosEmOrdemNaoExiste1)
{
	int v[] = { 7, 11, 13 };

	ASSERT_EQ(-1, FUNCAO_BUSCA(v, 5, sizeof(v)/sizeof(v[0])));
}

TEST(FUNCAO_BUSCA, Array3ElementosEmOrdemNaoExiste2)
{
	int v[] = { 7, 11, 13 };

	ASSERT_EQ(-1, FUNCAO_BUSCA(v, 9, sizeof(v)/sizeof(v[0])));
}

TEST(FUNCAO_BUSCA, Array3ElementosEmOrdemNaoExiste3)
{
	int v[] = { 7, 11, 13 };

	ASSERT_EQ(-1, FUNCAO_BUSCA(v, 12, sizeof(v)/sizeof(v[0])));
}

TEST(FUNCAO_BUSCA, Array3ElementosEmOrdemNaoExiste4)
{
	int v[] = { 7, 11, 13 };

	ASSERT_EQ(-1, FUNCAO_BUSCA(v, 17, sizeof(v)/sizeof(v[0])));
}

#define busca_linear 1
#if FUNCAO_BUSCA == 1
#undef busca_linear
TEST(FUNCAO_BUSCA, Array3ElementosForaDeOrdemExisteNoInicio)
{
	int v[] = { 7, 1, 3 };

	ASSERT_EQ(0, FUNCAO_BUSCA(v, 7, sizeof(v)/sizeof(v[0])));
}

TEST(FUNCAO_BUSCA, Array3ElementosForaDeOrdemExisteNoMeio)
{
	int v[] = { 7, 1, 3 };

	ASSERT_EQ(1, FUNCAO_BUSCA(v, 1, sizeof(v)/sizeof(v[0])));
}

TEST(FUNCAO_BUSCA, Array3ElementosForaDeOrdemExisteNoFim)
{
	int v[] = { 7, 1, 3 };

	ASSERT_EQ(2, FUNCAO_BUSCA(v, 3, sizeof(v)/sizeof(v[0])));
}

TEST(FUNCAO_BUSCA, Array3ElementosForaDeOrdemNaoExiste1)
{
	int v[] = { 7, 1, 3 };

	ASSERT_EQ(-1, FUNCAO_BUSCA(v, 0, sizeof(v)/sizeof(v[0])));
}

TEST(FUNCAO_BUSCA, Array3ElementosForaDeOrdemNaoExiste2)
{
	int v[] = { 7, 1, 3 };

	ASSERT_EQ(-1, FUNCAO_BUSCA(v, 2, sizeof(v)/sizeof(v[0])));
}

TEST(FUNCAO_BUSCA, Array3ElementosForaDeOrdemNaoExiste3)
{
	int v[] = { 7, 1, 3 };

	ASSERT_EQ(-1, FUNCAO_BUSCA(v, 5, sizeof(v)/sizeof(v[0])));
}

TEST(FUNCAO_BUSCA, Array3ElementosForaDeOrdemNaoExiste4)
{
	int v[] = { 7, 1, 3 };

	ASSERT_EQ(-1, FUNCAO_BUSCA(v, 9, sizeof(v)/sizeof(v[0])));
}
#endif

TEST(FUNCAO_BUSCA, Array100ElementosEmOrdemExiste)
{
	int v[100];
	int i;
	int pos;

	srand(0);
	for (i = 0; i < sizeof(v)/sizeof(v[0]); i++)
		v[i] = rand();

	ordenacao_generica(v, v, sizeof(v)/sizeof(v[0]));

	pos = rand() % (sizeof(v)/sizeof(v[0]));

	ASSERT_EQ(v[pos], v[FUNCAO_BUSCA(v, v[pos], sizeof(v)/sizeof(v[0]))]);
}

TEST(FUNCAO_BUSCA, Array100ElementosEmOrdemNaoExisteMenorQueTodos)
{
	int v[100];
	int i;

	srand(0);
	for (i = 0; i < sizeof(v)/sizeof(v[0]); i++)
		v[i] = rand();

	ordenacao_generica(v, v, sizeof(v)/sizeof(v[0]));

	ASSERT_EQ(-1, FUNCAO_BUSCA(v, v[0] - 1, sizeof(v)/sizeof(v[0])));
}

TEST(FUNCAO_BUSCA, Array100ElementosEmOrdemNaoExisteMaiorQueTodos)
{
	int v[100];
	int i;

	srand(0);
	for (i = 0; i < sizeof(v)/sizeof(v[0]); i++)
		v[i] = rand();

	ordenacao_generica(v, v, sizeof(v)/sizeof(v[0]));

	ASSERT_EQ(-1, FUNCAO_BUSCA(v, v[sizeof(v)/sizeof(v[0]) - 1] + 1, sizeof(v)/sizeof(v[0])));
}

TEST(FUNCAO_BUSCA, Array100ElementosEmOrdemNaoExisteAleatorio)
{
	int v[100];
	int i;
	int elemento;
	int temp;

	srand(0);
	elemento = rand();
	for (i = 0; i < sizeof(v)/sizeof(v[0]); i++)
	{
		do
		{
			temp = rand();
		}
		while (temp == elemento);

		v[i] = temp;
	}

	ordenacao_generica(v, v, sizeof(v)/sizeof(v[0]));

	ASSERT_EQ(-1, FUNCAO_BUSCA(v, elemento, sizeof(v)/sizeof(v[0])));
}

#define busca_linear 1
#if FUNCAO_BUSCA == 1
#undef busca_linear
TEST(FUNCAO_BUSCA, Array100ElementosForaDeOrdemExiste)
{
	int v[100];
	int i;
	int pos;

	srand(0);
	for (i = 0; i < sizeof(v)/sizeof(v[0]); i++)
		v[i] = rand();

	pos = rand() % (sizeof(v)/sizeof(v[0]));

	ASSERT_EQ(v[pos], v[FUNCAO_BUSCA(v, v[pos], sizeof(v)/sizeof(v[0]))]);
}

TEST(FUNCAO_BUSCA, Array100ElementosForaDeOrdemNaoExisteAleatorio)
{
	int v[100];
	int i;
	int elemento;
	int temp;

	srand(0);
	elemento = rand();
	for (i = 0; i < sizeof(v)/sizeof(v[0]); i++)
	{
		do
		{
			temp = rand();
		}
		while (temp == elemento);

		v[i] = temp;
	}

	ordenacao_generica(v, v, sizeof(v)/sizeof(v[0]));

	ASSERT_EQ(-1, FUNCAO_BUSCA(v, elemento, sizeof(v)/sizeof(v[0])));
}
#endif

TEST(FUNCAO_BUSCA, Array1000ElementosEmOrdemExiste)
{
	int v[1000];
	int i;
	int pos;

	srand(0);
	for (i = 0; i < sizeof(v)/sizeof(v[0]); i++)
		v[i] = rand();

	ordenacao_generica(v, v, sizeof(v)/sizeof(v[0]));

	pos = rand() % (sizeof(v)/sizeof(v[0]));

	ASSERT_EQ(v[pos], v[FUNCAO_BUSCA(v, v[pos], sizeof(v)/sizeof(v[0]))]);
}

TEST(FUNCAO_BUSCA, Array1000ElementosEmOrdemNaoExisteMenorQueTodos)
{
	int v[1000];
	int i;

	srand(0);
	for (i = 0; i < sizeof(v)/sizeof(v[0]); i++)
		v[i] = rand();

	ordenacao_generica(v, v, sizeof(v)/sizeof(v[0]));

	ASSERT_EQ(-1, FUNCAO_BUSCA(v, v[0] - 1, sizeof(v)/sizeof(v[0])));
}

TEST(FUNCAO_BUSCA, Array1000ElementosEmOrdemNaoExisteMaiorQueTodos)
{
	int v[1000];
	int i;

	srand(0);
	for (i = 0; i < sizeof(v)/sizeof(v[0]); i++)
		v[i] = rand();

	ordenacao_generica(v, v, sizeof(v)/sizeof(v[0]));

	ASSERT_EQ(-1, FUNCAO_BUSCA(v, v[sizeof(v)/sizeof(v[0]) - 1] + 1, sizeof(v)/sizeof(v[0])));
}

TEST(FUNCAO_BUSCA, Array1000ElementosEmOrdemNaoExisteAleatorio)
{
	int v[1000];
	int i;
	int elemento;
	int temp;

	srand(0);
	elemento = rand();
	for (i = 0; i < sizeof(v)/sizeof(v[0]); i++)
	{
		do
		{
			temp = rand();
		}
		while (temp == elemento);

		v[i] = temp;
	}

	ordenacao_generica(v, v, sizeof(v)/sizeof(v[0]));

	ASSERT_EQ(-1, FUNCAO_BUSCA(v, elemento, sizeof(v)/sizeof(v[0])));
}

#define busca_linear 1
#if FUNCAO_BUSCA == 1
#undef busca_linear
TEST(FUNCAO_BUSCA, Array1000ElementosForaDeOrdemExiste)
{
	int v[1000];
	int i;
	int pos;

	srand(0);
	for (i = 0; i < sizeof(v)/sizeof(v[0]); i++)
		v[i] = rand();

	pos = rand() % (sizeof(v)/sizeof(v[0]));

	ASSERT_EQ(v[pos], v[FUNCAO_BUSCA(v, v[pos], sizeof(v)/sizeof(v[0]))]);
}

TEST(FUNCAO_BUSCA, Array1000ElementosForaDeOrdemNaoExisteAleatorio)
{
	int v[1000];
	int i;
	int elemento;
	int temp;

	srand(0);
	elemento = rand();
	for (i = 0; i < sizeof(v)/sizeof(v[0]); i++)
	{
		do
		{
			temp = rand();
		}
		while (temp == elemento);

		v[i] = temp;
	}

	ordenacao_generica(v, v, sizeof(v)/sizeof(v[0]));

	ASSERT_EQ(-1, FUNCAO_BUSCA(v, elemento, sizeof(v)/sizeof(v[0])));
}
#endif

TEST(FUNCAO_BUSCA, Array1000ElementosAleatoriosEmOrdemExiste)
{
	int v[1000];
	int i;
	int pos;

	srand((unsigned int)time(NULL));
	for (i = 0; i < sizeof(v)/sizeof(v[0]); i++)
		v[i] = rand();

	ordenacao_generica(v, v, sizeof(v)/sizeof(v[0]));

	pos = rand() % (sizeof(v)/sizeof(v[0]));

	ASSERT_EQ(v[pos], v[FUNCAO_BUSCA(v, v[pos], sizeof(v)/sizeof(v[0]))]);
}

TEST(FUNCAO_BUSCA, Array1000ElementosAleatoriosEmOrdemNaoExisteMenorQueTodos)
{
	int v[1000];
	int i;

	srand((unsigned int)time(NULL));
	for (i = 0; i < sizeof(v)/sizeof(v[0]); i++)
		v[i] = rand();

	ordenacao_generica(v, v, sizeof(v)/sizeof(v[0]));

	ASSERT_EQ(-1, FUNCAO_BUSCA(v, v[0] - 1, sizeof(v)/sizeof(v[0])));
}

TEST(FUNCAO_BUSCA, Array1000ElementosAleatoriosEmOrdemNaoExisteMaiorQueTodos)
{
	int v[1000];
	int i;

	srand((unsigned int)time(NULL));
	for (i = 0; i < sizeof(v)/sizeof(v[0]); i++)
		v[i] = rand();

	ordenacao_generica(v, v, sizeof(v)/sizeof(v[0]));

	ASSERT_EQ(-1, FUNCAO_BUSCA(v, v[sizeof(v)/sizeof(v[0]) - 1] + 1, sizeof(v)/sizeof(v[0])));
}

TEST(FUNCAO_BUSCA, Array1000ElementosAleatoriosEmOrdemNaoExisteAleatorio)
{
	int v[1000];
	int i;
	int elemento;
	int temp;

	srand((unsigned int)time(NULL));
	elemento = rand();
	for (i = 0; i < sizeof(v)/sizeof(v[0]); i++)
	{
		do
		{
			temp = rand();
		}
		while (temp == elemento);

		v[i] = temp;
	}

	ordenacao_generica(v, v, sizeof(v)/sizeof(v[0]));

	ASSERT_EQ(-1, FUNCAO_BUSCA(v, elemento, sizeof(v)/sizeof(v[0])));
}

#define busca_linear 1
#if FUNCAO_BUSCA == 1
#undef busca_linear
TEST(FUNCAO_BUSCA, Array1000ElementosAleatoriosForaDeOrdemExiste)
{
	int v[1000];
	int i;
	int pos;

	srand((unsigned int)time(NULL));
	for (i = 0; i < sizeof(v)/sizeof(v[0]); i++)
		v[i] = rand();

	pos = rand() % (sizeof(v)/sizeof(v[0]));

	ASSERT_EQ(v[pos], v[FUNCAO_BUSCA(v, v[pos], sizeof(v)/sizeof(v[0]))]);
}

TEST(FUNCAO_BUSCA, Array1000ElementosAleatoriosForaDeOrdemNaoExisteAleatorio)
{
	int v[1000];
	int i;
	int elemento;
	int temp;

	srand((unsigned int)time(NULL));
	elemento = rand();
	for (i = 0; i < sizeof(v)/sizeof(v[0]); i++)
	{
		do
		{
			temp = rand();
		}
		while (temp == elemento);

		v[i] = temp;
	}

	ordenacao_generica(v, v, sizeof(v)/sizeof(v[0]));

	ASSERT_EQ(-1, FUNCAO_BUSCA(v, elemento, sizeof(v)/sizeof(v[0])));
}
#endif

#endif // TESTES_ORDENACAO_H
