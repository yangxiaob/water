#include <stdio.h>
#include <string.h>

struct Books {
  char title[50];
  char author[500];
  char subject[100];
  int book_id;
};

void printBookInfo(struct Books book){
  printf("book title : %s\n",book.title);
  printf("book author : %s\n",book.author);
  printf("book subject : %s\n",book.title);
  printf("book book_id : %d\n",book.book_id);
  return;
}

int main(){
  struct Books book1;
  struct Books book2;
  
  strcpy(book1.title, "c Programming");
  strcpy(book1.author, "Nuha Ali");
  strcpy(book1.subject, "c programming Tutorial");
  book1.book_id = 6498788;
  
  strcpy(book2.title, "Telecom Billing");
  strcpy(book2.author, "Zara Ali");
  strcpy(book2.subject, "Telecom Billing Tutotial");
  book2.book_id = 8984987;

  printBookInfo(book1);
  printBookInfo(book2);

  return 0;
}
