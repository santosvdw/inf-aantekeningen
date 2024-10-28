I/O
========================

### Wat is I/O
- Internetverbindingen via TCP/IP
- Verbindingen via USB of andere interfaces
- etc,.. zie slides

**streams**: zie slides


## Streams
het idee van een **stream** is dat er een reeks van bytes wordt verstuurd:
- Van het ene programma naar het andere;
- van een file naar een programma, etc.

Het type FILE* representeerd een stream. Elke C implementatie definieert het type FILE intern op een andere manier. Dit is een vorm van **data binding**.

### Een stream openen

```c
#include <stdio.h >

FILE *fopen(const char *path, const char *mode);
int fclose(FILE *stream);
```

`mode` is een string die bestaat uit de volgende letters:
- r: open een stram om het bestand te lezen.
- w: open een strean om naar het bestand te schrijven.
- a: open het bestand om naar het bestand te schrijven vanaf het einde van het bestand (append).
- r+, w+, a+: lees en schrijf naar een bestand.

### Eigenschappen van een stream
Een stream heeft:
- Twee uiteindes. 
- Een **toestand**: is de stream nog open? Is er een foutconditie?
- Wat voor soort **buffering** is er?
- Een **mode**
- Als het gaat om een bestand is er eook een **positie** die aangeeft waar in het betsand je je bevindt.  Bij file streams kun je de positie in het bestand wijzigien. Zie hiervoor de powerpoint of stdio.h documentatie. `fseek, rewind, ftell`.

### Lezen of schrijven
Met fgetc en fputc kan je een enkele char uit een stream lezen of naar een stream schrijven. 

```c
// Lees een char uit de stream
// Uitvoer: char of EOF als foutmeldign
int fgetc(FILE *stream);

// Schrijf een char naar de stream.
// Uitvoer: c of EOF als foutmelding
int fputc(int c, FILE *stream);
```

### Stdin, stdout, stderr

Elk C programma krijgt meteen toegang tot drie streams:
- Stdin: Inputstrea,
- Stdout: Output stream
- Stderr:

Deze standaard invoer en uitvoer streams geven ook nieuwe mogelijkheden om te lezen en schrijven via streams:
```c
int getchar(void); // fgetc(stdin);
int putchar(int c); // fputc(c, stdout);
```

Ook kan je streams gewoon printen: `fprintf`

### gebufferde I/O
Omdat I/O vaak veel tijd kosten zijn streams vaak **gebufferd**: de informatie wordt in het geheugen verzameld totdat een grotere hoeveelheid tegelijk verzonden kan worden. Er zijn 3 soorten buffers: unbuffered, line buffered, fully buffered.

### Blocking
Er zijn twee situaties waarin een streamoperatie niet meteen kan worden uitgevoerd:
- Je doet een schrijfoperatie zoals `fputc`, maar de buffer is vol.
- Je doet een leesoperatie zoals `fgetc`, maar er is nog geen data beschikbaar.
Er gebeurt dan niks totdat de operatie kan worden voltooid, dit heet **blocking**

### Fouten afhandelen
je kunt zien of er iets misgaat aan de uitvoer van de stream van de functie. Er kunnen dan verschillende dingen aan de hand zijn:
- Het einde van de stream is bereikt. Dit heet **end of file**.
- Er is een andere fout opgetreden. 
Met de functie `feof(FILE *stream)` kan je checken of het einde van de stream is bereikt en met `ferror(FILE *stream)` kan je kijken of er een error is opgetreden.

### Een blok data tegelijk lezen
```c
size_t fread void *data, size_t size, size_t nitems, FILE *stream);
size_t fwrite void *data, size_t size, size_t nitems, FILE *stream);
```

Met de combinatie `fseek` en deze twee functies kan je alle data uit het bestand oplezen.

### Een stream per regel lezen
Met `fgets` kun je een regel tot aan de newline uit een stream lezen en opslaan als string. `fputs` schrijft een string naar een stream.
```c
char *fgets(char *str, int size, FILE *stream);
int fputs(char *str, FILE *stream);
```

Voor fgets moet je de grootte opgeven van het beschikbare stuk geheugen. De functie leest maximaal size-1 karakters. Er is ook een functie `gets` die van stdin leest, maar deze vraagt geen size en is daarom onveilig. Gebruik deze functie nooit.