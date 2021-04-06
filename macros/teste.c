#define Pios \
    X(but1, D, 19) \
    X(but2, A, 14) \
    X(B, 19) \
    X(C, 0) 

#define X(var) #define 
X_LIST_OF_VARS
#undefine X