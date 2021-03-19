/*
  Archivo: Tiempo.cpp
  Autor: Ángel García Baños
  Email: angel.garcia@correounivalle.edu.co
  Fecha creación: 2020-09-19
  Fecha última modificación: 2021-03-07
  Versión: 0.1
  Licencia: GPL
*/


#include "Tiempo.h"

Tiempo::Tiempo()
{
}


Tiempo::~Tiempo()
{
}


void Tiempo::pasaPara(Persona persona)
{
  personas.push_back(persona);
}


int Tiempo::buscarCoincidenciaEnCasa(int tiempoMaximo)
{
  for(int tiempo=0; tiempo<tiempoMaximo; tiempo++)
  {
    for(int cualPersona=0; cualPersona<personas.size(); cualPersona++)
      personas[cualPersona].haPasadoUnDia();

    bool estanTodasEnCasa = true;
    for(int cualPersona=0; cualPersona<personas.size(); cualPersona++)
      if(not personas[cualPersona].estaEnCasa())
        estanTodasEnCasa = false;
        
    if(estanTodasEnCasa)
      return tiempo;
  }
  return -1;  // El convenio es que si no se encuentra, se retorna -1
}



