#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int animacion_error ()
{
    printf("Uno de los datos ingresados no es entero, vuelva a intentarlo");
    sleep(1);
    printf(".");
    sleep(1);
    printf(".");
    sleep(1);
    printf(".");
}

int limpia_pantalla()
{
    system("cls");
}

int validacion_num(char *cadena)
{
   int i, valor;
   int tiene_punto = 0;


   for(i=0; i < strlen(cadena); i++)
   {
        valor = cadena[ i ] - '0';

        if(valor < 0 || valor > 9)
        {
            /* El primer caracter es: - */
            if(i==0 && valor==-3) continue;

            /* Verifica que solo tenga un: . */
            if(valor==-2 && !tiene_punto)
            {
                tiene_punto=1;
                continue;
            }

            return 0;
        }
   }
   return 1;
}

int ejercicio_1()
{
    int x=1,y;
    system("cls");

    printf("A continuacion se le mostrara un bucle del 1 al 10\n");

    do
    {
        printf("%d ",x);
        x++;
    } while (x<=10);
}

int ejercicio_2()
{
    int x=0;
    system("cls");
    printf("A continuacion se le mostrar un bucle donde se mostraran los numeros pares entre 1 y 25\n");

    do
    {
        x++;
        if (x % 2==0)
        {
            printf("%d ", x);
        }

    } while (x<25);
}

int ejercicio_3()
{
    int x=0;

    system("cls");

    printf("A continuacion se le mostrara un bucle donde se mostraran los numeros  entre 1 y 100\n");

    do
    {
        x++;
        if (x % 5==0)
        {
            printf("%d ", x);
        }
    } while (x<100);
}

int ejercicio_4()
{
    int contador,sumatoria=0;
    system("cls");

    printf("Se sumara todos los valores comprendidos del 1 al 10\n");

    do
    {
        sumatoria = sumatoria + contador;
        contador++;
        printf("%d ",sumatoria);

    } while (contador<=10);
}

int ejercicio_5()
{
    char x[50];
    int val=0,y=0,z=0,m=0;
    system("cls");

    printf("Ingrese un numero que desea saber su tabla de multiplicar\n");
    system("pause");
    system("cls");

    while(val==0)
    {
        system("cls");
        printf("Ingrese el numero que desea multiplicar : ");
        gets(x);
        val=validacion_num(x);

        if(val==0)
        {
            animacion_error();
            system("pause");

        }
    }
    fflush(stdin);

    m=atoi(x);

    do
    {
        z=m*y;
        printf("%d * %d = %d\n",m,y,z);
        y++;

    } while (y<=10);
    printf("Ya terminamos de multiplicar");
}

int ejercicio_6()
{
    char res;
    system("cls");

    printf("Bienvenido a este programa en que se le preguntara si quiere estar con nosotros\n");
    printf("Desea entrar al programa?\n");
    scanf("%c", &res);

    if (res>=65 && res<=90 || res>=97 && res<=122)
    {
        if (res=='s')
        {
            do
            {
                printf("Desea continuar en el programa? (s/n)\n");
                scanf("%c",&res);
                system("cls");

            } while (res != 'n');
            printf("Ta bn unu, pase un buen dia");
        }
        else
        {
            if (res=='n')
            {
                printf("Chale, okay unu. Que pase buen dia");
            }
            else
            {
                animacion_error();
            }
        }
    }
    else
    {
        animacion_error();
    }
}

int ejercicio_7()
{
    int contador=0, y=0, sumatoria=0,val=0,m=0;
    char x[50];

    system("cls");

    printf("Ingrese el numero de veces que desea hacer la suma\n");
    system("pause");

    while(val==0)
    {
        system("cls");
        printf("Ingrese cuantas veces quiere sumar: ");
        gets(x);
        val=validacion_num(x);
        if(val==0)
        {
            animacion_error();
            system("pause");

        }
    }

    fflush(stdin);
    m=atoi(x);

    do
    {
        sumatoria= sumatoria + contador;
        contador++;
        printf("%d ",sumatoria);
    } while (contador <= m);
    printf("\nYa termino.");
}

