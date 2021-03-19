/*
  Archivo: Tiempo.h
  Autor: Ángel García Baños
  Email: angel.garcia@correounivalle.edu.co
  Fecha creación: 2020-09-19
  Fecha última modificación: 2021-03-07
  Versión: 0.1
  Licencia: GPL
*/

/**
  CLASE: Tiempo
  
  INTENCIÓN: capturar la esencia del Tiempo como propietario de las Personas. Le puedo añadir personas para las que va a pasar el tiempo. Le puedo pedir que pase el tiempo y que chequee si se cumple una condición para todas las personas
  RELACIONES: 
  - Conoce Personas (concretamente un vector de Personas)
*/


#ifndef TIEMPO_H
#define TIEMPO_H

#include "Persona.h"
#include <vector>
using namespace std;

class Tiempo
{
  protected:
  vector <Persona> personas;

  public:
  /**
  El tiempo, el implacable, el que pasó... ♫♬♩♪♪
  */
  Tiempo();
  /**
  Destructor. No hace nada
  */
  ~Tiempo();
  /**
  El tiempo controla a las personas. Aquí se añade una persona, que va a envejecer conforme pasa el tiempo.
  @param persona
  */
  void pasaPara(Persona persona);
  /**
  Busca a ver cuando se cumple una condición para todas las personas simultáneamente.
  @param tiempoMaximo
  @return el día en que se da la coincidencia
  */
  int buscarCoincidenciaEnCasa(int tiempoMaximo);
};


#else
class Tiempo;
#endif
