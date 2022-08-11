#/*****************************************************
#*Fecha: 05-agosto-2022
#*Autor: Edna Sofia Orjuela Puentes
#*Materia: Introducción a HPC
#*Tema: Introducción Lenguaje de Programación C++
#*Tópico: MakeFile-Automatización de compilación
#*******************************************************

#El archivo MakeFile pemite: -c: crea el objeto y 
#el -o: crear el ejecutable enlazando el objeto
  
  
#********************************
# PROCESO DE COMPILACIÒN  
#  1) Código fuente
#  2) Preprocesamiento
#  3) Generación de código
#  4) Objeto
#  5) Enlace
#  6) Programa ejecutable 
#**********************************

GCC = g++
GFLAGS = -ansi -pedantic -Wall 
MATHFLAGS = -lm

PROGS = taller_main

all: $(PROGS)

taller_main:
	$(GCC) $(GFLAGS) -c $@.cpp
	$(GCC) $(GFLAGS) -c taller_lib.cpp
	$(GCC) $(GFLAGS) -o $@ $@.o taller_lib.o $(MATHFLAGS )
	
clean: 
	$(RM) *.o $(PROGS)