int ejercicio_8()
{
    int x=0,val=0;
    char m[50];
    system("cls");

    printf("Ingrese un numero mayor que 100\n");
    system("pause");

    while (x <= 100)
    {
        while(val==0)
    	{
        	system("cls");
        	printf("Ingrese el numero: ");
        	gets(m);
        	val=validacion_num(m);
        	if(val==0)
        	{
            	animacion_error();
            	system("pause");

        	}
    	}
		x=atoi(m);

		if(x<100)
		{
			printf("El numero ingresado es menor que 100, vuelva a intentarlo\n");
            system("pause");
		}
        system("cls");
		val=0;
    }
    printf("El numero ingresado es mayor que 100, gracias");
}

int ejercicio_9()
{
    int x, y,val=0;
	char m[50];
	system("cls");
	printf("Ingrese un numero menor o igual que 10\n");
	system("pause");

	while(val==0)
    {
        system("cls");
        printf("Ingrese el numero: ");
        gets(m);
        val=validacion_num(m);
        if(val==0)
        {
            animacion_error();
            system("pause");

        }
    }

	x=atoi(m);

	while(x<=10)
	{
		switch(x)
		{
			case 1:
				if (x == 1)
				{
					y = (x * 1);
					printf("La respuesta es: %d\n", y);
					return 0;
				}
			case 2:
				if (x == 2)
				{
					y = (x * 1);
					printf("La respuesta es: %d\n", y);
					return 0;
				}
			case 3:
				if (x == 3)
				{
				    y = x*(x - 1)*(x - 2);
					printf("La respuesta es: %d\n", y);
					return 0;
				}
			case 4:
				if (x == 4)
				{
				    y = x*(x - 1)*(x - 2)*(x - 3);
					printf("La respuesta es: %d\n", y);
					return 0;
				}
			case 5:
				if (x == 5)
				{
					y = x*(x - 1)*(x - 2)*(x - 3)*(x - 4);
					printf("La respuesta es: %d\n", y);
					return 0;
				}
			case 6:
				if (x == 6)
				{
			        y = x*(x - 1)*(x - 2)*(x - 3)*(x - 4)*(x - 5);
					printf("La respuesta es: %d\n", y);
					return 0;
				}
			case 7:
				if (x == 7)
				{
			        y = x*(x - 1)*(x - 2)*(x - 3)*(x - 4)*(x - 5)*(x - 6);
					printf("La respuesta es: %d\n", y);
					return 0;
				}
			case 8:
				if (x == 8)
				{
					y = x*(x - 1)*(x - 2)*(x - 3)*(x - 4)*(x - 5)*(x - 6)*(x - 7);
					printf("La respuesta es: %d\n", y);
					return 0;
				}
			case 9:
				if (x == 9)
				{
					y = x*(x - 1)*(x - 2)*(x - 3)*(x - 4)*(x - 5)*(x - 6)*(x - 7)*(x - 8);
					printf("La respuesta es: %d\n", y);
					return 0;
				}
			case 10:
			if (x == 10)
			{
				y = x*(x - 1)*(x - 2)*(x - 3)*(x - 4)*(x - 5)*(x - 6)*(x - 7)*(x - 8)*(x - 9);
				printf("La respuesta es: %d\n", y);
				return 0;
			}
			case 11:
			if (x<=0 && x>=11)
			{
				printf("Error, ingrese un dato dentro del rango\n");
				return 0;
			}
			return 0;
		}
	}
	getch();
}

