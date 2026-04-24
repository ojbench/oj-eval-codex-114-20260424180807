#include <algorithm>

// We implement an array of dynamic arrays using raw pointers only.
// Layout per vector x (1-based): p[x] points to an int block:
// [size][cap][elem0][elem1]...[elem(size-1)]
// size and cap are stored as the first two ints of the block.

static inline int* get_block(int **&p, int x) {
    return p[x - 1];
}

static inline int get_size(int *blk) {
    return blk ? blk[0] : 0;
}

static inline int get_cap(int *blk) {
    return blk ? blk[1] : 0;
}

static inline void set_size(int *blk, int sz) {
    blk[0] = sz;
}

static inline void set_cap(int *blk, int cp) {
    blk[1] = cp;
}

static inline int* elem_ptr(int *blk, int idx) { // idx: 0-based
    return blk + 2 + idx;
}

void Init(int **&p,int n){
    // allocate pointer array for n vectors, initialize to nullptr
    p = new int*[n];
    for (int i = 0; i < n; ++i) p[i] = nullptr;
}

void Add_element(int **&p,int x,int y){
    int *blk = get_block(p, x);
    if (!blk) {
        // create with cap=1
        int cap = 1;
        blk = new int[2 + cap];
        set_size(blk, 0);
        set_cap(blk, cap);
        p[x - 1] = blk;
    }
    int sz = get_size(blk);
    int cap = get_cap(blk);
    if (sz == cap) {
        // grow capacity (doubling, minimum +1)
        int new_cap = cap ? (cap << 1) : 1;
        int *new_blk = new int[2 + new_cap];
        // copy header and existing elements
        new_blk[0] = sz;
        new_blk[1] = new_cap;
        if (sz) std::copy(blk + 2, blk + 2 + sz, new_blk + 2);
        delete[] blk;
        blk = new_blk;
        p[x - 1] = blk;
        cap = new_cap;
    }
    // append element
    blk[2 + sz] = y;
    set_size(blk, sz + 1);
}

int Get_element(int **&p,int x,int k){
    int *blk = get_block(p, x);
    // k is 1-based, assume valid per problem guarantee
    return blk[2 + (k - 1)];
}

void Clear(int **&p,int n){
    if (!p) return;
    for (int i = 0; i < n; ++i) {
        if (p[i]) delete[] p[i];
    }
    delete[] p;
    p = nullptr;
}
