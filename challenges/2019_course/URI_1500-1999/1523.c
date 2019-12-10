#include <stdio.h>
#include <stdlib.h>

struct carro {

  int chegada;
  int saida;
  struct carro* prox;
};

void init(struct carro* head) {
  head = NULL;
    //endereço que head aponta para NULL
}


struct carro* push(int chegada, int saida, struct carro* head) {

  struct carro* nodo = (struct carro*)malloc(sizeof(struct carro));
  nodo->chegada = chegada;
  nodo->saida = saida;
  nodo->prox = head;
  head = nodo;

  return head;
}

struct carro* pop(struct carro* head, int* chegada, int* saida) {

  //nodo aponta pro mesmo lugar que head aponta, por isso free funciona
  struct carro* nodo = head;
  *chegada = head->chegada;
  *saida = head->saida;
  head = head->prox;

  free(nodo);

  return head;
}

//pra zerar só dar init de novo
int main() {

  int totMotoristas, maxCarros;
  int chegada, saida, tempCheg, tempSaida;
  int success = 1, i, j, stackSize = 1, totStack = 0, doPop = 0, doPop2 = 0;
  struct carro* estacionamento;
  struct carro* atual;


  scanf("%d %d", &totMotoristas, &maxCarros);

  //conta o numero de saidas, se tiver mais gente saindo deps que maxCarros, falha
  //faz pop em todos contando os de saida maior que entrada, se tiver mais de 2, falha
  //no pop também vê se a saida atual é maior que a saida de outro sendo que a entrada atual [e menor que a saida]
  while(totMotoristas != 0 && maxCarros != 0) {

    init(estacionamento);
    init(atual);
    totStack = 0;


    for(i = 0; i < totMotoristas; i++) {

      scanf("%d %d", &chegada, &saida);
      atual = estacionamento;

      for(j = 0; j < totStack; j++) {

        //printf("estacionamento %d\n", atual->saida);
        //printf("saida %d\n", saida);

        if(chegada >= atual->saida) {
          estacionamento = pop(estacionamento, &tempCheg, &tempSaida);
          atual = estacionamento;
          doPop = 1;
          doPop2++;
        }

        else if(atual->saida < saida) {
          success = 0;
          break;
        }

        else
          stackSize++;


        if(stackSize > maxCarros) {
          success = 0;
          break;
        }

        if(!doPop)
          atual = atual->prox;

        doPop = 0;
      }

      stackSize = 1;
      totStack = totStack - doPop2;
      doPop2 = 0;

      if(success == 1) {
        estacionamento = push(chegada, saida, estacionamento);
        totStack++;
      }

    }

    if(success == 0)
      printf("Nao\n");
    else
      printf("Sim\n");

    success = 1;

    scanf("%d %d", &totMotoristas, &maxCarros);
  }
  //se chegada maior que saida ok, se não, saida maior que saida do segundo

  exit(0);
}
