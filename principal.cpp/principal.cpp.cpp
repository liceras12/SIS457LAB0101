// principal.cpp.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

int main()
{
    int op;
    std::cout << "Mi nombre es Luis Fabricio Liceras Rodriguez, tengo 21 años, naci en ST. Ibañez - Santa Cruz el 12 de marzo del 2001. Mis padres se llaman Pedro Liceras Romero y Miriam Rodriguez Mamani y mi hermana Karen Gabriela Liceras Rodriguez\n";
    std::cout << "Vivi durante mis primeros 6 años en Santa Cruz para luego ir durante 1 año a Sucre, terminado el año nos mudamos con mi madre a Bermejo - Tarija con su familia, debido a la separacion de mis padres y problemas economicos causados por mi madre. Alli vivi durante 5 años en los que era pesimo estudiante y casi pierdo el año varias veces, mi madre empeoro su alcoholismo, mientras mi padre enviaba dinero trabajando fuera del pais\n ";
    std::cout << "Posteriormente vinimos a Sucre nuevamente, despues de que mi madre se perdiera por varios dias durante un viaje de vacaciones en Santa Cruz, mis tios de Sucre nos recojieron con apoyo de mi padre, y una vez en Sucre nos reformamos, logre ser mejor alumno de mi curso cada año hasta graduarme en el colegio Domingo Savio, hice el servicio premilitar en el cuartel de la Fuerza Aerea en Sucre, tambien obtuve una novia en quinto de secundaria, con la cual sigo hasta hoy\n";
    std::cout << "Despues de graduarme y descansar un tiempo, empeze a estudiar para el examen de ingreso a la universidad, me postule a ingenieria electrica por consejo de mi padre, aprobe el examen y estuve en la carrera durante 2 años, me fue bien al principio pero no me gustaba y tuve problemas, luego hice cambio de carrera a ingenieria en Sistemas, algunas materias convalide, pero perdi mucho tiempo, tambien me inscribi a la carrera de tecnico superior en informatica, ambas carreras las voy llevando bien hasta el momento, en parte debido a la virtualidad ya que me permite estar en varias clases con choques de horario\n";
    std::cout << "Ha sido toda una travesia hasta el momento, de subidas y caidas, pero me hare de un buen futuro\n";
    std::cout << "Para volver a imprimir la biografia pulse 1, para salir pulse 2\n";
    std::cin >> op;
    while (op==1)
    {
        std::cout << "Mi nombre es Luis Fabricio Liceras Rodriguez, tengo 21 años, naci en ST. Ibañez - Santa Cruz el 12 de marzo del 2001. Mis padres se llaman Pedro Liceras Romero y Miriam Rodriguez Mamani y mi hermana Karen Gabriela Liceras Rodriguez\n";
        std::cout << "Vivi durante mis primeros 6 años en Santa Cruz para luego ir durante 1 año a Sucre, terminado el año nos mudamos con mi madre a Bermejo - Tarija con su familia, debido a la separacion de mis padres y problemas economicos causados por mi madre. Alli vivi durante 5 años en los que era pesimo estudiante y casi pierdo el año varias veces, mi madre empeoro su alcoholismo, mientras mi padre enviaba dinero trabajando fuera del pais\n ";
        std::cout << "Posteriormente vinimos a Sucre nuevamente, despues de que mi madre se perdiera por varios dias durante un viaje de vacaciones en Santa Cruz, mis tios de Sucre nos recojieron con apoyo de mi padre, y una vez en Sucre nos reformamos, logre ser mejor alumno de mi curso cada año hasta graduarme en el colegio Domingo Savio, hice el servicio premilitar en el cuartel de la Fuerza Aerea en Sucre, tambien obtuve una novia en quinto de secundaria, con la cual sigo hasta hoy\n";
        std::cout << "Despues de graduarme y descansar un tiempo, empeze a estudiar para el examen de ingreso a la universidad, me postule a ingenieria electrica por consejo de mi padre, aprobe el examen y estuve en la carrera durante 2 años, me fue bien al principio pero no me gustaba y tuve problemas, luego hice cambio de carrera a ingenieria en Sistemas, algunas materias convalide, pero perdi mucho tiempo, tambien me inscribi a la carrera de tecnico superior en informatica, ambas carreras las voy llevando bien hasta el momento, en parte debido a la virtualidad ya que me permite estar en varias clases con choques de horario\n";
        std::cout << "Ha sido toda una travesia hasta el momento, de subidas y caidas, pero me hare de un buen futuro\n";
        std::cout << "Para volver a imprimir la biografia pulse 1, para salir pulse 2\n";
        std::cin >> op;
    }
    return 0;
}

