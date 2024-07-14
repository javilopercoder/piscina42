#!/bin/bash
echo $FT_NBR1 = \\\'\\\?\\\"\\\\\\\"\\\'\\\\ + $FT_NBR2=rcrdmddd | sed "s/\'/0/g" | tr '\\\"\?\!' 1234 | tr 'mrdoc' 01234 | xargs echo 'obase=13; ibase=5;' | bc | tr 0123456789ABC 'gtaio luSnemf'
# 1 Concatena las variables
# 2 Reemplaza comillas simples por 0
# 3 Traduce los caracteres especiales según la tabla 1234
# 4 Ahora los caracteres según la tabla 01234
# 5 Prepara el comando para el siguiente
# 6 Realiza conversión numérica según lo especificado
# 7 Lo traduce según la tabla gtaio luSnemf
