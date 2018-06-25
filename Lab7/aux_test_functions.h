#ifndef AUX_TEST_FUNCTIONS_H
#define AUX_TEST_FUNCTIONS_H

template<typename T, size_t size>
::testing::AssertionResult ArraysMatch(const T(&expected)[size],
									   const T(&actual)[size])
{
	for (size_t i(0); i < size; ++i)
	{
		if (expected[i] != actual[i])
		{
			return ::testing::AssertionFailure() << "array[" << i
				<< "] (" << actual[i] << ") != expected[" << i
				<< "] (" << expected[i] << ")";
		}
	}

	return ::testing::AssertionSuccess();
}

extern "C" void ordenacao_generica(int v[], int v_esperado[], int tamanho);

#endif // AUX_TEST_FUNCTIONS_H
