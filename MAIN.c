#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

struct aluno {
   char nome[40];//nome do aluno
   char matricula[5];//matricula
   char cpf[20];//cpf
   char curso[40];//curso
   char status;
   } alu;
FILE *ptr;

struct paciente {
   char nomepaciente[40];//nome do paciente
   char codigo[5];//codigo
   char cpfpaciente[20];//cpf
   char datanascimento[20];//idade
   char enderecopaciente[40];//endereço
   char status;
   } pac;
FILE *ptr;

struct supervisor {
   char nomeprofessor[40];//nome do professor
   char codigoprof[5];//codigo
   char cursoprof[40];//curso
   char status;
   } sup;
FILE *ptr;

struct agendamento {
   char nomepacientealuno[40];
   char codigopacientealuno[5];
   char codigoagen[20];
   char dataconsulta[20];
   char areaaten[40];
   char status;
   } agen;
FILE *ptr;

struct atendimento {
   char nomepacientealu[40];
   char codigopacientealu[20];
   char codigoagen[20];
   char dataagen[20];
   char codigoaten[20];
   char dataaten[20];
   char areaaten[40];
   char nomesupervisor[40];
   char codigosuper[20];
   char status;
   } atend;
FILE *ptr;

main()
{
 char oh[2],oh1;
 printf("\n\n\n");
 printf("\t################################\n");
 printf("\tCLINICA ESCOLA UEPB - PROJETO\n\n");
 printf("\t################################\n");
 printf("\t#                              #\n");
 printf("\t#     MENU PRINCIPAL           #\n");
 printf("\t#                              #\n");
 printf("\t################################\n\n\n");
 printf("\n1 - Paciente\n");
 printf("2 - Aluno\n");
 printf("3 - Supervisor\n");
 printf("4 - Agendamento\n");
 printf("5 - Atendimento(consulta)\n");
 printf("6 - Sair\n\n");
 printf("\n Opcao:");
 gets(oh);
   oh1=tolower(*oh);
   switch(oh1){
     case '1':pacienteF();break;
     case '2':alunoF(); break;
     case '3':supervisorF();break;
     case '4':agendamentoF();break;
     case '5':atendimentoF();break;
     case '6':exit(0); break;}}

void alunoF(void){
    char opcao[2], op;
 do{
    do{
       system("cls");
       printf("\n\n\n\n");
       printf("\t################################\n");
       printf("\t#                              #\n");
       printf("\t#     ALUNOS                   #\n");
       printf("\t#                              #\n");
       printf("\t################################\n\n\n");
       printf("\n Digite uma das opcoes\n\n");
       printf("\n <C> - Cadastrar");
       printf("\n <E> - Editar");
       printf("\n <R> - Remover");
       printf("\n <L> - Listar");
       printf("\n <V> - Voltar ao menu principal");
       printf("\n <S> - Sair");
       printf("\n\n\n Opcao:");
       gets(opcao);
       op=tolower(*opcao);
    } while(!strchr("cerlvs",op));
       switch(op){
     case 'c' : incluir(); break;
     case 'e' : alterar(); break;
     case 'r' : excluir(); break;
     case 'l' : listar(); break;
     case 'v' : main(); break;
     case 's' : exit(0);
       }
 }while(1);}

 void pacienteF(void){
 char opcao[2], op;
 do{
    do{
       system("cls");
       printf("\n\n\n\n\n\n\n");
       printf("\t################################\n");
       printf("\t#                              #\n");
       printf("\t#     PACIENTE                 #\n");
       printf("\t#                              #\n");
       printf("\t################################\n\n\n");
       printf("\n Digite uma das opcoes\n\n");
       printf("\n <C> - Cadastrar");
       printf("\n <E> - Editar");
       printf("\n <R> - Remover");
       printf("\n <L> - Listar");
       printf("\n <V> - Voltar ao menu principal");
       printf("\n <S> - Sair");
       printf("\n\n\n Opcao:");
       gets(opcao);
       op=tolower(*opcao);
    } while(!strchr("cerlvs",op));
       switch(op){
     case 'c' : incluirP(); break;
     case 'e' : alterarP(); break;
     case 'r' : excluirP(); break;
     case 'l' : listarP(); break;
     case 'v' : main();break;
     case 's' : exit(0);
       }
 }while(1);
 }

