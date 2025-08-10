struct sigrecord {
  int signum;                 //example structure called sigrecord with object sigline and sigline_p (pointer to sigline) that can be called
  char signame[20];             
  char sigdesc[100];
} sigline, *sigline_p;
int main(void){
sigline.signum = 5;
strcpy(sigline.signame, "SIGINT");                         //referencing the members of object sigline
strcpy(sigline.sigdesc, "Interrupt from keyboard");

sigline_p = &sigline;     // same as pointer logic giving the pointer the address to sigline 

sigline_p->signum = 5;
strcpy(sigline_p->signame, "SIGINT");                  // indirectly referencing the members of object sigline            
strcpy(sigline_p->sigdesc, "Interrupt from keyboard");

}
