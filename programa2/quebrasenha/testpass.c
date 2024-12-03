/* ************************************************************************ *
 *    NSA - quebra senha - prova 2018-05-15 - versao 1                      *
 *    testa funcao da biblioteca password.h                                 *
 *                                                                          *
 *    Copyright (C) 2018 by Ruben Carlo Benante                             *
 *                                                                          *
 *    This program is free software; you can redistribute it and/or modify  *
 *    it under the terms of the GNU General Public License as published by  *
 *    the Free Software Foundation; either version 2 of the License, or     *
 *    (at your option) any later version.                                   *
 *                                                                          *
 *    This program is distributed in the hope that it will be useful,       *
 *    but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *    GNU General Public License for more details.                          *
 *                                                                          *
 *    You should have received a copy of the GNU General Public License     *
 *    along with this program; if not, write to the                         *
 *    Free Software Foundation, Inc.,                                       *
 *    59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
 *                                                                          *
 *    To contact the author, please write to:                               *
 *    Ruben Carlo Benante <rcb@upe.br>                                      *
 *    Webpage: http://www.beco.cc                                           *
 *    Phone: +55 (81) 3184-7555                                             *
 * ************************************************************************ *
 *
 */

#include <stdio.h>
#include "password.h"

int main(void)
{
    char se[7];

    printf("entre uma senha de 6 caracteres:");
    fgets(se, 7, stdin);
    printf("O arquivo ");
    if(!abrir(se))
        printf("nao ");
    printf("abriu.\n");

    return 0;
}
