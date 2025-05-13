
Verificación formal de funciones en C usando Frama-C
Autor: Andrés Felipe Eusse Chavarría
Archivo: practica3.c

Este proyecto tiene como propósito analizar formalmente una función escrita en lenguaje C utilizando la herramienta Frama-C.

Requisitos:
- Ubuntu 24.04 (se usó en WSL en Windows 11)
- GCC 13.3.0
- Frama-C 30.0 (Zinc)

Para ejecutar el análisis:

1. Coloque el código fuente en un archivo llamado practica3.c
2. Abra la terminal y diríjase al directorio del archivo
3. Ejecute uno de los siguientes comandos:

   frama-c -wp -rte practica3.c

   o

   frama-c-gui -wp -rte practica3.c

4. Frama-C verificará si se cumplen las condiciones del contrato ACSL.

El contrato especifica que:
- Los punteros deben ser válidos
- Los valores deben estar dentro de rangos seguros para evitar overflow
- La relación algebraica inicial debe cumplirse
- Luego de modificar los valores, su producto debe ser 6

El código ha sido verificado con éxito.

Para más detalles, puede consultar el video de referencia: https://youtu.be/m1JwahpQV9g0
