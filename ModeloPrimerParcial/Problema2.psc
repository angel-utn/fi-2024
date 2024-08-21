Algoritmo ProductoresAnimales
	// Inicializar variables
	totalCerdos = 0
	totalOvejas = 0
	totalVacas = 0
	totalAnimales = 0
	codigoProductorMenosAnimales = 0
	cantidadAnimalesMenor = 0
	Para i<-1 Hasta 10 Con Paso 1 Hacer
		cantidadAniosSinCerdos = 0
		Para anio<-1 Hasta 5 Con Paso 1 Hacer
			Escribir 'Ingrese el código de productor: '
			Leer codigoProductor
			Escribir 'Ingrese la cantidad de nacimientos de cerdos: '
			Leer cantidadCerdos
			Escribir 'Ingrese la cantidad de nacimientos de ovejas: '
			Leer cantidadOvejas
			Escribir 'Ingrese la cantidad de nacimientos de vacas: '
			Leer cantidadVacas
			// A) Contar los años en que el productor no produjo cerdos
			Si cantidadCerdos==0 Entonces
				cantidadAniosSinCerdos = cantidadAniosSinCerdos+1
			FinSi
			// B) Determinar el código del productor que menos animales produjo en el primer año
			cantidadAnimales = cantidadCerdos+cantidadOvejas+cantidadVacas
			Si anio==1 Entonces
				Si (codigoProductorMenosAnimales=0)||(cantidadAnimales<cantidadAnimalesMenor) Entonces
					codigoProductorMenosAnimales = codigoProductor
					cantidadAnimalesMenor = cantidadAnimales
				FinSi
			FinSi
			// C) Sumar los totales de cerdos, ovejas y vacas producidos
			totalCerdos = totalCerdos+cantidadCerdos
			totalOvejas = totalOvejas+cantidadOvejas
			totalVacas = totalVacas+cantidadVacas
			totalAnimales = totalAnimales+cantidadAnimales
		FinPara
		// Mostrar el resultado del punto A para cada productor
		Escribir ''
		Escribir 'PUNTO A'
		Escribir 'El productor ',codigoProductor,' no produjo cerdos en ',cantidadAniosSinCerdos,' años.'
	FinPara
	// Mostrar el resultado del punto B
	Escribir ''
	Escribir 'PUNTO B'
	Escribir 'El productor ',codigoProductorMenosAnimales,' produjo menos animales en el primer año de trabajo.'
	// Calcular y mostrar los porcentajes del punto C
	Escribir ''
	Escribir 'PUNTO C'
	porcentajeCerdos = (totalCerdos*100)/totalAnimales
	porcentajeOvejas = (totalOvejas*100)/totalAnimales
	porcentajeVacas = (totalVacas*100)/totalAnimales
	Escribir 'Porcentaje de cerdos: ',porcentajeCerdos,'%'
	Escribir 'Porcentaje de ovejas: ',porcentajeOvejas,'%'
	Escribir 'Porcentaje de vacas: ',porcentajeVacas,'%'
FinAlgoritmo