void supervisorF(void){
 char opcao[2], op;
 do{
    do{
       system("cls");
       printf("\n\n\n\n");
       printf("\t################################\n");
       printf("\t#                              #\n");
       printf("\t#   Professor                  #\n");
       printf("\t#                              #\n");
       printf("\t################################\n\n\n");
       printf("\n Digite uma das opcoes\n\n");
       printf("\n <C> - Cadastrar");
       printf("\n <E> - Editar");
       printf("\n <R> - Remover");
       printf("\n <L> - Listar");
       printf("\n <V> - Voltar ao menu principal");
       printf("\n <S> - Sair");
       printf("\n\n\n Opcao:");
       gets(opcao);
       op=tolower(*opcao);
    } while(!strchr("cerlvs",op));
       switch(op){
     case 'c' : incluirPro(); break;
     case 'e' : alterarPro(); break;
     case 'r' : excluirPro(); break;
     case 'l' : listarPro(); break;
     case 'v' : main();break;
     case 's' : exit(0);
       }
 }while(1);
}

void agendamentoF(void){
 char opcao[2], op;
 do{
    do{
       system("cls");
       printf("\n\n\n\n\n\n\n");
       printf("\t################################\n");
       printf("\t#                              #\n");
       printf("\t#     AGENDAMENTO              #\n");
       printf("\t#                              #\n");
       printf("\t################################\n\n\n");
       printf("\n Digite uma das opcoes\n\n");
       printf("\n <I> - Criar novo agendamento");
       printf("\n <C> - Cancelar agendamento");
       printf("\n <L> - Listar agendamentos");
       printf("\n <V> - Voltar ao menu principal");
       printf("\n <S> - Sair");
       printf("\n\n\n Opcao:");
       gets(opcao);
       op=tolower(*opcao);
    } while(!strchr("iclvs",op));
       switch(op){
     case 'i' : incluirA(); break;
     case 'c' : excluirA(); break;
     case 'l' : listarA(); break;
     case 'v' : main();break;
     case 's' : exit(0);
       }
 }while(1);
}

void atendimentoF(void){
char opcao[2], op;
 do{
    do{
       system("cls");
       printf("\n\n\n\n\n\n\n");
       printf("\t################################\n");
       printf("\t#                              #\n");
       printf("\t#     ATENDIMENTO/CONSULTA     #\n");
       printf("\t#                              #\n");
       printf("\t################################\n\n\n");
       printf("\n Digite uma das opcoes\n\n");
       printf("\n <I> - Criar novo atendimento");
       printf("\n <C> - Cancelar agendamento");
       printf("\n <L> - Listar agendamentos");
       printf("\n <V> - Voltar ao menu principal");
       printf("\n <S> - Sair");
       printf("\n\n\n Opcao:");
       gets(opcao);
       op=tolower(*opcao);
    } while(!strchr("iclvs",op));
       switch(op){
     case 'i' : incluirAT(); break;
     case 'c' : excluirAT(); break;
     case 'l' : listarAT(); break;
     case 'v' : main();break;
     case 's' : exit(0);
       }
 }while(1);
}

