int main(void) {
  int numero;
  printf("Please insert a number :\n");
  scanf("%d", &numero);
  if (numero % 2 == 0) {
    printf("Is pair");
  } else {
    printf("Is odd");
  }
  return 0;
}