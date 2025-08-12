union {
  struct {
  int type;   //checks here before either accessing intnode or doublenode structs reminds me a bit of C++ polymorphism
} n;
  struct {
    int type;
    int intnode;
  } ni;

  struct {
    int type;
    double doublenode;
  } nf;

} u;

u.nf.type = 1;
u.nf.doublenode = 3.14;


