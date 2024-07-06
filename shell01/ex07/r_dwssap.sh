cat /etc/passwd | sed '/^#/d' | awk 'NR % 2 == 0 {print $0}' | awk -F ":" 
'{  print $1 }' | rev | sort -fnr | awk -v FT_LINE1="$FT_LINE1" -v 
FT_LINE2="$FT_LINE2"  'NR >= FT_LINE1 && NR <= FT_LINE2 { print $0 }' | tr 
'\n' ' '  | sed 's+ +, +g' | sed 's+, $+.+g' | tr -d '\n'
# 1 Lee el archivo passwd
# 2 Elimina las líneas que comienzan con #
# 3 Imprime las líneas pares
# 4 Extrae el primer campo
# 5 Invierte
# 6 Ordena de manera numérica ignorango el caso (-f), en orden inverso
# 7 Imprime las líneas en el rango especificado por las variables (han de 
estar definidas)
# 8 Cambia los saltos de línea por espacios
# 9 Ahora los que eran espacios por comas + espacio
# 10 Reemplaza la última coma por un punto
# 11 Quita los saltos de línea restantes
