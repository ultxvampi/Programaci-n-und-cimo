
def hay_cupo(reservas, capacidad):
   capacidad = 5
   reservas = []
   nombre = input("Ingrese su nombre para reservar:") #tengo q ver donde meto esto para que srivaaaa
   while capacidad < 5:
      print("Reserva registrada")
      capacidad -= 1
      print(f"Cupos disponibles: {capacidad}")
      reservas.append(nombre)
      return
   while capacidad > 5:
      print("Cupos llenos")
      break
    
      
def mostrar_resumen(reservas, capacidad):
    """Muestra cuántos cupos se usaron y la lista de reservas aceptadas."""
    while capacidad == 0:
       print(f"Ya no hay más cupos/n" \
       "---Resumen--/n" \
       "Reservas aceptadas: {reservas} {capacidad}/5")
       return
       