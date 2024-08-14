Algoritmo Metales
	// Inicializar variables
	totalFerroso = 0
	totalNoFerroso = 0
	cantidadMetalesNoUtilizados = 0
	cantidadMetalMasConsumido = 0
	codigoMetalMasConsumido = 0
	Escribir 'Ingrese el código de metal: '
	Leer codigoMetal
	Mientras codigoMetal>=0 Hacer
		Escribir 'Ingrese el tipo de metal (1: ferroso; 2: no ferroso): '
		Leer tipoMetal
		Escribir 'Ingrese la cantidad de toneladas al inicio del mes: '
		Leer cantidadInicio
		Escribir 'Ingrese la cantidad de toneladas al finalizar el mes: '
		Leer cantidadFinal
		consumo = cantidadInicio-cantidadFinal
		// A) Calcular el total consumido de cada tipo de metal
		Si tipoMetal=1 Entonces
			totalFerroso = totalFerroso+consumo
		SiNo
			totalNoFerroso = totalNoFerroso+consumo
		FinSi
		// B) Contar la cantidad de metales que no se utilizaron
		Si consumo=0 Entonces
			cantidadMetalesNoUtilizados = cantidadMetalesNoUtilizados+1
		FinSi
		// C) Determinar el código del metal más consumido
		Si consumo>cantidadMetalMasConsumido Entonces
			codigoMetalMasConsumido = codigoMetal
			cantidadMetalMasConsumido = consumo
		FinSi
		Escribir 'Ingrese el código de metal: '
		Leer codigoMetal
	FinMientras
	// Resultados
	Escribir ''
	Escribir 'Punto A'
	porcentaje = (totalFerroso*100)/(totalFerroso+totalNoFerroso)
	Escribir 'Porcentaje consumido de metal ferroso: ',porcentaje,'%'
	Escribir 'Porcentaje consumido de metal no ferroso: ',100-porcentaje,'%'
	Escribir ''
	Escribir 'Punto B'
	Escribir 'Cantidad de metales que no se utilizaron: ',cantidadMetalesNoUtilizados
	Escribir ''
	Escribir 'Punto C'
	Escribir 'Código de metal más consumido: ',codigoMetalMasConsumido
FinAlgoritmo
