
public class Triangulo {
	public static void triangulos(int x, int y, int z) {

		// verificando se é um triangulo
		if (x < y + z || y < x + z || z < x + y) {
			System.out.println("Trata-se de um triangulo");
		}else {
			System.out.println("Não é um triângulo");
		}

		// analisando o tipo de triangulo
		if (x == y && y == z) {
			System.out.println("Lados:" + x + "," + y + "," + z);
			System.out.println("Três lados iguais. Triangulo Equilatero\n");
		
		} else if ((x == y && x!=z) || (x == z && x!= z)) {
			System.out.println("Lados:" + x + "," + y + "," + z);
			System.out.println("Dois lados iguais. Triangulo Isosceles\n");
		
		} else if (x != y && x != z & y != z) {
			System.out.println("Lados:" + x + "," + y + "," + z);
			System.out.println("Três lados diferentes. Triângulo Escaleno\n");
		}
	}

	public static void main(String[] args) {
		System.out.println("Teste do Triangulo \n\n");
		Triangulo.triangulos(2, 2, 2);
		Triangulo.triangulos(2, 2, 3);
		Triangulo.triangulos(2, 3, 4);
	}
}
