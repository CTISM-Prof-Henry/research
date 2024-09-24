#ifdef _WIN32  // se o sistema operacional for windows
#include <windows.h>  // inclui a biblioteca do windows
#endif

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#define N_ANIMALS 3
#define BAR_TOTAL_WIDTH 20

int get_course(int argc, char **argv) {
    bool next = false;
    int course = -1;
    for(int i = 0; i < argc; i++) {
        if(next) {
            course = atoi(argv[i]);
            break;
        } else if(strcmp(argv[i], "--percurso") == 0) {
            next = true;
        }
    }
    return course;
}

char *get_animal(int argc, char **argv) {
    bool next = false;
    char *animal = NULL;
    for(int i = 0; i < argc; i++) {
        if(next) {
            animal = argv[i];
            break;
        }
        if(strcmp(argv[i], "--animal") == 0) {
            next = true;
        }
    }
    return animal;
}

int get_animal_id(char *animal, int n_animals, char **animals) {
    for(int i = 0; i < n_animals; i++) {
        if(strcmp(animal, animals[i]) == 0) {
            return i;
        }
    }
    return -1;
}

void draw_bar(float meters_run, float total_meters, int seconds) {
    int bar_width = (int)((BAR_TOTAL_WIDTH * meters_run) / total_meters);
    printf("\r");
    for(int i = 0; i < bar_width; i++) {
        printf("=");
    }
    for(int i = bar_width; i < BAR_TOTAL_WIDTH; i++) {
        printf("-");
    }
    printf("%5d s", seconds);
}

int race(int delay, float speed, float total_meters) {
    float meters = total_meters;

    printf("começou!\n");

    int seconds = delay;  // já começa atrasado
    sleep(seconds);
    while(meters > 0) {
        draw_bar(total_meters - meters, total_meters, seconds);
        meters -= speed;
        seconds += 1;
        sleep(1);
    }
    draw_bar(total_meters, total_meters, seconds);
    printf("\n");
    return seconds;
}

int main(int argc, char **argv) {
    #ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
    #endif
    setlocale(LC_ALL,"pt_BR");
    if(argc != 5) {
        fprintf( stderr, "Uso do script:\nmain.exe --percurso <número> --animal <nome>");
        exit(1);
    }
    int course = get_course(argc, argv);
    if(course == -1) {
        fprintf( stderr, "Parâmetro --percurso não foi passado corretamente!");
        exit(1);
    }
    if((course < 1) || (course > 10)) {
        fprintf( stderr, "Parâmetro --percurso deve ser um número entre 1 e 10!");
        exit(1);
    }

    char *animal = get_animal(argc, argv);
    int n_animals = N_ANIMALS;
    char *animals[N_ANIMALS] = {"coelho", "cachorro", "cavalo"};
    if(animal == NULL) {
        fprintf( stderr, "Parâmetro --animal não foi passado corretamente!");
        exit(1);
    }
    int animal_id = get_animal_id(animal, n_animals, animals);
    if(animal_id == -1) {
        fprintf( stderr, "Parâmetro --animal deve ser um destes três: \"coelho\", \"cachorro\", \"cavalo\"");
        exit(1);
    }

    // animals
    int delays[N_ANIMALS] = {0, 5, 10};
    float speeds[N_ANIMALS] = {11.11f, 13.88f, 19.44f};

    float total_meters = (float)course * 100;
    int seconds = race(delays[animal_id], speeds[animal_id], total_meters);

    printf("O %s terminou o percurso %d de %.0f metros em %d segundos\n", animal, course, total_meters, seconds);
}