int ejercicio_10()
{
    float a,b,c,d,e,suma=0,media=0;
    int validacion=0;
    char num1[10],num2[10],num3[10],num4[10],num5[10];

    system("cls");

    printf("Introduzca 5 numeros para calcular la suma y su media\n");
    system("pause");

    while(validacion==0)
    {
        system("cls");
        printf("Ingrese el primer numero : ");
        gets(num1);
        validacion=validacion_num(num1);
        if(validacion==0)
        {
            animacion_error();
            getch();
        }

    }
    validacion=0;
    while(validacion==0)
    {
        system("cls");
        printf("Ingrese el segundo numero : ");
        gets(num2);
        validacion=validacion_num(num2);

        if(validacion==0)
        {
            animacion_error();
            system("pause");
        }
    }
    validacion=0;
    while(validacion==0)
    {
        system("cls");
        printf("Ingrese el tercer numero : ");
        gets(num3);
        validacion=validacion_num(num3);

        if(validacion==0)
        {
            animacion_error();
            system("pause");
        }
    }
    validacion=0;
    while(validacion==0)
    {
        system("cls");
        printf("Ingrese el cuarto numero : ");
        gets(num4);
        validacion=validacion_num(num4);

        if(validacion==0)
        {
            animacion_error();
            system("pause");
        }
    }
    validacion=0;
    while(validacion==0)
    {
        system("cls");
        printf("Ingrese el quinto numero : ");
        gets(num5);
        validacion=validacion_num(num5);

        if(validacion==0)
        {
            animacion_error();
            system("pause");
        }
    }
    fflush(stdin);
    a=atof(num1);
    b=atof(num2);
    c=atof(num3);
    d=atof(num4);
    e=atof(num5);

    suma=a+b+c+d+e;
    media=suma/2;

    printf("La suma de los 5 numeros es de : %.2f \nEl promedio es de :%.2f ",suma,media);
}
int ejercicio_11()
{
    float precioHora = 0.0, hora = 0.0, salarioBruto = 0.0, impuesto = 0.0, salarioNeto = 0.0;
    printf("Este programa calcula el salario neto en base a horas trabajadas y tomando en cuenta los impuestos\nIngrese el monto del salario por hora: ");
    scanf("%f", &precioHora);
    printf("Ingrese la cantidad de horas laboradas: ");
    scanf("%f", &hora);
    //tarifas
    if (hora <= 35)
    {
        salarioBruto = hora * precioHora;
    }
    if (hora > 35)
    {
        salarioBruto = 35 * precioHora;
        hora = hora - 35;
        salarioBruto = salarioBruto + hora * (precioHora * 1.5);
    }
    //impuestos
    if (salarioBruto <= 50)
    {
        salarioNeto = salarioBruto;
    }
    if (salarioBruto > 50 && salarioBruto <= 90)
    {
        impuesto = (salarioBruto - 50) * 0.25;
        salarioNeto = salarioBruto - impuesto;
    }
    if (salarioBruto > 90)
    {
        impuesto = (salarioBruto - 90) * 0.45;
        salarioNeto = salarioNeto + (salarioBruto - impuesto) - 10;
    }

    printf("Su salario bruto es de: %.2f\nSu salario con deduccion de impuestos es de: %2.f\n", salarioBruto, salarioNeto);
}

int ejercicio_12()
{
    int x,y=1,contador=0,val=0;
    char num[50];
    system("cls");

    printf("Ingrese un numero y determinaremos si es primo o no\n");
    system("pause");

    while(val==0)
    {
        system("cls");
        printf("Ingrese el numero : ");
        gets(num);
        val=validacion_num(num);
        if(val==0)
        {
            animacion_error();
            system("pause");
        }
    }
    x=atoi(num);
    do
    {
        if (x%y==0)
        {
            contador++;
        }
        y++;
    } while (y<=num);

    if (contador>2)
    {
        printf("El numero ingresado es compuesto");
    }
    else
    {
        printf("El numero ingresado es primo");
    }
}

