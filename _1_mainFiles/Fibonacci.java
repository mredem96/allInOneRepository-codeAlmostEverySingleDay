public class Fibonacci
{
	public static void Fibonacci() {
			int dim=10; int varA=1; int varB=1; int result = 0;
			result = varA+varA;
			for(int i = 0; i < dim; i++) {
				varB=result; result += varA; varA=varB;
				System.out.println("\n fibonacci result = " + result);
		}
	}

	public static void Factorial() {
			int result = 1; int factorial = 8;
			for(int i = 1; i <= factorial; i++) {
				result*=factorial;
				System.out.println("\n factorial result = " + result);				
			}
		}		

	public static void main(String[] args) {
			Fibonacci();
			Factorial();
	}
}
