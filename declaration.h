int init();
#define NOF 9
extern void* (*mame)(void*);
//extern void* mainMenu(void*);
extern void* (*comp)(void*);
//extern void* compression(void*);
extern void* (*cost)(void*);
//extern void* compStats(void*);
extern void* (*deco)(void*);
//extern void* deCompression(void*);
extern void* (*decs)(void*);
//extern void* deCompStats(void*);
extern void* (*exfn)(void*);
//extern void* exitF(void*);
extern void* (*opfi)(void*);
//extern void* openFile(void*);
extern void* (*fptr[NOF])(void*);
extern void* (*uniq)(void*);
extern void* (*getL)(void*);

extern void* compress2(void*);
extern void* compress3(void*);
extern void* compress4(void*);
extern void* compress5(void*);
extern void* compress6(void*);
extern void* compress7(void*);

extern void* getIndex(void*);

typedef struct DsUnique{
	char *ma;
	char ch;
}DsUnique;

typedef struct Dscompress{

	char *ma;
	int fd;


}Dscompress;