//FUNCOES ALUNOS
void abrir(char tipo[3])
{
     if((ptr=fopen("aluno.dat", tipo))==NULL)
     {printf("\n O arquivo nao pode ser aberto!!\n");
      getch();
      exit(1);
     }
}
void incluir(void){
     abrir("ab+");
     fseek(ptr,0L, SEEK_END);

     do
     {
   printf("\n Digite o nome do aluno ou <FIM> para sair:\n\n");
   gets(alu.nome);

   if ((strcmp(alu.nome,"fim")!=0)&&(strcmp(alu.nome,"FIM")!=0)){
      printf("\n Matricula:"); gets(alu.matricula);
      printf("\n CPF:"); gets(alu.cpf);
      printf("\n Curso:"); gets(alu.curso);
      alu.status='1';
      if(fwrite(&alu, sizeof(struct aluno), 1, ptr) != 1)
      {
      printf("\n Erro de gravacao.");
      getch();
      }
      else
      {   printf("\n Gravacao feita com sucesso!\n\n");}
     }}while((strcmp(alu.nome,"fim")!=0)&&(strcmp(alu.nome,"FIM")!=0));
     fclose(ptr);
}
int busca (void){
   int encontrar=-1,posicao=0;
   char buscarnome[40];
   abrir("rb");
   printf("\nDigite o aluno a ser procurado:");
   gets(buscarnome);
   rewind(ptr);
   while((!feof(ptr))&&(encontrar==-1))
   {
      fread(&alu, sizeof(struct aluno), 1, ptr);
      if (!feof(ptr))
    {if (strcmp(buscarnome, alu.nome)==0)
       {if (alu.status=='0')
          {posicao=-2;}
        encontrar=1;
       }
     else{posicao++;}
    }
      else{posicao=-1;}
   }
   if (encontrar==-1)
      {posicao=-1;}
   fclose(ptr);
   return(posicao);
}
void alterar(void){
   int indice;
   indice=busca();
   if (indice==-1)
      {
    printf("\nAluno inexistente no arquivo!");
    getch();
      }
      else if(indice==-2)
         {
       printf("\nAluno inexistente no arquivo!");
       getch();
         }
         else
       {
          abrir("rb+");
          fseek(ptr,indice*sizeof(struct aluno),SEEK_CUR);
          fread(&alu, sizeof(struct aluno), 1, ptr);
          printf("\nEditar o seguinte registro[pressione <enter>]...");
          printf("\nNome:%s",alu.nome);
          printf("\nMatricula:%s",alu.matricula);
          printf("\nCPF:%s",alu.cpf);
          printf("\nCurso:%s",alu.curso);
          getch();
          printf("\nDigite as informacoes corretas:");
          printf("\nAluno:");
          gets(alu.nome);
          printf("\nMatricula:");
          gets(alu.matricula);
          printf("\nCPF:");
          gets(alu.cpf);
          printf("\nCurso:");
          gets(alu.curso);
          alu.status='1';
          fseek(ptr,indice*sizeof(struct aluno),SEEK_SET);
          if(fwrite(&alu, sizeof(struct aluno),1, ptr)!=1)
             {
           printf("\nErro ao gravar arquivo.");
             }
             else
           {
              printf("\nEdicao efetuada.");
              getch();
           }
       }
   fclose(ptr);
}
void listar(void) {
   int cont=0;

   abrir("rb");
   fseek(ptr, 0L, SEEK_SET);
   fread(&alu, sizeof(struct aluno),1, ptr);
   do
   {
      if (alu.status!='0')
    {
       printf("\nNome: %s",alu.nome);
       printf("\nMatricula: %s",alu.matricula);
       printf("\nCPF: %s",alu.cpf);
       printf("\nCurso: %s",alu.curso);
       cont++;
    }
      fread(&alu, sizeof(struct aluno),1, ptr);
      }while(!feof(ptr));
   printf("\n#Numero de Registros=%d",cont);
   getch();
}
void excluir(void){
   int indice;
   indice=busca();
   if(indice==-1)
      {
    printf("\nAluno inexistente no arquivo.");
    getch();
      }
      else
    {
       if(indice==-2)
          {
        printf("\nRegistro do aluno excluido do arquivo.");
        getch();
          }
          else
        {
           abrir("rb+");
           fseek(ptr, indice*sizeof(struct aluno), SEEK_SET);
           fread(&alu, sizeof(struct aluno), 1, ptr);
           printf("\nNome: %s",alu.nome);
           printf("\nMatricula: %s",alu.matricula);
           printf("\nCPF: %s",alu.cpf);
           printf("\nCurso: %s",alu.curso);
           printf("\nRegistro #%d sera excluido",(indice+1));
           getch();
           alu.status='0';
           fseek(ptr, indice*sizeof(struct aluno), SEEK_SET);
           if(fwrite(&alu, sizeof(struct aluno), 1, ptr)!=1)
         {
            printf("\nErro ao gravar arquivo.");
            getch();
         }
         else
         {
            printf("\nExclusao feita com sucesso!");
            getch();
         }
        }
    }
   fclose(ptr);
}

