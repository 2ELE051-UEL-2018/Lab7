#include "gtest/gtest.h"
#include "aux_test_functions.h"

extern "C"
{
#include "projeto.h"
}

TEST(ponto_medio, Iguais)
{
	ASSERT_EQ(5, ponto_medio(5, 5));
}

TEST(ponto_medio, DivisaoExata)
{
	ASSERT_EQ(4, ponto_medio(1, 7));
}

TEST(ponto_medio, DivisaoTruncada)
{
	ASSERT_EQ(7, ponto_medio(6, 9));
}