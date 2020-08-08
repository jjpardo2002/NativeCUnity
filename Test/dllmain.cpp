// dllmain.cpp : Defines the entry point for the DLL application.
#include "pch.h"
#include <stdint.h>
#include <stdlib.h>
#include <time.h>
#define DllExport __declspec (dllexport)
extern "C"
{
	
	DllExport const char* Reversar(char* nombre)
	{
			char ch, *p, *q;

			for (q = nombre; *q != '\0'; ++q)
				;
			if (q > nombre)
				--q;
  

		  for (p = nombre; p < q; ++p, --q) {
			ch = *p;
			*p = *q;
			*q = ch;
		  }
		return nombre;
	}

}