// FUNCOES PROFESSOR
void abrirPro(char tipo[3]){
     if((ptr=fopen("professor.dat", tipo))==NULL)
     {printf("\n O arquivo nao pode ser aberto!!\n");
      getch();
      exit(1);
     }
}
void incluirPro(void){
     abrirPro("ab+");
     fseek(ptr,0L, SEEK_END);

     do
     {
   printf("\n Digite o nome do supervisor ou <FIM> para sair:\n\n");
   gets(sup.nomeprofessor);

   if ((strcmp(sup.nomeprofessor,"fim")!=0)&&(strcmp(sup.nomeprofessor,"FIM")!=0)){
      printf("\n Codigo:"); gets(sup.codigoprof);
      printf("\n Curso:"); gets(sup.cursoprof);
      sup.status='1';
      if(fwrite(&sup, sizeof(struct supervisor), 1, ptr) != 1)
      {
      printf("\n Erro ao gravar arquivo.");
      getch();
      }
      else
      {   printf("\n Gravacao efetuada.\n\n");}
      }
     }while((strcmp(sup.nomeprofessor,"fim")!=0)&&(strcmp(sup.nomeprofessor,"FIM")!=0));
     fclose(ptr);
}
int buscaPro (void){
   int encontrar=-1,posicao=0;
   char buscarnome[40];
   abrirPro("rb");
   printf("\nDigite o supervisor a ser procurado:");
   gets(buscarnome);
   rewind(ptr);
   while((!feof(ptr))&&(encontrar==-1))
   {
      fread(&sup, sizeof(struct supervisor), 1, ptr);
      if (!feof(ptr))
    {if (strcmp(buscarnome, sup.nomeprofessor)==0)
       {if (sup.status=='0')
          {posicao=-2;}
        encontrar=1;
       }
     else{posicao++;}
    }
      else{posicao=-1;}
   }
   if (encontrar==-1)
      {posicao=-1;}
   fclose(ptr);
   return(posicao);
}
void alterarPro(void){
   int indice;
   indice=buscaPro();
   if (indice==-1)
      {
    printf("\n Inexistente no arquivo.");
    getch();
      }
      else if(indice==-2)
         {
       printf("\n Inexistente no arquivo.");
       getch();
         }
         else
       {
          abrirPro("rb+");
          fseek(ptr,indice*sizeof(struct supervisor),SEEK_CUR);
          fread(&sup, sizeof(struct supervisor), 1, ptr);
          printf("\nEditar o seguinte registro[pressione <enter>]");
          printf("\nNome:%s",sup.nomeprofessor);
          printf("\nCodigo:%s",sup.codigoprof);
          printf("\nCurso:%s",sup.cursoprof);
          getch();
          printf("\nDigite as informacoes corretas:");
          printf("\nNome:");
          gets(sup.nomeprofessor);
          printf("\nCodigo:");
          gets(sup.codigoprof);
          printf("\nCurso:");
          gets(sup.cursoprof);
          sup.status='1';
          fseek(ptr,indice*sizeof(struct supervisor),SEEK_SET);
          if(fwrite(&sup, sizeof(struct supervisor),1, ptr)!=1)
             {
           printf("\nErro ao gravar arquivo.");
             }
             else
           {
              printf("\nEdicao efetuada.");
              getch();
           }
       }
   fclose(ptr);
}
void listarPro(void) {
   int cont=0;

   abrirPro("rb");
   fseek(ptr, 0L, SEEK_SET);
   fread(&sup, sizeof(struct supervisor),1, ptr);
   do
   {
      if (sup.status!='0')
    {
       printf("\nNome: %s",sup.nomeprofessor);
       printf("\nCodigo: %s",sup.codigoprof);
       printf("\nCurso: %s",sup.cursoprof);
       cont++;
    }
      fread(&sup, sizeof(struct supervisor),1, ptr);
      }while(!feof(ptr));
   printf("\n#Numero de Registros=%d",cont);
   getch();
}
void excluirPro(void){
   int indice;
   indice=buscaPro();
   if(indice==-1)
      {
    printf("\n Inexistente no arquivo.");
    getch();
      }
      else
    {
       if(indice==-2)
          {
        printf("\n Excluido do arquivo.");
        getch();
          }
          else
        {
           abrirPro("rb+");
           fseek(ptr, indice*sizeof(struct supervisor), SEEK_SET);
           fread(&sup, sizeof(struct supervisor), 1, ptr);
           printf("\nNome: %s",sup.nomeprofessor);
           printf("\nCodigo: %s",sup.codigoprof);
           printf("\nCurso: %s",sup.cursoprof);
           printf("\nEste Registro #%d sera excluido",(indice+1));
           getch();
           sup.status='0';
           fseek(ptr, indice*sizeof(struct supervisor), SEEK_SET);
           if(fwrite(&sup, sizeof(struct supervisor), 1, ptr)!=1)
         {
            printf("\nErro ao gravar no arquivo.");
            getch();
         }
         else
         {
            printf("\nExclusao feita com sucesso.");
            getch();
         }
        }
    }
   fclose(ptr);
}

