#include <stdio.h>
#include <stdlib.h>
#include<time.h>
    int numeroinfectados(int infectados){
        infectados = 0;
        infectados = rand()% 5;
   return infectados;
    }
        int tiroteio(int tiros){
        tiros = 0;
        tiros = rand()% 6;
   return tiros;
        }
            int vidaperdida(int vidaF){
        vidaF = 0;
        vidaF = rand()% 6;
   return vidaF;
            }
        

int main()
{
    
    int vida, municao, escolha[10], estoque, infectados, tiros, tirostotais, vidaF;
    
    printf("Sua missão é sair de Blumenau e ir até a base segura de Florianópolis\n"
          "Você terá que passar em algumas cidades: Para viajar de uma cidade para outra,\n"
          "você irá gastar energia.\n\n"
          "Você deseja começar a sua caminhada?\n"
          "Tecle 1 - para começar.\n"
          "Tecle 0 - para fechar o jogo.\n");
    scanf("%d", &vida);
    
    while (vida>0){
        vida = 100;
        municao = 10;
        srand(time(NULL));
        printf("\nVasculhando o hospital, você encontra uma pistola, aparentemente um guarda a deixou cair,\nenquanto tentava fugir do caos.\n"
                "Você inspeciona a arma e constata que existem 10 munições carregadas. Pelo que tudo indica, antes do coma e da amnesia,\n"
                "você já sabia manusear uma arma, provável que durante sua vida você trabalhou com elas.\n\n"
                "O que deseja fazer?\n"
                "Tecle 1 - para sair pela porta da frente\nTecle 2 - vasculhar o hospital em busca de pistas\n");
                int municao=10;
                vida=100;
        scanf("%d", &escolha[0]);
        if (escolha[0] == 1){
            printf("\nVocê saiu sem nenhuma sutileza pela porta da frente e deu de cara com pessoas com comportamentos esquisitos, o que pode ter acontecido com elas?\n"
                    "Enquanto você se questionava, elas notaram sua presença e avançaram como uma manada para cima de ti. Você até tenta atirar contra alguns,\n"
                    "porém não param de surgir vários outros, que acabam te matando.\n\n"
                    "VOCÊ MORREU!!");
                    vida = 0;
            break;
        }
            printf("\nBom, procurando pistas do que pode ter acontecido, você passa pela praça de alimentação, então resolve vasculhar o ambiente.\n"
                    "Você olha em todos os armários e tudo que encontra são 2 barrinhas de cereal. Elas podem ser úteis futuramente.\n"
                    "Continuando sua busca você encontra um computador, milagrosamente ele está funcionando, ao contrário de tudo nesse lugar.\n"
                    "Tudo que você encontrou são documentos sobre uma suposta doença que ataca o sistema respiratório e que não tem cura,\n"
                    "só alguns meios de evitar o contágio, como usar máscaras e lavar as mãos com frequência. Aqui diz também que esse vírus\n"
                    "causou uma pandemia em 2020, no calendário o computador data o dia 12/05/2025. Um pouco mais pra frente nesse mesmo documento,\n"
                    "o autor diz que o vírus começou a sofrer diversas mutações, e em meados de junho de 2021, a doença começou a atacar\n"
                    "o sistema nervoso e deixar as pessoas malucas e violentas, querendo te obrigar a tomar uma medicação comprovadamente não eficaz\n"
                    "no combate do vírus. Dada essa situação, foram criadas diversas bases seguras em todo país, e pessoas saudáveis estão fugindo de suas casas\n"
                    "e tentando se refugiar nas bases. Só pessoas que mantiveram os cuidados básicos podem se refugiar.\n"
                    "Você sofre um baque ao ler tanta informação, por que alguém iria querer te obrigar a tomar uma medicação ineficaz? Mas mesmo assim,\n"
                    "continua lendo, aparentemente você está em Blumenau e a base mais perto está em Florianópolis. Isso te faz recuperar suas memórias, \n"
                    "você agora sabe exatamente onde está, e lembra como chegar em Floripa, você deve ter feito esse trajeto diversas vezes na sua vida.\n"
                    "Continuando a leitura, o autor do texto relata estar preso neste hospital e afirma ter uma colônia de infectados na porta principal,\n"
                    "mas existe uma saída segura, você só precisa sair pela garagem.\n\n"
                    "Tecle 1 - Para ignorar tudo que leu e sair pela porta da frente\nTecle 2 - Se quer confiar no autor do documento e sair pela garagem\n");
            scanf("%d", &escolha[1]);
            estoque=2;
            if (escolha[1] == 1){
            printf("\nVocê saiu sem nenhuma sutileza pela porta da frente e deu de cara com pessoas com comportamentos esquisitos, parece que o autor estava certo.\n"
                    "Elas notaram sua presença e avançaram como uma manada para cima de ti. Você até tenta atirar contra alguns,\n"
                    "porém não param de surgir vários outros, que acabam te matando.\n\n"
                    "VOCÊ MORREU!!");
                    vida = 0;
                    break;
            }
               infectados = numeroinfectados(infectados);
            printf("\nVocê saiu pela garagem e pelo que tudo indica o autor estava certo, há apenas %d infectados.\n\n"
                   "Tecle 1 - para tentar mata-los\nTecle 2 - para fugir\n", infectados);
            scanf("%d",&escolha[2]);
            if (escolha[2]==1){
                while(infectados>=1){
                    tiros = tiroteio(tiros);
                infectados = infectados - tiros;
                tirostotais =  tiros+tirostotais;
                municao = municao - tirostotais;
                }
            if (municao <= 0) {
                   vida = 0;
                   break;
                   printf("\nSuas balas acabaram, e você perdeu essa luta.\n VOCÊ MORREU");
               }
              
                printf("\nPara um primeiro tiroteio nessas memórias recentes,\nvocê até que se saiu bem, só gastou %d munições.\n sua munição é %d", tirostotais, municao);
          ;
                printf("\nDeseja procurar alguma coisa nos corpos?\n\nTecle 1 - para sim\nTecle 2 - para não.\n");
                scanf("%d", &escolha[3]);
                if (escolha[3] == 1){
                    printf("\nVocê encontrou 4 munições e 2 barras de comida.\n");
                    municao += 4;
                    estoque += 2;
                }
                else{
                    printf("\nEscolha burras como essa irão te trazer futuros\nproblemas\n");
                }
            }
            else if(escolha[2]==2){
                vidaF = vidaperdida(vidaF);
                printf("\nVocê conseguiu fugir mas um dos agressores te acertou,\nsua vida caiu em %d\n", vidaF);
                vida = vida-vidaF;
            }
            printf("\nAgora você pode sair desse maldito hospital. Pelo que suas memórias indicam você está no Hospital Santo Antônio.");
            printf("\nSua memória parece estar sendo recuperada, você lembra dos rumores que diziam que ferrovias seriam intaladas em toda SC,\nserá que existe uma estação por perto?\n");
            while (escolha[4]!=2){
              printf("\nTecle 1 - para parar, descansar e comer \nTecle 2 - para ir em busca das plataformas\n");
              scanf("%d",&escolha[4]);
              if (escolha[4]==1){
             printf("\nÉ uma boa ideia, coma uma barra de cereal, isso vai recuperar sua vida em 10\n");
                vida+= 10;
                estoque-=1;   
              }
              else{
                printf("\nBeleza!\n");
              }
            }
            printf("\nVocê começa a caminhar em direção ao centro de Blumenau, não levou muito tempo até que encontrasse uma estação."
            "Nas placas em toda parte dizem que o trem funciona sem parar devido a tecnologia das placas solares. Olha só, foi necessário uma pandemia para algo funcionar bem nesse país.\n");
            printf("Ao chegar perto da ponte de ferro, você ouve som de um vagão se aproximando, como esses trens ainda conseguem circular?\nSó resta uma opção. Correr e pular para dentro do trem em movimento.");
            printf("\nTudo ocorreu bem, você realmente devia ser um policial de alto escalão antes da amnesia. Já dentro do vagão, você se sente confortável, nada pode te atacar ao que tudo indica.");
            printf("Hora de uma escolha, você deseja dormir, ou esperar acordado por algo que possa acontecer?\n\nTecle 1 - para dormir.\nTecle 2 - Para ficar de vigia.\n");
            scanf("%d",&escolha[5]);
            if (escolha[5] == 1){
              printf("\nDormir foi uma boa escolha. Você só acordou porque o trem parou de repente.\nAo sair do vagão você se depara em São João Batista, num letreiro digital na estação, \n"
              "está escrito que o trem irá dar uma parada de exatas uma hora, e em seguida partirá até São José.\n'Esse trem salvou a minha vida, vou estar a uma ponte de Florianópolis e a base segura'.\n"
              "Seu estômago ronca, e ao checar os bolsos você nota que perdeu o restante de seu estoque de barrinhas.\n'Que droga, estou morrendo de fome, devo ter deixado cair enquanto pulava no trem, ou durante o sono'.\n"
              "Tudo que lhe resta é partir em busca de mais comida.");
              estoque = 0;
            }
            if (escolha[5] == 2){
              if (estoque == 0){
                printf("\nVocê resolveu ficar acordado e isso lhe deixou com muita fome, o problema é que você está sem nenhum estoque de barras de cereal.\n"
                 "Ao sair do vagão você se depara em São João Batista, num letreiro digital na estação, \n"
                 "está escrito que o trem irá dar uma parada de exatas uma hora, e em seguida partirá até São José.\n ");
                 estoque = 0;
              }
              else{
                printf("\nVocê resolveu ficar acordado e isso lhe deixou com muita fome, a sua sorte é que ainda lhe restam %d barrinhas de cereal.\nVocê comeu todas elas e agora você não tem mais nenhuma no estoque.\n"
                "Ao sair do vagão você se depara em São João Batista, num letreiro digital na estação, \n"
                "está escrito que o trem irá dar uma parada de exatas uma hora, e em seguida partirá até São José.\n", estoque);
                estoque = 0;
              }           
            }
          printf("Onde deseja procurar comida?\n\nTecle 1 - Para procurar na ala Norte\nTecle 2 - Para buscar na ala Sul\n");
          scanf("%d",&escolha[6]);
          if (escolha[6]==1){
            printf("\nIndo em direção a ala Norte, você avista infectados'\ncomo vim até aqui sozinho e agora tem infectados por aqui?'\nNão importa, tenho que escolher o que fazer'.\n\nTecle 1 - para mata-los covardemente \nTecle 2 - para passas despercebido\n");
            scanf("%d",&escolha[7]);
            if (escolha[7]==2){
              vidaF = vidaperdida(vidaF);
                printf("\nVocê conseguiu fugir mas um dos agressores te acertou,\nsua vida caiu em %d\n", vidaF);
                vida = vida-vidaF;
            }
            else{
                 infectados = numeroinfectados(infectados);
                   
                   while(infectados>=1){
                         tiros = tiroteio(tiros);
                  infectados = infectados - tiros;
                tirostotais =  tiros+tirostotais;
                municao = municao - tirostotais;
                }
                if (municao <= 0) {
                   vida = 0;
                   printf("\nSuas balas acabaram, e você perdeu essa luta.\n VOCÊ MORREU");
                   break;
               }
              printf("\nVocê gastou %d tiros para matar todos,\neram %d aparentemente, agora não tem possibilidade de haver alguém na volta.\n", tirostotais, infectados);
              printf("Lhe restaram %d munições.", municao);
            }
            printf("\n\nAgora a sua frente só há uma lanchonete,\ntudo em sua vitrine está podre,\nmas ao menos as gloriosas barrinhas de cereal estão vivas ainda.\nVocê encontrou 8 barrinhas, acho que isso não será mais um problema para nós.");
            estoque += 8;
            printf("\nAgora só nos resta voltar em direção ao trem.\nAo passar onde os infectados estavam,\nvocê percebe que não tem mais ninguém ali,\neles devem ter ido em direção a ala Sul,\nimprovável que ainda saibam como funciona um trem.");
          }
          else{
            printf("\nAndando em direção a ala Sul,\nvocê avista um prédio com várias proteções em frente a ele, como espinhos e tochas,\ne você se lembra de que quando você leu aquele arquivo no computador,\n"
            "havia uma base segura localizada em São João Batista.'Só pode ser uma das bases seguras.\nEstou Salvo!!', porém não foi bem assim, você gritou muitas vezes para tentar chamar alguém de lá.\n"
            "Porém ninguém respondeu. Você tenta pelo menos pedir alguma comida,\ne então eles jogam pela janela um saco com 10 barrinhas.\nNão foi o que você queria mas pelo menos você não irá morrer de fome. ");
            estoque = 10;
          }
          printf("\n\nAo entrar novamente no trem,\numa vontade incontrolável de dormir te ataca,\na natureza chama, e você obedece.\nDepois de uma soneca curta,\nvocê acorda quando o trem volta a andar.\n"
          "Agora só resta você e seus pensamentos angustiantes até São José.\nEsse trem foi uma benção, passar bem longe de Gaspar e Ilhota,\nessas cidades só servem pra deixar Blumenau mais longe de Florianópolis.\n"
          "Chegando em São José, você sente um alívio.\nSua missão agora é ir até a ponte Hercílio da Luz,\nonde você finalmente vai poder atravessar até Floripa.\n\n"
          "Andando pelas ruas de São josé, você se depara com um grupo enorme\nde infectados e não há chance alguma de matar todos eles. Suas opções são:\n\nTecle 1 - Para pegar outro caminho.\nTecle 2 - Para jogar uma pedra para o lado contrário de onde você está,\ntentando atraí-los para aquela posição e passar despercebido por eles.\n");
          scanf("%d", &escolha[8]);
          if (escolha[8] == 1){
            printf("\nAcho que essa foi uma escolha sábia.\nVocê seguiu um caminho alternativo,\nmas nada que vá mudar sua rota.\nAgora tenho a impressão de que nada \nte atrapalhará o resto da viagem.\n");
          }
          else{
            printf("\nVocê arremessou uma pedra num prédio adiante,\nmas os infectados nem tentaram descobrir o que estava acontecendo.\nEles parecem cavalos com antolhos, só conseguem ver o que está imediatamente a sua frente.\nMesmo sendo burros são bem ágeis e logo te alcançaram, você até tenta se defender, \nmas eles não veem dificuldade alguma em te matar.\n\nVOCÊ MORREU! ");
            break;
          }
          printf("\nSeguindo sua caminhada, você avista os pilares da ponte,\ne ela parece perfeitamente reconstruída,\nnovamente foi necessário uma pandemia para uma obra pública funcionar.\nVocê corre em disparada até a ponte e começa a atravessar a mesma,\nnada te separa da base segura.\nAté que derrepente um calafrio percorre a sua nuca,\num cheiro estranho te aguça o olfato, um cheiro de zinco,\ne ao olhar para trás, você vê algo, algo inimaginável.\nOs infectados se uniram como um só, como seres de intelecto tão baixo se uniram em algo tão complexo.\nE eles tem um objetivo claro, acabar com você!\n");
          municao = 3;
          int tentativaCorrer = 0;
          while (municao>0){
            printf("\nO que deseja fazer:\nTecle 1 - Para correr sem olhar para trás\nTecle 2 - Para Atirar, talvez matar o cérebro da operação te salve\n");
            scanf("%d", &escolha[9]);
            if (escolha[9]==1){
              printf("\nVocê tenta correr, mas aquilo vai te alcançar desse jeito,\ntalvez a única saída seja atirar. Isso não vai resolver!\n");
              }
            else{
              municao-=1;
              printf("\nVocê atirou mas não parece que essa ação teve grande\nefeito em destruir a coisa. Tente isso de novo!\n");
              if (municao == 1){
                printf("\nEsse foi seu último tiro, não deve mais\nhaver esperança, estamos mortos!");
                vida = 0;
              }
            
            }
          }
          printf("\nNo último instante, quando você já acreditava estar morto,\nvocê ouve o som de metralhadoras,\n e estrondo do ar se movendo sob as hélices de vários helicopteros.\nO que?? Não é possível, a base segura enviou reforços,\nainda há esperanças. Tem mais um som te perturbando,\né uma melodia, eu acho que reconheço ela.\n");
          printf("\nDe repente você não está mais na ponte, como assim??\nVocê escuta uma mulher gritando, e a melodia que escutou ainda mais ensurdecedora.\nEssa mulher é sua mãe?? Ela manda você levantar logo,\ne diz que você está atrasado para aula,\njusto no primeiro dia de aula na sua escola nova,\no IFSC. O que diabos está acontecendo?\nVocê tenta argumentar e diz que está numa pandemia global em 2025.\n\nEntão ela diz:\n'Acorda muleque, é dia 10/02/2020, começo do ano letivo no IFSC,\nlevanta logo e vai se arrumar.'");
          printf("\nBom, nada a comentar, parece que ela está certa.\nEu sabia desde o ínicio, foi um sonho bom afinal, até um próximo!");
          printf("\n\nE aqui acaba nosso jogo, vote na gente a equipe CABEÇAS DE LATA número 7.");
          vida = 0;
    }
  }

