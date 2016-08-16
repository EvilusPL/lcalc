/*
 * lcalc.c
 * 
 * Copyright 2016 Jaroslaw Rauza <jarek@kotori>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */


#include <stdio.h>

int calc_pl()
{
	int a,b,c;
	printf("Podaj a: ");
	scanf("%i", &a);
	printf("Podaj b: ");
	scanf("%i", &b);
	if (a < 1 || b < 1)
	{
		printf("Blad, zle dane !\n");
	}
	else
	{
		calc:
		printf("Podaj mi co chcesz zrobic:\n");
		printf("1) Dodac\n");
		printf("2) Odjac\n");
		printf("3) Pomnozyc\n");
		printf("4) Podzielic\n");
		printf("5) Obliczyc modulo\n");
		printf("6) Zakonczyc program\n");
		printf("Twoj wybor to: ");
		scanf("%i", &c);
		if ( c < 1 || c > 6 )
		{
			goto calc;
		}
		else if ( c == 1)
		{
			printf("Wynik dodawania to: %i\n", a+b);
		}
		else if ( c == 2)
		{
			printf("Wynik odejmowania to: %i\n", a-b);
		}
		else if ( c == 3)
		{
			printf("Wynik mnozenia to: %i\n", a*b);	
		}
		else if ( c == 4)
		{
			printf("Wynik dzielenia to: %i\n", a/b);
		}
		else if ( c == 5)
		{
			printf("Wynik modulo to: %i\n", a%b);
		}
		else if ( c == 6)
		{
			return 0;
		}
	}
}

int calc_eng()
{
	int a,b,c;
	printf("Input a: ");
	scanf("%i", &a);
	printf("Input b: ");
	scanf("%i", &b);
	if (a < 1 || b < 1)
	{
		printf("Error, bad data !\n");
	}
	else
	{
		calc:
		printf("What do you want to do:\n");
		printf("1) Addition\n");
		printf("2) Subtraction\n");
		printf("3) Multiplication\n");
		printf("4) Division\n");
		printf("5) Modulo\n");
		printf("6) End program\n");
		printf("Your choice: ");
		scanf("%i", &c);
		if ( c < 1 || c > 6 )
		{
			goto calc;
		}
		else if ( c == 1)
		{
			printf("Result of addition: %i\n", a+b);
		}
		else if ( c == 2)
		{
			printf("Result of subtraction: %i\n", a-b);
		}
		else if ( c == 3)
		{
			printf("Result of multiplication: %i\n", a*b);	
		}
		else if ( c == 4)
		{
			printf("Result of division: %i\n", a/b);
		}
		else if ( c == 5)
		{
			printf("Result of modulo: %i\n", a%b);
		}
		else if ( c == 6)
		{
			return 0;
		}
	}
}

int main(int argc, char **argv)
{
	int lang;
	printf("Jaki wybierasz jezyk? (1 - polski, 2 - english)?\n");
	scanf("%i", &lang);
	if (lang == 1)
	{
		calc_pl();
	}
	else
	{
		calc_eng();
	}
	return 0;
}

