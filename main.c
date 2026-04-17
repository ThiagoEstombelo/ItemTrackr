#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

// =========================
// ====== STRUCTS ==========
// =========================

typedef struct {
    int id;
    char country[50];
    char zipcode[20];
    char state[50];
    char city[50];
    char neighbourhood[50];
    char street[50];
    char number[10];
} Address;

typedef struct {
    int id;
    Address address;
    char timestamp[30];
} Location;

typedef struct {
    int id;
    char name[100];
    Address address;
    char email[100];
    char password[50];
} Carrier;

typedef struct {
    int id;
    char name[24];
    char password[16];
    char email[191];
    Address address;
} Sender;

typedef struct {
    int id;
    char name[24];
    char password[16];
    char email[191];
    Address address;
} Recipient;

// =========================
// ====== ARRAYS ===========
// =========================

Address addresses[MAX];
Location locations[MAX];
Carrier carriers[MAX];
Sender senders[MAX];
Recipient recipients[MAX];

int qtdAddresses = 0;
int qtdLocations = 0;
int qtdCarriers = 0;
int qtdSenders = 0;
int qtdRecipients = 0;

// =========================
// ====== ADDRESS CRUD =====
// =========================

void registerAddress() {
    if (qtdAddresses >= MAX) {
        printf("Limit reached!\n");
        return;
    }

    Address a;
    a.id = qtdAddresses + 1;

    printf("\n=== CADASTRO DE ENDERECO ===\n");
    getchar();
    
    printf("Country: ");
    fgets(a.country, 50, stdin);
    a.country[strcspn(a.country, "\n")] = 0;

    printf("Zip code: ");
    fgets(a.zipcode, 20, stdin);
    a.zipcode[strcspn(a.zipcode, "\n")] = 0;

    printf("State: ");
    fgets(a.state, 50, stdin);
    a.state[strcspn(a.state, "\n")] = 0;

    printf("City: ");
    fgets(a.city, 50, stdin);
    a.city[strcspn(a.city, "\n")] = 0;

    printf("Neighbourhood: ");
    fgets(a.neighbourhood, 50, stdin);
    a.neighbourhood[strcspn(a.neighbourhood, "\n")] = 0;

    printf("Street: ");
    fgets(a.street, 50, stdin);
    a.street[strcspn(a.street, "\n")] = 0;

    printf("Number: ");
    fgets(a.number, 10, stdin);
    a.number[strcspn(a.number, "\n")] = 0;

    addresses[qtdAddresses++] = a;

    printf("Address registered!\n");
}

void removeAddress() {
    int id;
    printf("Address ID to remove: ");
    scanf("%d", &id);

    int found = -1;
    for (int i = 0; i < qtdAddresses; i++) {
        if (addresses[i].id == id) {
            found = i;
            break;
        }
    }

    if (found == -1) {
        printf("Not found!\n");
        return;
    }

    for (int i = found; i < qtdAddresses - 1; i++) {
        addresses[i] = addresses[i + 1];
    }

    qtdAddresses--;
    printf("Removed successfully!\n");
}

// =========================
// ===== LOCATION CRUD =====
// =========================

void registerLocation() {
    if (qtdLocations >= MAX) {
        printf("Limit reached!\n");
        return;
    }

    Location l;
    l.id = qtdLocations + 1;

    printf("\n=== CADASTRO DE LOCALIZACAO ===\n");
    getchar();

    printf("Country: ");
    fgets(l.address.country, 50, stdin);
    l.address.country[strcspn(l.address.country, "\n")] = 0;

    printf("Zip code: ");
    fgets(l.address.zipcode, 20, stdin);
    l.address.zipcode[strcspn(l.address.zipcode, "\n")] = 0;

    printf("State: ");
    fgets(l.address.state, 50, stdin);
    l.address.state[strcspn(l.address.state, "\n")] = 0;

    printf("City: ");
    fgets(l.address.city, 50, stdin);
    l.address.city[strcspn(l.address.city, "\n")] = 0;

    printf("Neighbourhood: ");
    fgets(l.address.neighbourhood, 50, stdin);
    l.address.neighbourhood[strcspn(l.address.neighbourhood, "\n")] = 0;

    printf("Street: ");
    fgets(l.address.street, 50, stdin);
    l.address.street[strcspn(l.address.street, "\n")] = 0;

    printf("Number: ");
    fgets(l.address.number, 10, stdin);
    l.address.number[strcspn(l.address.number, "\n")] = 0;

    printf("Timestamp: ");
    fgets(l.timestamp, 30, stdin);
    l.timestamp[strcspn(l.timestamp, "\n")] = 0;

    locations[qtdLocations++] = l;

    printf("Location registered!\n");
}

