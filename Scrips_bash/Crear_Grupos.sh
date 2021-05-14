#!/bin/bash
ROOT_UID=0
SUCCESS=0
#Validaciòn de usuario root
if [ "$UID" -ne "$ROOT_UID" ]
then
  echo "Se debe estar como root para ejecutar este script"
  exit $E_NOTROOT
fi  

file=$1
#VAlidaciòn de carga de archivo de lista.
if [ "${file}X" = "X" ];
then
   echo "Debe indicar el archivo del listado con Nombres de grupo a ingresar..."
   exit 1
fi

crearGrupo(){
    #Iniciamos la recepciòn de la Devoluciòn del shell para el nombre del grupo
	eval nombreGrupo="$1"
	#Evaluamos la exitencia del grupo en la ruta etc/group
	if grep -q ${nombreGrupo} /etc/group 
    then  #Si el grupo existe mandar alerta de existencia.
        echo "Grupo [${nombreGrupo}] No se pudo agregar...Ya existe"
	else #Si no existe  crear nuevo grupo y guardalo en una lista de gupos creados 
        groupadd "${nombreGrupo}"
		echo "Grupo [${nombreGrupo}] agregado correctamente..."
        echo "${nombreGrupo}" >>ListaGruposCreados.csv
		
	fi
}

while IFS=: read -r f1
do
	crearGrupo "\${f1}"	
    #Funciòn de recepciòn de los datos.
done < ${file}

exit 0