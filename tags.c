struct s {
  // the s is the tag in this case 
};

//examples of declaring this type as follows:

struct s v; //instance of struct s 
struct s *p; //pointer to struct s 

//another example but with enums

enum day { sun, mon, tue, wed, thu,fri,sat };
day today; //error
enum day tomorrow; //OK

//its ok to have tags and the regular identifier in the same scope

enum status { ok, fail }; //status is the tag

enum status status(void); //function that has both tag and identifier

//another example with structs 

struct s s; //object s of type struct s 