//FUNCOES PACIENTES
void abrirP(char tipo[3]){
     if((ptr=fopen("paciente.dat", tipo))==NULL)
     {printf("\n O arquivo nao pode ser aberto!!\n");
      getch();
      exit(1);
     }
}
void incluirP(void){
     abrirP("ab+");
     fseek(ptr,0L, SEEK_END);

     do
     {
   printf("\n Digite o nome ou <FIM> para sair:\n\n");
   gets(pac.nomepaciente);

   if ((strcmp(pac.nomepaciente,"fim")!=0)&&(strcmp(pac.nomepaciente,"FIM")!=0)){
      printf("\n Codigo:"); gets(pac.codigo);
      printf("\n CPF:"); gets(pac.cpfpaciente);
      printf("\n Data de nascimento:"); gets(pac.datanascimento);
      printf("\n Endereco:"); gets(pac.enderecopaciente);
      pac.status='1';
      if(fwrite(&pac, sizeof(struct paciente), 1, ptr) != 1)
      {
      printf("\n Erro ao gravar arquivo.");
      getch();
      }
      else
      {   printf("\n Gravacao efetuada.\n\n");}
      }
     }while((strcmp(pac.nomepaciente,"fim")!=0)&&(strcmp(pac.nomepaciente,"FIM")!=0));
     fclose(ptr);
}
int buscaP (void){
   int encontrar=-1,posicao=0;
   char buscanome[40];
   abrirP("rb");
   printf("\nDigite o nome a ser procurado:");
   gets(buscanome);
   rewind(ptr);
   while((!feof(ptr))&&(encontrar==-1))
   {
      fread(&pac, sizeof(struct paciente), 1, ptr);
      if (!feof(ptr))
    {if (strcmp(buscanome, pac.nomepaciente)==0)
       {if (pac.status=='0')
          {posicao=-2;}
        encontrar=1;
       }
     else{posicao++;}
    }
      else{posicao=-1;}
   }
   if (encontrar==-1)
      {posicao=-1;}
   fclose(ptr);
   return(posicao);
}
void alterarP(void){
   int indice;
   indice=buscaP();
   if (indice==-1)
      {
    printf("\n Inexistente no arquivo.");
    getch();
      }
      else if(indice==-2)
         {
       printf("\n Inexistente no arquivo.");
       getch();
         }
         else
       {
          abrirP("rb+");
          fseek(ptr,indice*sizeof(struct paciente),SEEK_CUR);
          fread(&pac, sizeof(struct paciente), 1, ptr);
          printf("\nEditar o seguinte registro:");
          printf("\nNome:%s",pac.nomepaciente);
          printf("\nCodigo:%s",pac.codigo);
          printf("\nCPF:%s",pac.cpfpaciente);
          printf("\nData de nascimento:%s",pac.datanascimento);
          printf("\nEndereco:%s",pac.enderecopaciente);
          getch();
          printf("\nDigite as informacoes corretas:");
          printf("\nNome:");
          gets(pac.nomepaciente);
          printf("\nCodigo:");
          gets(pac.codigo);
          printf("\nCPF:");
          gets(pac.cpfpaciente);
          printf("\nData de nascimento:");
          gets(pac.datanascimento);
          printf("\nEndereco:");
          gets(pac.enderecopaciente);
          pac.status='1';
          fseek(ptr,indice*sizeof(struct paciente),SEEK_SET);
          if(fwrite(&pac, sizeof(struct paciente),1, ptr)!=1)
             {
           printf("\nErro ao gravar arquivo.");
             }
             else
           {
              printf("\nRegravacao feita com sucesso.");
              getch();
           }
       }
   fclose(ptr);
}
void listarP(void) {
   int cont=0;

   abrirP("rb");
   fseek(ptr, 0L, SEEK_SET);
   fread(&pac, sizeof(struct paciente),1, ptr);
   do
   {
      if (pac.status!='0')
    {
       printf("\nNome: %s",pac.nomepaciente);
       printf("\nCodigo: %s",pac.codigo);
       printf("\nCPF: %s",pac.cpfpaciente);
       printf("\nData de nascimento: %s",pac.datanascimento);
       printf("\nEndereco: %s",pac.enderecopaciente);
       cont++;
    }
      fread(&pac, sizeof(struct paciente),1, ptr);
      }while(!feof(ptr));
   printf("\n#Numero de Registros=%d",cont);
   getch();
}
void excluirP(void){
   int indice;
   indice=buscaP();
   if(indice==-1)
      {
    printf("\n Inexistente no arquivo.");
    getch();
      }
      else
    {
       if(indice==-2)
          {
        printf("\n Excluido do arquivo.");
        getch();
          }
          else
        {
           abrirP("rb+");
           fseek(ptr, indice*sizeof(struct paciente), SEEK_SET);
           fread(&pac, sizeof(struct paciente), 1, ptr);
           printf("\nNome: %s",pac.nomepaciente);
           printf("\nCodigo: %s",pac.codigo);
           printf("\nCPF: %s",pac.cpfpaciente);
           printf("\nData de nascimento: %s",pac.datanascimento);
           printf("\nEndereco: %s",pac.enderecopaciente);
           printf("\nEste Registro #%d sera excluido",(indice+1));
           getch();
           //strcpy(reg.status,"0");
           pac.status='0';
           fseek(ptr, indice*sizeof(struct paciente), SEEK_SET);
           if(fwrite(&pac, sizeof(struct paciente), 1, ptr)!=1)
         {
            printf("\n Erro ao gravar no arquivo.");
            getch();
         }
         else
         {
            printf("\nExclusao feita com sucesso.");
            getch();
         }
        }
    }
   fclose(ptr);
}

