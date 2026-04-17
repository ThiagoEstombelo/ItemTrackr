# 📦 ItemTrackr – Sistema de Rastreio e Recuperação de Itens

## 📌 Descrição

O **ItemTrackr** é um sistema desenvolvido para intermediar a recuperação de itens perdidos em ambientes de grande circulação, como universidades, eventos e centros urbanos.

A aplicação permite conectar pessoas que perderam objetos àquelas que os encontraram, oferecendo um fluxo estruturado de cadastro, rastreamento e entrega.

O projeto foi desenvolvido no contexto acadêmico do curso de Ciência da Computação da Universidade Tiradentes.

---

## 🎯 Problema

A perda de itens pessoais é um problema recorrente que gera prejuízos financeiros, transtornos e frustração.
Conforme descrito no projeto, não existem sistemas amplamente adotados para organizar esse processo de forma eficiente .

---

## 💡 Solução

O sistema propõe uma plataforma que:

* Registra usuários (quem perdeu, encontrou ou transporta)
* Cadastra itens perdidos
* Gerencia pedidos de entrega
* Permite rastreamento do status do item
* Organiza entregas utilizando estrutura de fila

---

## ⚙️ Funcionalidades

* ✅ Cadastro de usuários
* ✅ Cadastro de itens (descrição, peso, quantidade)
* ✅ Registro de pedidos de entrega
* ✅ Rastreamento de status (pendente, em trânsito, entregue, etc.)
* ✅ Cadastro de endereços
* ✅ Sistema de filas para gerenciamento de entregas 

---

## 🏗️ Arquitetura do Sistema

O sistema é baseado em modelagem estruturada com entidades como:

* **Item**
* **Order (Pedido)**
* **Carrier (Transportador)**
* **Sender / Recipient**
* **TrackingUpdate**
* **Queue (Fila de pedidos)**

📌 O diagrama do sistema (ver apresentação, página 5) mostra a relação entre essas entidades e o fluxo de rastreamento.  [Baixar/visualizar Apresentação (PDF)](Apresentacao-me-ii-unidade.pdf)

---

## 🧱 Estruturas de Dados

Exemplo de estruturas utilizadas:

```c
struct Carrier {
    UUID id;
    string name;
    Address address;
    string email;
    string password;
};

struct Address {
    string country;
    string zipcode;
    string state;
    string city;
    string neighbourhood;
    string street;
    string number;
};
```

📌 O uso de filas (Queue) permite organizar os pedidos de entrega de forma eficiente.

---

## 🚀 Tecnologias

* Linguagem C
* Estruturas de dados (filas, structs)
* Modelagem de sistemas
* Lógica de programação

---

## 📊 Diferenciais Técnicos

* Uso explícito de **estrutura de fila (FIFO)** para gerenciamento de pedidos
* Modelagem próxima de sistemas reais de logística
* Separação clara entre entidades do domínio
* Potencial de escalabilidade para aplicações reais

---

## ⚠️ Desafios

* Validação do verdadeiro dono do item
* Adoção contínua pelos usuários
* Segurança de dados (LGPD)
* Prevenção de fraudes 

---

## 📈 Possíveis Evoluções

* Interface web ou mobile
* Integração com GPS
* Sistema de reputação de usuários
* IA para correspondência automática de itens
* Expansão para rastreio de animais ou pessoas

---

## 👨‍💻 Autores

* Alan Reis Anjos
* Felipe Martins de Oliveira Júnior
* Gustavo Wagner Cruz Cunha
* Maria Luiza Lemos Bastos
* Thiago Estombelo Llapa

---

## 📜 Licença

Sugestão: MIT License (uso acadêmico e portfólio)