void removeLocation() {
    int id;
    printf("Location ID to remove: ");
    scanf("%d", &id);

    int found = -1;
    for (int i = 0; i < qtdLocations; i++) {
        if (locations[i].id == id) {
            found = i;
            break;
        }
    }

    if (found == -1) {
        printf("Not found!\n");
        return;
    }

    for (int i = found; i < qtdLocations - 1; i++) {
        locations[i] = locations[i + 1];
    }

    qtdLocations--;
    printf("Removed successfully!\n");
}

// =========================
// ===== CARRIER CRUD ======
// =========================

void registerCarrier() {
    if (qtdCarriers >= MAX) {
        printf("Limit reached!\n");
        return;
    }

    Carrier c;
    c.id = qtdCarriers + 1;

    printf("\n=== CADASTRO DE ENTREGADOR ===\n");
    getchar();
    
    printf("Name: ");
    fgets(c.name, 100, stdin);
    c.name[strcspn(c.name, "\n")] = 0;

    printf("--- Carrier Address ---\n");

    printf("Country: ");
    fgets(c.address.country, 50, stdin);
    c.address.country[strcspn(c.address.country, "\n")] = 0;

    printf("Zip code: ");
    fgets(c.address.zipcode, 20, stdin);
    c.address.zipcode[strcspn(c.address.zipcode, "\n")] = 0;

    printf("State: ");
    fgets(c.address.state, 50, stdin);
    c.address.state[strcspn(c.address.state, "\n")] = 0;

    printf("City: ");
    fgets(c.address.city, 50, stdin);
    c.address.city[strcspn(c.address.city, "\n")] = 0;

    printf("Neighbourhood: ");
    fgets(c.address.neighbourhood, 50, stdin);
    c.address.neighbourhood[strcspn(c.address.neighbourhood, "\n")] = 0;

    printf("Street: ");
    fgets(c.address.street, 50, stdin);
    c.address.street[strcspn(c.address.street, "\n")] = 0;

    printf("Number: ");
    fgets(c.address.number, 10, stdin);
    c.address.number[strcspn(c.address.number, "\n")] = 0;

    printf("Email: ");
    fgets(c.email, 100, stdin);
    c.email[strcspn(c.email, "\n")] = 0;

    printf("Password: ");
    fgets(c.password, 50, stdin);
    c.password[strcspn(c.password, "\n")] = 0;

    carriers[qtdCarriers++] = c;

    printf("Carrier registered!\n");
}

void removeCarrier() {
    int id;
    printf("Carrier ID to remove: ");
    scanf("%d", &id);

    int found = -1;
    for (int i = 0; i < qtdCarriers; i++) {
        if (carriers[i].id == id) {
            found = i;
            break;
        }
    }

    if (found == -1) {
        printf("Not found!\n");
        return;
    }

    for (int i = found; i < qtdCarriers - 1; i++) {
        carriers[i] = carriers[i + 1];
    }

    qtdCarriers--;
    printf("Removed successfully!\n");
}

// =========================
// ===== SENDER CRUD =======
// =========================

void registerSender() {
    if (qtdSenders >= MAX) {
        printf("Limit reached!\n");
        return;
    }

    Sender s;
    s.id = qtdSenders + 1;

    printf("\n=== CADASTRO DE REMETENTE ===\n");
    getchar();

    printf("Name: ");
    fgets(s.name, 24, stdin);
    s.name[strcspn(s.name, "\n")] = 0;

    printf("Password: ");
    fgets(s.password, 16, stdin);
    s.password[strcspn(s.password, "\n")] = 0;

    printf("Email: ");
    fgets(s.email, 191, stdin);
    s.email[strcspn(s.email, "\n")] = 0;

    printf("--- Sender Address ---\n");

    printf("Country: ");
    fgets(s.address.country, 50, stdin);
    s.address.country[strcspn(s.address.country, "\n")] = 0;

    printf("Zip code: ");
    fgets(s.address.zipcode, 20, stdin);
    s.address.zipcode[strcspn(s.address.zipcode, "\n")] = 0;

    printf("State: ");
    fgets(s.address.state, 50, stdin);
    s.address.state[strcspn(s.address.state, "\n")] = 0;

    printf("City: ");
    fgets(s.address.city, 50, stdin);
    s.address.city[strcspn(s.address.city, "\n")] = 0;

    printf("Neighbourhood: ");
    fgets(s.address.neighbourhood, 50, stdin);
    s.address.neighbourhood[strcspn(s.address.neighbourhood, "\n")] = 0;

    printf("Street: ");
    fgets(s.address.street, 50, stdin);
    s.address.street[strcspn(s.address.street, "\n")] = 0;

    printf("Number: ");
    fgets(s.address.number, 10, stdin);
    s.address.number[strcspn(s.address.number, "\n")] = 0;

    senders[qtdSenders++] = s;

    printf("Sender registered!\n");
}