int ejercicio_13()
{
    int x = 0;
	char pregunta [20] , pregunta2 [20], respuesta [20];
	strcpy(respuesta, "si");
	printf("hola Cliente-San, un gusto verlo por aqui\n");
	printf("Este programa muestra los numeros comprendidos entre 1 y 100 \n");
	
	while (x<= 101)
	{
		printf("\nEl numero es: %d \n", x + 1);
        x ++;
        
        if (x == 20)
		{
			printf("\nDesea seguir imprimiendo?");
			printf("\n S = Si \n");
			printf("\n N = No \n");
			gets(pregunta);

			if ( strcmp( respuesta,pregunta ) == 0 )
			{
				x = 20;
				while (x <= 40)
				{
					printf("TADAAAAAAAA/n");
					printf("\nEl numero es: %d \n", x);
					x ++;
				}
			}
			if ( strcmp(respuesta, pregunta) != 0)
			{
				system("pause");
				return 0;
			}
		}
		if ( x == 40)
		{
            printf("\nDesea seguir imprimiendo?");
			printf("\n S = Si \n");
			printf("\n N = No \n");
			gets(pregunta);

			if ( strcmp( respuesta,pregunta ) == 0 )
			{
				x = 20;
				while (x <= 40)
				{
					printf("TADAAAAAAAA/n");
					printf("\nEl numero es: %d \n", x);
					x ++;
				}
			}
			if ( strcmp(respuesta, pregunta) != 0)
			{
				system("pause");
				return 0;
			}
		}
		
		if (x == 60)
		{
			printf("\nDesea seguir imprimiendo?");
			printf("\n S = Si \n");
			printf("\n N = No \n");
			gets(pregunta);

			if ( strcmp( respuesta,pregunta ) == 0 )
			{
				x = 60;
				while (x <= 40)
				{
					printf("TADAAAAAAAA/n");
					printf("\nEl numero es: %d \n", x);
					x ++;
				}
			}
			if ( strcmp(respuesta, pregunta) != 0)
			{
				system("pause");
				return 0;
			}
		}
		if ( x == 80)
		{
			printf("\nDesea seguir imprimiendo?");
			printf("\n S = Si \n");
			printf("\n N = No \n");
			gets(pregunta);

			if ( strcmp( respuesta,pregunta ) == 0 )
			{
				x = 80;
				while (x <= 40)
				{
					printf("TADAAAAAAAA/n");
					printf("\nEl numero es: %d \n", x);
					x ++;
				}
			}
			if ( strcmp(respuesta, pregunta) != 0)
			{
				system("pause");
				return 0;
			}
		}
		
		if ( x == 100)
		{
			system("pause");
			return 0;
		}
	}
}

int ejercicio_14()
{
    int suma=0,cont=0,media=0;
    system("cls");

    printf("Se le mostrar la suma y la media de todos los valores comprendidos entre el 1 y el 200\n");

    do
    {
        suma+=cont;
        cont++;
        printf("%d ",suma);
    } while (cont<=200);
    media=suma/2;

    printf("\nLa suma: %d, La media: %d",suma,media);
}

int ejercicio_15()
{
    float x=0,y,iva,desc,factura;
    int val=0;
    char m[50];
    system("cls");

    printf("Ingrese el importe en bruto\n");
    system("pause");

    while(val==0)
    {
        system("cls");
        printf("Ingrese el importe en bruto: ");
        gets(m);
        val=validacion_num(m);

        if(val==0)
        {
            animacion_error();
            system("pause");
        }
    }
    fflush(stdin);

    x=atof(m);

    if (x<50000)
    {
        iva=x*0.15;
        factura=x+iva;
        printf("El importe en su factura con iva es de: %.2f",factura);
    }
    else
    {
        desc=x*0.05;
        iva=desc*0.15;
        factura=x+iva;
        printf("El importe en su factura con el descuento e iva incluido es de: %.2f",factura);
    }
}

int ejercicio_16()
{
    int i = 1;
    int Sumadenumerosneg=0, variabletemporal,val=0;
	char m[20];
	system("cls");

	printf("Se le pedira 10 numeros y solo se sumaran los negativos\n");
	system("pause");

	while (i <= 10)
	{
		while(val==0)
    	{
        	system("cls");
        	printf("Ingrese el dato numero %d: ",i);
        	gets(m);
        	val=validacion_num(m);
        	if(val==0)
        	{
            	animacion_error();
            	system("pause");

        	}
    	}
		variabletemporal=atoi(m);

		if(variabletemporal<0)
		{
			Sumadenumerosneg -= variabletemporal;
		}
		variabletemporal++;
		i++;
		val=0;
	}
	printf("La suma es -%d\n", Sumadenumerosneg );
	system("pause");
}

