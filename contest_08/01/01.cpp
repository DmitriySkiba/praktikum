struct Hack {
public:
    int bin;
    int prov;
};

int hack_it(Keeper keeper) {
    Hack* h = reinterpret_cast<Hack*>(&keeper);
    return h->prov;
}