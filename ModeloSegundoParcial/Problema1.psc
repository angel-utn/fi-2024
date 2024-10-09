Algoritmo sin_titulo
	Definir CANT Como Entero
	Definir i,codRuta,ciudadOrigen,ciudadFin,tipoRuta,peaje Como Entero
	Definir km Como Real
	CANT = 10
	// A
	Definir codRutaMayor,ciudadOrigenMayor,ciudadFinMayor Como Entero
	Definir kmMayor Como Real
	kmMayor = 0
	// B
	Definir cantRutasConPeaje Como Entero
	Definir porcentajeRutasConPeaje Como Real
	cantRutasConPeaje = 0
	// C
	Dimension tiposRuta[5]
	Dimension nombresTiposRuta[5]
	nombresTiposRuta[0] = 'Autopista'
	nombresTiposRuta[1] = 'Asfalto'
	nombresTiposRuta[2] = 'Ripio'
	nombresTiposRuta[3] = 'Mejorado'
	nombresTiposRuta[4] = 'Tierra'
	// Inicializar el vector tiposRuta en 0
	Para i<-0 Hasta 4 Con Paso 1 Hacer
		tiposRuta[i] = 0
	FinPara
	Para i<-1 Hasta CANT Con Paso 1 Hacer
		Escribir 'Código de ruta: '
		Leer codRuta
		Escribir 'Ciudad de origen: '
		Leer ciudadOrigen
		Escribir 'Ciudad de fin: '
		Leer ciudadFin
		Escribir 'Kms: '
		Leer km
		Escribir 'Tipo de ruta: '
		Leer tipoRuta
		Escribir 'Peaje (1 = Sí, 0 = No): '
		Leer peaje
		// A - Ruta más extensa
		Si km>kmMayor Entonces
			kmMayor = km
			codRutaMayor = codRuta
			ciudadOrigenMayor = ciudadOrigen
			ciudadFinMayor = ciudadFin
		FinSi
		// B - Contar rutas con peaje
		Si peaje=1 Entonces
			cantRutasConPeaje = cantRutasConPeaje+1
		FinSi
		// C - Contar tipos de rutas
		tiposRuta[tipoRuta-1]=tiposRuta[tipoRuta-1]+1
	FinPara
	// PUNTO A - Ruta más extensa
	Escribir ''
	Escribir 'PUNTO A'
	Escribir 'Ruta más extensa: ',codRutaMayor
	Escribir 'Ciudad origen   : ',ciudadOrigenMayor
	Escribir 'Ciudad destino  : ',ciudadFinMayor
	Escribir 'Longitud        : ',kmMayor,' kms'
	Escribir ''
	// PUNTO B - Porcentaje de rutas con peaje
	porcentajeRutasConPeaje = cantRutasConPeaje*100/CANT
	Escribir 'PUNTO B'
	Escribir 'Porcentaje de rutas con peaje: ',porcentajeRutasConPeaje,' %'
	Escribir ''
	// PUNTO C - Cantidad de tipos de rutas
	Escribir 'PUNTO C'
	Para i<-0 Hasta 4 Con Paso 1 Hacer
		Escribir 'Tipo    : ',nombresTiposRuta[i]
		Escribir 'Cantidad: ',tiposRuta[i]
		Escribir ''
	FinPara
FinAlgoritmo
