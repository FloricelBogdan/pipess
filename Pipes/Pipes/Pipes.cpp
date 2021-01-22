#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
int nr = 10;
int n = 10000;
int o[10000];
int prime = 1;
int p[500];


void childProc(int citirePipe, int wPipe) {
    int i = 1, j;

    read(citirePipe, &i, sizeof(int));

    for (j = i * (m / nr); j < (i + 1) * (m / nr); j++)
        if (j < )
        {  //calculam numerele prime ale unei parti
            if (o[j] % j == 0)
                prime = 0;
            if (prime == 1)
                write(wPipe, &o[j], sizeof(int));
            exit(1);
        }


    void parentProc(int citirePipe, int scrierePipe) {
        int j, val;
        //se scrie pt. fiecare proces numarul sau in conducta
        for (j = 0; j < nr; j++)
            //scriem in pipe 
            write(scrierePipe, &j, sizeof(int));
        for (j = 0; j < nr; j++)
        {
            //citim din pipe numerele prime specifice unei parti 
            read(citirePipe, &val, sizeof(int));
            p[j] = val;

            wait(NULL);
        }
    }


    int main() {
        int i;
        int j;
        int firstPipe[2];
        int secondPipe[2];
        int pid = 1;

        for (i = 0; i < n; i++)
        {
            a[i] = i;
            cout << a[i];
        }

        if (pipe(firstPipe)) {
            cout << "eroare creare conducta!"
                exit(-1);
        }
        if (pipe(secondPipe)) {
            cout << "eroare creare conducta!"
                exit(-1);
        }
        for (j = 0; j < nr; j++)
        {
            pid = fork();
            if (pid) {
                if (pid == -1) {
                    cout << "eroare creare conducta!"
                        exit(-1);
                }
            }
            else
            {
                childProc(firstPipe[0], secondPipe[1]);

            }
        }
        parentProc(secondPipe[0], firstPipe[1]);
        for (i = 1; i <= n; i++)
            cout << p[i];
    }
