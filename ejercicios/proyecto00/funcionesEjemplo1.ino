/* Funciones 1
 * --------------
 *
 * Ejemplo de creacion y uso de una funcion
 *
 *
 * 2018, CFTIC
 * @author: Juan Pedro Lopez
 * @hardware: Juan Pedro Lopez
 */
void setup( ) {
	Serial.begin (9600);

}
void loop( ) {
	int i = 2;
	int j = 3;
	int k;
	k = myMultiplyFunction(i, j);
	// k ahora contiene 6
	Serial.println(k);
	delay(500);
}
int myMultiplyFunction(int x, int y) { 
	int result;
	result = x * y);
	return result;
} 