package com.example.demo;

import static org.junit.Assert.assertEquals;

import org.junit.jupiter.api.Test;
import org.springframework.boot.test.context.SpringBootTest;

import com.example.rotines.OddOrPos;

@SpringBootTest
class DemoApplicationTests {

	@Test
	void contextLoads() {
		System.out.println("Executando Teste");
	}

	@Test
    void classeEquivalenciaValida(){
        System.out.println("Executando classeEquivalenciaValida");
        int[] x = {1,2,3,4,5,6};
        int obtido = OddOrPos.oddOrPos(x);
		int esperado = 6;

		assertEquals(esperado, obtido);
    }

	@Test
    void classeEquivalenciaNula(){
        System.out.println("Executando classeEquivalenciaNula");
        int[] x = null;

		try {
			int obtido = OddOrPos.oddOrPos(x);
			int esperado = 0;
	
			assertEquals(esperado, obtido);
		} catch (NullPointerException e) {
			
		}

    }

	@Test
    void classeEquivalenciaMenorQtdArray(){
        System.out.println("Executando classeEquivalenciaMenorQtdArray");
        int[] x = {};

		int obtido = OddOrPos.oddOrPos(x);
		int esperado = 0;
		assertEquals(esperado, obtido);
    }

	@Test
    void classeEquivalenciaFaixaValor(){
        System.out.println("Executando classeEquivalenciaMenorQtdArray");
        int[] x = {0,100000000};

		int obtido = OddOrPos.oddOrPos(x);
		int esperado = 1;
		assertEquals(esperado, obtido);
    }

}
