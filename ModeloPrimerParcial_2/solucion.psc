Algoritmo ExportacionesIndustria
	// Inicializar variables
	cantidadIndustriasEuropaPeroNoAsia = 0
	cantExpoMayorA40America = 0
	cantExpoMayorA40Europa = 0
	cantExpoMayorA40Asia = 0
	totalAbonadoAmericaIndustria5 = 0
	totalAbonadoEuropaIndustria5 = 0
	totalAbonadoAsiaIndustria5 = 0
	Escribir 'Ingrese el código de la industria: '
	Leer codIndustria
	Mientras codIndustria!=0 Hacer
		totalToneladasAmerica = 0
		totalToneladasEuropa = 0
		totalToneladasAsia = 0
		Escribir 'Ingrese el código de la exportación: '
		Leer codExportacion
		Mientras codExportacion!=0 Hacer
			Escribir 'Ingrese el continente de destino (1 - América, 2 - Europa, 3 - Asia): '
			Leer continente
			Escribir 'Ingrese el total de toneladas exportadas: '
			Leer toneladas
			Escribir 'Ingrese el importe total: '
			Leer importe
			Segun continente  Hacer
				1:
					// A
					totalToneladasAmerica = totalToneladasAmerica+toneladas
					// C
					Si toneladas>40 Entonces
						cantExpoMayorA40America = cantExpoMayorA40America+1
					FinSi
					// D
					Si codIndustria==5 Entonces
						totalAbonadoAmericaIndustria5 = totalAbonadoAmericaIndustria5+importe
					FinSi
				2:
					// A
					totalToneladasEuropa = totalToneladasEuropa+toneladas
					// C
					Si toneladas>40 Entonces
						cantExpoMayorA40Europa = cantExpoMayorA40Europa+1
					FinSi
					// D
					Si codIndustria==5 Entonces
						totalAbonadoEuropaIndustria5 = totalAbonadoEuropaIndustria5+importe
					FinSi
				3:
					// A
					totalToneladasAsia = totalToneladasAsia+toneladas
					// C
					Si toneladas>40 Entonces
						cantExpoMayorA40Asia = cantExpoMayorA40Asia+1
					FinSi
					// D
					Si codIndustria==5 Entonces
						totalAbonadoAsiaIndustria5 = totalAbonadoAsiaIndustria5+importe
					FinSi
			FinSegun
			Escribir 'Ingrese el código de la exportación: '
			Leer codExportacion
		FinMientras
		// Mostrar resultados del punto A
		Escribir ''
		Escribir 'Punto A'
		Escribir 'Código de la industria: ',codIndustria
		Escribir 'Total de toneladas exportadas a América: ',totalToneladasAmerica
		Escribir 'Total de toneladas exportadas a Europa: ',totalToneladasEuropa
		Escribir 'Total de toneladas exportadas a Asia: ',totalToneladasAsia
		// B) Contar industrias que exportaron a Europa pero no a Asia
		Si (totalToneladasEuropa>0)&&(totalToneladasAsia==0) Entonces
			cantidadIndustriasEuropaPeroNoAsia = cantidadIndustriasEuropaPeroNoAsia+1
		FinSi
		Escribir 'Ingrese el código de la industria: '
		Leer codIndustria
	FinMientras
	// Mostrar resultados del punto B
	Escribir ''
	Escribir 'Punto B'
	Escribir 'Cantidad de industrias que hayan exportado a Europa pero no a Asia: ',cantidadIndustriasEuropaPeroNoAsia
	// Mostrar resultados del punto C
	Escribir ''
	Escribir 'Punto C'
	Escribir 'Los códigos de continente que no hayan registrado ninguna exportación mayor a 40 toneladas: '
	Si cantExpoMayorA40America==0 Entonces
		Escribir '1 - América'
	FinSi
	Si cantExpoMayorA40Europa==0 Entonces
		Escribir '2 - Europa'
	FinSi
	Si cantExpoMayorA40Asia==0 Entonces
		Escribir '3 - Asia'
	FinSi
	// Mostrar resultados del punto D
	Escribir ''
	Escribir 'Punto D'
	Si (totalAbonadoAmericaIndustria5>totalAbonadoEuropaIndustria5)&&(totalAbonadoAmericaIndustria5>totalAbonadoAsiaIndustria5) Entonces
		Escribir 'América'
	SiNo
		Si (totalAbonadoEuropaIndustria5>totalAbonadoAsiaIndustria5) Entonces
			Escribir 'Europa'
		SiNo
			Escribir 'Asia'
		FinSi
	FinSi
FinAlgoritmo