int ejercicio_17()
{
    float lado1, lado2, lado3;
	printf("Este programa clasifica triangulos mediante sus lados\nIngrese el valor del primer lado: ");
	scanf("%f", &lado1);
	printf("Ingrese el valor del segundo lado: ");
	scanf("%f", &lado2);
	printf("Ingrese el valor del tercer lado: ");
	scanf("%f", &lado3);
	if (lado1 + lado2 >= lado3 && lado1 + lado3 >= lado2 && lado2 + lado3 >= lado1)
	{
		if(lado1 == lado2 && lado1 == lado3)
		{
			printf("Se trata de un triangulo equilatero\n");
		}
		else if (lado1 == lado2 || lado1 == lado3)
		{
			printf("Es un triangulo isosceles\n");
		}
		else if (lado1 != lado2 && lado1 != lado3)
		{
			printf("Es un triangulo escaleno\n");
		}
	}
	else
	{
		printf("Los datos ingresados no forman un triangulo\n");
	}
}

int ejercicio_18()
{
    int totalFilas = 8, filas = 0, asteriscos = 0, espacios = 0;
    while (filas <= totalFilas)
    {
        while (espacios < totalFilas - filas)
        {
            printf(" ");
            espacios++;
        }
        while (asteriscos < ((filas * 2) - 1))
        {
            printf("*");
            asteriscos++;
        }
    espacios = 0;
    asteriscos = 0;
    filas++;
    printf("\n");
    }
    printf("       *       \n");
}

int ejercicio_19()
{
    int unidades = 0, precioUnidad = 100;
    float descuento = 0, subtotal = 0, total = 0;
    printf("Este es un programa de facturacion\nIngrese el numero de unidades a facturar: ");
    scanf("%d", &unidades);
    if (unidades < 1)
    {
        printf("Las unidades ingresadas deben ser positivas!\n");
    }
    if (unidades == 1)
    {
        descuento = 0;
        subtotal = precioUnidad * unidades;
        total = subtotal;
        printf("Sus unidades fueron: %d, Su descuento es de: %.2f, Su subtotal es de: %.2f, Su total es de: %.2f\n", unidades, descuento, subtotal, total);

    }
    if (unidades >= 1)
    {
        if (unidades == 2)
        {
            subtotal = precioUnidad * unidades;
            descuento = unidades * 5;
            total = subtotal - descuento;
            printf("Sus unidades fueron: %d, Su descuento es de: %.2f, Su subtotal es de: %.2f, Su total es de: %.2f\n", unidades, descuento, subtotal, total);

        }
        if (unidades == 3)
        {
            subtotal = precioUnidad * unidades;
            descuento = unidades * 10;
            total = subtotal - descuento;
            printf("Sus unidades fueron: %d, Su descuento es de: %.2f, Su subtotal es de: %.2f, Su total es de: %.2f\n", unidades, descuento, subtotal, total);

        }
        if (unidades >= 4)
        {
            subtotal = precioUnidad * unidades;
            descuento = unidades * 15;
            total = subtotal - descuento;
            printf("Sus unidades fueron: %d, Su descuento es de: %.2f, Su subtotal es de: %.2f, Su total es de: %.2f\n", unidades, descuento, subtotal, total);


        }
    }

}

int ejercicio_20()
{
    char caracter;
    int comas = 0, punto = 0, contCaracter = 0;
    printf("Este programa lee un texto y calcula cuantos caracteres tiene\nIngrese un texto: ");
    while(punto == 0)
    {
        scanf("%c", &caracter);
        if (caracter == '.')
        {
            punto++;
            printf("Llego al final de la cadena\n");
        }
        else if (caracter == ',')
        {
            comas++;
        }
        else if (isalpha(caracter))
        {
            contCaracter++;
        }
    }
    printf("Las comas encontradas fueron: %d, El numero de caracteres leidos es de: %d\n",comas, contCaracter );
}
