Algoritmo sin_titulo
	DEFINIR numero1,numero2,numero3 Como Real
	Escribir "Digite primer numero"
	Leer numero1
	Escribir "Digite segundo numero"
	Leer numero2
	Escribir "Digite tercer numero"
	Leer numero3
	
	Si numero1>numero2 & numero1>numero3 & numero2>numero3 Entonces
		Escribir "el numero menor es " ,numero3, "el de la mitad es " ,numero2, "el mayor es " ,numero1
	SiNo
		Si numero1>numero2 & numero1>numero3 & numero2<numero3 Entonces
			Escribir "el numero menor es " ,numero2, "el de la mitad es " ,numero3, "el mayor es " ,numero1
		SiNo
			Si numero3>numero1 & numero3>numero2 & numero1>numero2 Entonces
				Escribir "el numero menor es " ,numero2, "el de la mitad es " ,numero1, "el mayor es " ,numero3
			SiNo
				Si numero3>numero1 & numero3>numero2 & numero1<numero2 Entonces
					Escribir "el numero menor es " ,numero1, "el de la mitad es " ,numero2, "el mayor es " ,numero3
				SiNo
					Si numero2>numero1 & numero2>numero3 & numero1>numero3 Entonces
						Escribir "el numero menor es " ,numero3, "el de la mitad es " ,numero1, "el mayor es " ,numero2
					SiNo
						Si numero2>numero1 & numero2>numero3 & numero1<numero3 Entonces
							Escribir "el numero menor es " ,numero1, "el de la mitad es " ,numero3, "el mayor es " ,numero2
						SiNo
							Si numero1=numero2 | numero2=numero3 | numero1=numero3 Entonces
								Escribir "numeros pares "
							Fin Si
						Fin Si
					Fin Si
				Fin Si
	Fin Si
FinSi
FinSi

FinAlgoritmo
