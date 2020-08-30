char* OrigFileText="Seleccione archivo ORIGINAL SIN MODIFICAR";
char* NewFileText="Seleccione archivo NUEVO PREVIAMENTE MODIFICADO";
char* NewIPSText="Seleccione nombre del archivo IPS a crear";
char* UseIPSText="Seleccione archivo IPS a usar";
char* PatchFileText="Seleccione archivo a parchear";

char* Menu_Log="Crear un archivo &Log";
char* Menu_Header="Agregar/Eliminar &Header de SNES";
char* Menu_Warnings="Advertencias &Extra";

char* ROMTypeList="Archivos ROM más habituales\0*.smc;*.swc;*.sfc;*.nes;*.gb;*.gbc;*.gba;*.sms;*.smd;*.ngp\0Todos los archivos (*.*)\0*.*\0\0"; //*.vb;
char* IPSTypeList="Archivos de parcheo tipo IPS (*.ips)\0*.ips\0Todos los archivos (*.*)\0*.*\0\0";

char* LipsErrorText[]={
"Error desconocido", "Ha ocurrido un error no especificado.", //0
"¡No se pudo abrir o leer archivo!", "El programa no pudo abrir un archivo para su lectura.", //1
"¡No se pudo escribir en archivo!", "El programa no pudo abrir un archivo para su escritura.", //2
"¡El archivo tiene atributo de \"Solo Lectura\"!", "Haga click derecho en el archivo, seleccione \"Propiedades\",\r\ny desmarque el atributo de \"Solo Lectura\".", //3
"¡Error!", "Debe incluir una extensión al nombre del archivo.", //4
"¡Esto no es un archivo IPS!", "Este archivo no es un parche IPS.", //5
"¡Es exactamente el mismo archivo!", "En serio, debes elegir dos nombres de archivo DIFERENTES para crear un parche...", //6
"¡No se pudo crear un parche para todo el archivo!", "Tu archivo modificado contiene cambios en la marca límite de los 16MB o por encima. El formato IPS es incapaz de redireccionar esos offsets. El parche generado sólo incluye los cambios por debajo de los 16MB.", //7
"¡Creación de parche completada!", "¡El parche IPS se ha creado correctamente!", //8
"¡Parcheado completado!", "¡El archivo se parcheó correctamente!", //9
"¡Los archivos son iguales!", "El parche generado no hará nada...", //10
"¡Error!", "Lo siento, pero el formato de parche IPS no permite truncar archivos de 16MB o superiores.", //11
"Posible problema en archivo IPS", "El archivo ha sido parcheado, pero los datos del archivo IPS parecen truncados o desalineados...", //12
"El archivo ha sido parcheado, sin embargo...", "El parche no define que poner en una o varias areas extendidas del archivo.  Técnicamente no es necesario, pero es un indicio de que has parcheado un archivo del tamaño equivocado.", //13

""
};

