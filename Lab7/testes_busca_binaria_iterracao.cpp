#include "gtest/gtest.h"
#include "aux_test_functions.h"

extern "C"
{
#include "projeto.h"
}

TEST(busca_binaria_iteracao, Array3ElementosElementoEncontrado)
{
	int v[] = { 1, 2, 3 };
	int inicio = 0, fim = sizeof(v)/sizeof(v[0]) - 1;

	ASSERT_EQ(1, busca_binaria_iteracao(v, 2, &inicio, &fim));
	ASSERT_EQ(0, inicio);
	ASSERT_EQ(2, fim);
}

TEST(busca_binaria_iteracao, Array3ElementosElementoNaoEncontradoMenor1)
{
	int v[] = { 1, 2, 3 };
	int inicio = 0, fim = sizeof(v)/sizeof(v[0]) - 1;

	ASSERT_EQ(-1, busca_binaria_iteracao(v, 1, &inicio, &fim));
	ASSERT_EQ(0, inicio);
	ASSERT_EQ(0, fim);
}

TEST(busca_binaria_iteracao, Array3ElementosElementoNaoEncontradoMenor2)
{
	int v[] = { 1, 2, 3 };
	int inicio = 0, fim = sizeof(v)/sizeof(v[0]) - 1;


	ASSERT_EQ(-1, busca_binaria_iteracao(v, 0, &inicio, &fim));
	ASSERT_EQ(0, inicio);
	ASSERT_EQ(0, fim);
}

TEST(busca_binaria_iteracao, Array3ElementosElementoNaoEncontradoMaior1)
{
	int v[] = { 1, 2, 3 };
	int inicio = 0, fim = sizeof(v)/sizeof(v[0]) - 1;

	ASSERT_EQ(-1, busca_binaria_iteracao(v, 3, &inicio, &fim));
	ASSERT_EQ(2, inicio);
	ASSERT_EQ(2, fim);
}

TEST(busca_binaria_iteracao, Array3ElementosElementoNaoEncontradoMaior2)
{
	int v[] = { 1, 2, 3 };
	int inicio = 0, fim = sizeof(v)/sizeof(v[0]) - 1;

	ASSERT_EQ(-1, busca_binaria_iteracao(v, 4, &inicio, &fim));
	ASSERT_EQ(2, inicio);
	ASSERT_EQ(2, fim);
}

TEST(busca_binaria_iteracao, Array4ElementosElementoEncontrado)
{
	int v[] = { 1, 3, 13, 37 };
	int inicio = 0, fim = sizeof(v)/sizeof(v[0]) - 1;

	ASSERT_EQ(1, busca_binaria_iteracao(v, 3, &inicio, &fim));
	ASSERT_EQ(0, inicio);
	ASSERT_EQ(3, fim);
}

TEST(busca_binaria_iteracao, Array4ElementosElementoNaoEncontrado1)
{
	int v[] = { 1, 3, 13, 37 };
	int inicio = 0, fim = sizeof(v)/sizeof(v[0]) - 1;

	ASSERT_EQ(-1, busca_binaria_iteracao(v, 13, &inicio, &fim));
	ASSERT_EQ(2, inicio);
	ASSERT_EQ(3, fim);
}

TEST(busca_binaria_iteracao, Array4ElementosElementoNaoEncontrado2)
{
	int v[] = { 1, 3, 13, 37 };
	int inicio = 0, fim = sizeof(v)/sizeof(v[0]) - 1;

	ASSERT_EQ(-1, busca_binaria_iteracao(v, 1, &inicio, &fim));
	ASSERT_EQ(0, inicio);
	ASSERT_EQ(0, fim);
}

TEST(busca_binaria_iteracao, Array4ElementosElementoNaoEncontrado3)
{
	int v[] = { 1, 3, 13, 37 };
	int inicio = 0, fim = sizeof(v)/sizeof(v[0]) - 1;

	ASSERT_EQ(-1, busca_binaria_iteracao(v, -1, &inicio, &fim));
	ASSERT_EQ(0, inicio);
	ASSERT_EQ(0, fim);
}

TEST(busca_binaria_iteracao, Array4ElementosElementoNaoEncontrado4)
{
	int v[] = { 1, 3, 13, 37 };
	int inicio = 0, fim = sizeof(v)/sizeof(v[0]) - 1;

	ASSERT_EQ(-1, busca_binaria_iteracao(v, 13, &inicio, &fim));
	ASSERT_EQ(2, inicio);
	ASSERT_EQ(3, fim);
}

TEST(busca_binaria_iteracao, Array4ElementosElementoNaoEncontrado5)
{
	int v[] = { 1, 3, 13, 37 };
	int inicio = 0, fim = sizeof(v)/sizeof(v[0]) - 1;

	ASSERT_EQ(-1, busca_binaria_iteracao(v, 37, &inicio, &fim));
	ASSERT_EQ(2, inicio);
	ASSERT_EQ(3, fim);
}

TEST(busca_binaria_iteracao, Array4ElementosElementoNaoEncontrado6)
{
	int v[] = { 1, 3, 13, 37 };
	int inicio = 0, fim = sizeof(v)/sizeof(v[0]) - 1;

	ASSERT_EQ(-1, busca_binaria_iteracao(v, 1337, &inicio, &fim));
	ASSERT_EQ(2, inicio);
	ASSERT_EQ(3, fim);
}