void removeSender() {
    int id;
    printf("Sender ID to remove: ");
    scanf("%d", &id);

    int found = -1;
    for (int i = 0; i < qtdSenders; i++) {
        if (senders[i].id == id) {
            found = i;
            break;
        }
    }

    if (found == -1) {
        printf("Not found!\n");
        return;
    }

    for (int i = found; i < qtdSenders - 1; i++) {
        senders[i] = senders[i + 1];
    }

    qtdSenders--;
    printf("Removed successfully!\n");
}

// =========================
// ==== RECIPIENT CRUD =====
// =========================

void registerRecipient() {
    if (qtdRecipients >= MAX) {
        printf("Limit reached!\n");
        return;
    }

    Recipient r;
    r.id = qtdRecipients + 1;

    printf("\n=== CADASTRO DE DESTINATARIO ===\n");
    getchar();

    printf("Name: ");
    fgets(r.name, 24, stdin);
    r.name[strcspn(r.name, "\n")] = 0;

    printf("Password: ");
    fgets(r.password, 16, stdin);
    r.password[strcspn(r.password, "\n")] = 0;

    printf("Email: ");
    fgets(r.email, 191, stdin);
    r.email[strcspn(r.email, "\n")] = 0;

    printf("--- Recipient Address ---\n");

    printf("Country: ");
    fgets(r.address.country, 50, stdin);
    r.address.country[strcspn(r.address.country, "\n")] = 0;

    printf("Zip code: ");
    fgets(r.address.zipcode, 20, stdin);
    r.address.zipcode[strcspn(r.address.zipcode, "\n")] = 0;

    printf("State: ");
    fgets(r.address.state, 50, stdin);
    r.address.state[strcspn(r.address.state, "\n")] = 0;

    printf("City: ");
    fgets(r.address.city, 50, stdin);
    r.address.city[strcspn(r.address.city, "\n")] = 0;

    printf("Neighbourhood: ");
    fgets(r.address.neighbourhood, 50, stdin);
    r.address.neighbourhood[strcspn(r.address.neighbourhood, "\n")] = 0;

    printf("Street: ");
    fgets(r.address.street, 50, stdin);
    r.address.street[strcspn(r.address.street, "\n")] = 0;

    printf("Number: ");
    fgets(r.address.number, 10, stdin);
    r.address.number[strcspn(r.address.number, "\n")] = 0;

    recipients[qtdRecipients++] = r;

    printf("Recipient registered!\n");
}


void removeRecipient() {
    int id;
    printf("Recipient ID to remove: ");
    scanf("%d", &id);

    int found = -1;
    for (int i = 0; i < qtdRecipients; i++) {
        if (recipients[i].id == id) {
            found = i;
            break;
        }
    }

    if (found == -1) {
        printf("Not found!\n");
        return;
    }

    for (int i = found; i < qtdRecipients - 1; i++) {
        recipients[i] = recipients[i + 1];
    }

    qtdRecipients--;
    printf("Removed successfully!\n");
}

// =========================
// ========= MENU ==========
// =========================

void menu() {
    int op;

    do {
        printf("\n========== MENU PRINCIPAL ==========\n");
        printf("1  - Cadastrar Endereco\n");
        printf("2  - Remover Endereco\n");
        printf("3  - Cadastrar Localizacao\n");
        printf("4  - Remover Localizacao\n");
        printf("5  - Cadastrar Entregador\n");
        printf("6  - Remover Entregador\n");
        printf("7  - Cadastrar Remetente\n");
        printf("8  - Remover Remetente\n");
        printf("9  - Cadastrar Destinatario\n");
        printf("10 - Remover Destinatario\n");
        printf("0  - Sair\n");
        printf("Opcao: ");
        scanf("%d", &op);

        switch (op) {
            case 1: registerAddress(); break;
            case 2: removeAddress(); break;
            case 3: registerLocation(); break;
            case 4: removeLocation(); break;
            case 5: registerCarrier(); break;
            case 6: removeCarrier(); break;
            case 7: registerSender(); break;
            case 8: removeSender(); break;
            case 9: registerRecipient(); break;
            case 10: removeRecipient(); break;
            case 0: printf("\nEncerrando programa...\n"); break;
            default: printf("\nOpcao invalida! Tente novamente.\n");
        }

    } while (op != 0);
}

int main() {
    menu();
    return 0;
}
