// DATA.CPP
// Codigo para controle de datas

#include <iostream>
#include "data.h"

Data::Data() : dia(0), mes(0), ano(0), dataOk(false) {}

bool Data::anoBissexto() const
{
  return
  (
    //Classe lógica não precisa escrever if na condição 
    (ano % 400 == 0) or
    (ano % 4 == 0 and ano % 100 != 0)
  );
}

char Data::ultimoDiaNoMes(void) const
{
  if (mes == FEVEREIRO)
    return (anoBissexto()) ? 29 : 28;
  else if (mes <= JULHO) // Quando houve as alterações realizadas pelo imperador que quebrou a lógica de Mês impar ser impar
    return (mes % 2 != 0) ? 31 : 30;
  else 
    return (mes % 2 != 0) ? 30 : 31; // Aqui a lógica foi invertida mês impar termina em par
}

void Data::validaData(void)
{
  dataOk = (ano >=    1) and
           (ano <= 9999) and
           (mes >=    1) and
           (mes <=   12) and
           (dia >=    1) and
           (dia <= ultimoDiaNoMes()) and
      not ((ano == 1582) and
           (mes ==   10) and
           (dia >=    5) and
           (dia <=   14));
}

void Data::alteraData(short dia, short mes, short ano) {
  this->dia = dia;
  this->mes = mes;
  this->ano = ano;
  validaData();
}

void Data::mostraData(void) const {
  if (dataOk == true)
    {
      std::cout.fill('0');// acrescenta o zero quando for inserido um,a data 1/6/2024 por exemplo
      std::cout.width(2); std::cout << dia << '/';
      std::cout.width(2); std::cout << mes << '/';
      std::cout.width(4); std::cout << ano << std::endl;
    }
  else
    std::cout << "**/**/****" << std::endl;
}