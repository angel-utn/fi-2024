Algoritmo sin_titulo
	// Ejercicio 9 - TP 4
	POS = 0
	Leer N
	Mientras N != 0 Hacer
		POS = POS + 1
		Si POS == 1 || N > MAX Entonces
			MAX = N
			MAXPOS = POS
		FinSi
		Leer N
	FinMientras
	Escribir "MAXIMO:",MAX
	Escribir "POSICION:",MAXPOS
FinAlgoritmo
