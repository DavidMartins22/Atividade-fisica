#include <stdio.h>

int main()
{
    int treino;
    
    // Contadores para cada dia
    int cont_seg = 0, cont_ter = 0, cont_qua = 0, cont_qui = 0, cont_sex = 0;
    int cont_sab = 0, cont_dom = 0;
    
     
    // Apresentação inicial do sistema
    printf("========================================\n");
    printf(" SISTEMA DE ROTINA DE ATIVIDADE FISICA\n");
    printf("========================================\n");
    printf("Bem-vindo ao Sistema de Rotina de Atividade Física!\n");
    printf("--------------------------------------------------\n");
    printf("Aqui você pode consultar os treinos programados para cada dia da semana.\n");
    printf("Basta escolher o número correspondente ao dia e o sistema mostrará a rotina.\n");
    printf("Ao final, será exibido qual foi o 'TOP DAY' (dia mais acessado).\n");
    printf("Digite 0 a qualquer momento para sair.\n");
    printf("--------------------------------------------------\n");
    
    // Loop principal: repete até o usuário escolher sair
    do { 
        // Menu de opções
        printf("Escolha um dia da semana: \n");
        printf("1 - Segunda-Feira\n");
        printf("2 - Terca-Feira\n");
        printf("3 - Quarta-Feira\n");
        printf("4 - Quinta-Feira\n");
        printf("5 - Sexta-Feira\n");
        printf("6 - Sabado\n");
        printf("7 - Domingo\n");
        printf("0 - Sair\n");
        printf("Digite o Numero do dia: ");
        scanf("%d", &treino);
    
        // Estrutura de decisão (switch-case)
        switch(treino) {
            case 1:
                printf("--------------------------------------------------\n");
                printf("Segunda-Feira: Quadriceps e Posteriores - ");
                printf("Agachamento com Barra, Hack, Leg Press, Cadeira Extensora,\n");
                printf("Leg Curl, Flexao de Pernas, Panturrilha Vertical e Abdômen Infra\n");
                cont_seg++; // incrementa contador da segunda
                break;
            case 2:
                printf("--------------------------------------------------\n");
                printf("Terca-Feira: Costas - ");
                printf("Pulley Frente, Pulley Costas, Puxada de Dorsais Horizontal,\n");
                printf("Remada Ereta com Barra, Remada com Barra, Crucifixo Inverso, Abdômen Supra\n");
                cont_ter++; // incrementa contador da terça
                break;
            case 3:
                printf("--------------------------------------------------\n");
                printf("Quarta-Feira: Ombros - ");
                printf("Desenvolvimento Máquina, Elevação Lateral, Elevação Frontal e Encolhimento\n");
                cont_qua++; // incrementa contador da quarta
                break;
            case 4: 
                printf("--------------------------------------------------\n");
                printf("Quinta-Feira: Peito - ");
                printf("Supino com Barra, Supino Inclinado, Crucifixo Banco 45,\n");
                printf("Supino Declinado, Peck Deck, Cable CrossOver, Polia Baixa\n");
                cont_qui++; // incrementa contador da quinta
                break;
            case 5:
                printf("--------------------------------------------------\n");
                printf("Sexta-Feira: Bíceps e Tríceps - ");
                printf("Rosca Direta com Barra, Tríceps com Polia, Rosca Scott,\n");
                printf("Tríceps Corda, 21 Barra W, Tríceps Banco e Abdominal Oblíquo\n");
                cont_sex++; // incrementa contador da sexta
                break;
             case 6:
                printf("--------------------------------------------------\n");
                printf("Sabado: Cardio e Core - ");
                printf("Corrida, Bicicleta Ergométrica, Prancha Abdominal, Abdominal Infra,\n");
                printf("Abdominal Oblíquo, Elevação de Pernas\n");
                cont_sab++; // incrementa contador de Sábado
                break;
            case 7: 
                printf("--------------------------------------------------\n");
                printf("Domingo: Alongamento e Recuperação - ");
                printf("Yoga, Alongamentos Dinâmicos, Alongamento de Pernas, Alongamento de Ombros,\n");
                printf("Respiração Guiada, Caminhada Leve\n");
                cont_dom++; // incrementa contador de Domingo
                break;
            case 0:
                printf("--------------------------------------------------\n");
                printf("Saindo do programa... Obrigado por usar o sistema!\n");
                break;
            default:
                printf("--------------------------------------------------\n");
                printf("Opção invalida. Escolha de 0 a 7.\n");
        }

    }  while(treino != 0); // o loop só termina quando o usuário digitar 0
    
    // --- Verificação do Top Day ---
    
    int maior = cont_seg;
    char dia[20] = "Segunda-Feira";
    
    if (cont_ter > maior) { maior = cont_ter; snprintf(dia, sizeof(dia), "Terca-Feira"); }
    if (cont_qua > maior) { maior = cont_qua; snprintf(dia, sizeof(dia), "Quarta-Feira"); }
    if (cont_qui > maior) { maior = cont_qui; snprintf(dia, sizeof(dia), "Quinta-Feira"); }
    if (cont_sex > maior) { maior = cont_sex; snprintf(dia, sizeof(dia), "Sexta-Feira"); }
    if (cont_sab > maior) { maior = cont_sab; snprintf(dia, sizeof(dia), "Sabado"); }
    if (cont_dom > maior) { maior = cont_dom; snprintf(dia, sizeof(dia), "Domingo"); }
    
    // Só mostra se algum dia foi consultado
    if (maior > 0) {
        printf("\n==========================================\n");
        printf(" TOP DAY: %s (%d vezes escolhido)\n", dia, maior);
        printf("==========================================\n");
    } else {
        printf("Nenhum treino foi consultado.\n");
    }
    
    return 0;
}