//FUNCOES AGENDAMENTO
void abrirA(char tipo[3]){
     if((ptr=fopen("agendamentos.dat", tipo))==NULL)
     {printf("\n O arquivo nao pode ser aberto!!\n");
      getch();
      exit(1);
     }
}
void incluirA(void){
     abrirA("ab+");
     fseek(ptr,0L, SEEK_END);

     do
     {
   printf("\n Digite o nome do paciente/aluno ou <FIM> para sair:\n\n");
   gets(agen.nomepacientealuno);

   if ((strcmp(agen.nomepacientealuno,"fim")!=0)&&(strcmp(agen.nomepacientealuno,"FIM")!=0)){
      printf("\n Codigo do paciente/aluno:"); gets(agen.codigopacientealuno);
      printf("\n Codigo do agendamento:"); gets(agen.codigoagen);
      printf("\n Data da consulta:"); gets(agen.dataconsulta);
      printf("\n Area da consulta:"); gets(agen.areaaten);
      agen.status='1';
      if(fwrite(&agen, sizeof(struct agendamento), 1, ptr) != 1)
      {
      printf("\n Erro ao gravar no arquivo.");
      getch();
      }
      else
      {   printf("\n Gravacao feita com sucesso.\n\n");}
      }
     }while((strcmp(agen.nomepacientealuno,"fim")!=0)&&(strcmp(agen.nomepacientealuno,"FIM")!=0));
     fclose(ptr);
}
void listarA(void){
   int cont=0;

   abrirA("rb");
   fseek(ptr, 0L, SEEK_SET);
   fread(&agen, sizeof(struct agendamento),1, ptr);
   do
   {
      if (agen.status!='0')
    {
       printf("\nNome do paciente/aluno: %s",agen.nomepacientealuno);
       printf("\nCodigo do paciente/aluno: %s",agen.codigopacientealuno);
       printf("\n Codigo do agendamento: %s",agen.codigoagen);
       printf("\n Data da consulta:%s",agen.dataconsulta);
       printf("\n Area da consulta:%s",agen.areaaten);
       cont++;
    }
      fread(&agen, sizeof(struct agendamento),1, ptr);
      }while(!feof(ptr));
   printf("\n#Numero de Registros=%d",cont);
   getch();
}
int buscaA (void){
   int encontrar=-1,posicao=0;
   char buscanome[40];
   abrirA("rb");
   printf("\nDigite o nome a ser procurado:");
   gets(buscanome);
   rewind(ptr);
   while((!feof(ptr))&&(encontrar==-1))
   {
      fread(&agen, sizeof(struct agendamento), 1, ptr);
      if (!feof(ptr))
    {if (strcmp(buscanome, agen.nomepacientealuno)==0)
       {if (agen.status=='0')
          {posicao=-2;}
        encontrar=1;
       }
     else{posicao++;}
    }
      else{posicao=-1;}
   }
   if (encontrar==-1)
      {posicao=-1;}
   fclose(ptr);
   return(posicao);
}
void excluirA(void){
   int indice;
   indice=buscaA();
   if(indice==-1)
      {
    printf("\n Inexistente no arquivo.");
    getch();
      }
      else
    {
       if(indice==-2)
          {
        printf("\n Excluido do arquivo.");
        getch();
          }
          else
        {
           abrirA("rb+");
           fseek(ptr, indice*sizeof(struct agendamento), SEEK_SET);
           fread(&agen, sizeof(struct agendamento), 1, ptr);
           printf("\nNome do paciente/aluno: %s",agen.nomepacientealuno);
           printf("\nCodigo do paciente/aluno: %s",agen.codigopacientealuno);
           printf("\n Codigo do agendamento: %s",agen.codigoagen);
           printf("\n Data da consulta:%s",agen.dataconsulta);
           printf("\n Area da consulta:%s",agen.areaaten);
           printf("\nEste Registro #%d sera excluido",(indice+1));
           getch();
           agen.status='0';
           fseek(ptr, indice*sizeof(struct agendamento), SEEK_SET);
           if(fwrite(&agen, sizeof(struct agendamento), 1, ptr)!=1)
         {
            printf("\nErro ao gravar no arquivo.");
            getch();
         }
         else
         {
            printf("\nExclusao efetuada.");
            getch();
         }
        }
    }
   fclose(ptr);
}

