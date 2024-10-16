Algoritmo sin_titulo
	Definir empleado,modelo,medioPago,dia,sede,i Como Entero
	// A
	Dimension atencionesxModelo[15]
	Definir modeloMenorAtenciones,cantidadMenorAtenciones Como Entero
	// B
	Dimension atencionesxMedioPago[10]
	Definir medioPagoMasAtenciones,cantidadMayorAtenciones Como Entero
	cantidadMayorAtenciones = 0
	// C
	Dimension atencionesxSede[4]
	Dimension nombresSede[4]
	nombresSede[0] = 'Zona Norte'
	nombresSede[1] = 'CABA'
	nombresSede[2] = 'Zona Sur'
	nombresSede[3] = 'Zona Oeste'
	// Inicializar los vectores de atenciones en 0
	Para i<-0 Hasta 14 Con Paso 1 Hacer
		atencionesxModelo[i] = 0
	FinPara
	Para i<-0 Hasta 9 Con Paso 1 Hacer
		atencionesxMedioPago[i] = 0
	FinPara
	Para i<-0 Hasta 3 Con Paso 1 Hacer
		atencionesxSede[i] = 0
	FinPara
	Escribir 'Empleado: '
	Leer empleado
	Mientras empleado!=0 Hacer
		Escribir 'Modelo: '
		Leer modelo
		Escribir 'Tipo de medio de pago: '
		Leer medioPago
		Escribir 'Día: '
		Leer dia
		Escribir 'Sede: '
		Leer sede
		// A - Incrementar atenciones por modelo
		atencionesxModelo[modelo-1]=atencionesxModelo[modelo-1]+1
		// B - Si el día es hasta la quincena, incrementar por medio de pago
		Si dia<=15 Entonces
			atencionesxMedioPago[medioPago-1]=atencionesxMedioPago[medioPago-1]+1
		FinSi
		// C - Incrementar atenciones por sede
		atencionesxSede[sede-1]=atencionesxSede[sede-1]+1
		Escribir 'Empleado: '
		Leer empleado
	FinMientras
	// PUNTO A - Modelo con menor cantidad de atenciones
	cantidadMenorAtenciones = atencionesxModelo[0]
	modeloMenorAtenciones = 1
	Para i<-1 Hasta 14 Con Paso 1 Hacer
		Si atencionesxModelo[i]<cantidadMenorAtenciones Entonces
			cantidadMenorAtenciones = atencionesxModelo[i]
			modeloMenorAtenciones = i+1
		FinSi
	FinPara
	Escribir 'PUNTO A'
	Escribir 'Modelo con menor cantidad de atenciones: ',modeloMenorAtenciones
	Escribir 'Cantidad menor de atenciones: ',cantidadMenorAtenciones
	// PUNTO B - Medio de pago con mayor cantidad de atenciones en primera quincena
	Para i<-0 Hasta 9 Con Paso 1 Hacer
		Si atencionesxMedioPago[i]>cantidadMayorAtenciones Entonces
			cantidadMayorAtenciones = atencionesxMedioPago[i]
			medioPagoMasAtenciones = i+1
		FinSi
	FinPara
	Escribir 'PUNTO B'
	Escribir 'Medio de pago con mayor cantidad de atenciones en primera quincena: ',medioPagoMasAtenciones
	Escribir 'Cantidad mayor de atenciones: ',cantidadMayorAtenciones
	// PUNTO C - Atenciones por sede
	Escribir 'PUNTO C'
	Para i<-0 Hasta 3 Con Paso 1 Hacer
		Escribir nombresSede[i],': ',atencionesxSede[i],' atenciones.'
	FinPara
FinAlgoritmo
