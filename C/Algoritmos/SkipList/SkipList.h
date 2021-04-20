typedef struct SkipList SkipList;

SkipList8 criaSkipList(int NivelMax, float P);
struct NO* noovNO(int chave, int nivel);
void liberaSkipList(SkipList* sk);
int buscaSkipList(SkipList* sk, int chave);
int insereSkipList(SkipList* sk, int chave);
int sorteiaNivel(SkipList* sk, int chave);