//FUNCOES ATENDIMENTO
void abrirAT(char tipo[3]){
     if((ptr=fopen("atendimento.dat", tipo))==NULL)
     {printf("\n O arquivo nao pode ser aberto!!\n");
      getch();
      exit(1);
     }
}
void incluirAT(void){
     abrirAT("ab+");
     fseek(ptr,0L, SEEK_END);

     do
     {
   printf("\n Digite o nome do paciente/aluno ou <FIM> para sair:\n\n");
   gets(atend.nomepacientealu);

   if ((strcmp(atend.nomepacientealu,"fim")!=0)&&(strcmp(atend.nomepacientealu,"FIM")!=0)){
      printf("\n Codigo do paciente/aluno:"); gets(atend.codigopacientealu);
      printf("\n Codigo do agendamento:"); gets(atend.codigoagen);
      printf("\n Data do agendamento:"); gets(atend.dataagen);
      printf("\n Codigo da consulta:"); gets(atend.codigoaten);
      printf("\n Data da consulta:"); gets(atend.dataaten);
      printf("\n Area da consulta:"); gets(atend.areaaten);
      printf("\n Nome do supervisor:"); gets(atend.nomesupervisor);
      printf("\n Codigo do supervisor:"); gets(atend.codigosuper);
      atend.status='1';
      if(fwrite(&atend, sizeof(struct atendimento), 1, ptr) != 1)
      {
      printf("\n Erro ao gravar no arquivo.");
      getch();
      }
      else
      {   printf("\n Gravacao feita com sucesso.\n\n");}
      }
     }while((strcmp(atend.nomepacientealu,"fim")!=0)&&(strcmp(atend.nomepacientealu,"FIM")!=0));
     fclose(ptr);
}
void listarAT(void){
   int cont=0;

   abrirAT("rb");
   fseek(ptr, 0L, SEEK_SET);
   fread(&atend, sizeof(struct atendimento),1, ptr);
   do
   {
      if (atend.status!='0')
    {
       printf("\nNome do paciente/aluno: %s",atend.nomepacientealu);
       printf("\nCodigo do paciente/aluno: %s",atend.codigopacientealu);
       printf("\nCodigo do agendamento: %s",atend.codigoagen);
       printf("\n Data do agendamento:%s",atend.dataagen);
       printf("\n Codigo da consulta:%s",atend.codigoaten);
       printf("\n Data da consulta:%s",atend.dataaten);
       printf("\n Area da consulta:%s",atend.areaaten);
       printf("\n Nome do supervisor:%s",atend.nomesupervisor);
       printf("\n Codigo do supervisor:%s",atend.codigosuper);
       cont++;
    }
      fread(&atend, sizeof(struct atendimento),1, ptr);
      }while(!feof(ptr));
   printf("\n#Numero de Registros=%d",cont);
   getch();
}
int buscaAT (void){
   int encontrar=-1,posicao=0;
   char buscanome[40];
   abrirAT("rb");
   printf("\nDigite o nome a ser procurado:");
   gets(buscanome);
   rewind(ptr);
   while((!feof(ptr))&&(encontrar==-1))
   {
      fread(&atend, sizeof(struct atendimento), 1, ptr);
      if (!feof(ptr))
    {if (strcmp(buscanome, atend.nomepacientealu)==0)
       {if (atend.status=='0')
          {posicao=-2;}
        encontrar=1;
       }
     else{posicao++;}
    }
      else{posicao=-1;}
   }
   if (encontrar==-1)
      {posicao=-1;}
   fclose(ptr);
   return(posicao);
}
void excluirAT(void){
   int indice;
   indice=buscaAT();
   if(indice==-1)
      {
    printf("\n Inexistente no arquivo.");
    getch();
      }
      else
    {
       if(indice==-2)
          {
        printf("\n Excluido do arquivo.");
        getch();
          }
          else
        {
           abrirAT("rb+");
           fseek(ptr, indice*sizeof(struct atendimento), SEEK_SET);
           fread(&atend, sizeof(struct atendimento), 1, ptr);
           printf("\nNome do paciente/aluno: %s",atend.nomepacientealu);
           printf("\nCodigo do paciente/aluno: %s",atend.codigopacientealu);
           printf("\nCodigo do agendamento: %s",atend.codigoagen);
           printf("\n Data do agendamento:%s",atend.dataagen);
           printf("\n Codigo da consulta:%s",atend.codigoaten);
           printf("\n Data da consulta:%s",atend.dataaten);
           printf("\n Area da consulta:%s",atend.areaaten);
           printf("\n Nome do supervisor:%s",atend.nomesupervisor);
           printf("\n Codigo do supervisor:%s",atend.codigosuper);
           printf("\nEste Registro #%d sera excluido",(indice+1));
           getch();
           atend.status='0';
           fseek(ptr, indice*sizeof(struct atendimento), SEEK_SET);
           if(fwrite(&atend, sizeof(struct atendimento), 1, ptr)!=1)
         {
            printf("\nErro ao gravar no arquivo.");
            getch();
         }
         else
         {
            printf("\nExclusao efetuada.");
            getch();
         }
        }
    }
   fclose(ptr);
}
