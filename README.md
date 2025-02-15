# 🏢 C++ - Module 05

## 📝 Présentation

Le module **C++ 05** introduit la gestion des **exceptions** et approfondit l'**héritage** en C++.  
L'objectif est d'apprendre à manipuler les **exceptions standard** et à les intégrer dans une hiérarchie de classes bien structurée.  

Ce module repose sur la gestion d’une **administration bureaucratique**, avec des classes représentant des **bureaucrates**, des **formulaires** et des **actions automatisées**.

---

## 🛠️ Fonctionnalités

- **Exercice 00 : Mommy, when I grow up, I want to be a bureaucrat!**
  - Implémentation d'une classe `Bureaucrat` avec :
    - Un **nom** constant.
    - Un **grade** compris entre **1 (meilleur)** et **150 (pire)**.
  - Gestion des **exceptions** en cas de grade invalide (`GradeTooHighException`, `GradeTooLowException`).
  - Implémentation des méthodes `incrementGrade()` et `decrementGrade()`.
  - Surcharge de l'opérateur `<<` pour afficher les informations du `Bureaucrat`.

- **Exercice 01 : Form up, maggots!**
  - Introduction de la classe `Form` avec :
    - Un **nom constant**.
    - Un **état signé ou non**.
    - Un **grade minimal requis pour signer** et un autre pour **exécuter**.
  - Ajout de la gestion des **exceptions de grade** (`GradeTooHighException`, `GradeTooLowException`).
  - Ajout de `beSigned()` pour qu'un `Bureaucrat` puisse **signer un formulaire**.
  - Ajout de `signForm()` dans `Bureaucrat` pour interagir avec `Form`.

- **Exercice 02 : No, you need form 28B, not 28C...**
  - `Form` devient **`AForm`** et devient une **classe abstraite**.
  - Ajout de **trois types de formulaires concrets** :
    - **ShrubberyCreationForm** : crée un fichier avec un **arbre ASCII**.
    - **RobotomyRequestForm** : **50% de chance de réussite** pour "robotiser" une cible.
    - **PresidentialPardonForm** : accorde un **pardon présidentiel**.
  - Introduction de la méthode `execute()` dans `AForm`, permettant d'exécuter les formulaires signés.

- **Exercice 03 : At least this beats coffee-making**
  - Implémentation de la classe `Intern` :
    - Capable de **créer dynamiquement des formulaires** (`makeForm()`).
    - Évite l'utilisation de **if/else à rallonge**.
  - Vérification et gestion des erreurs en cas de demande de formulaire inconnu.

---

## 📌 Technologies Utilisées

- **C++ 98**  
- **Gestion des exceptions (`try` / `catch`)**  
- **Classes abstraites et héritage**  
- **Surcharge d’opérateurs (`<<`)**  
- **Allocation dynamique (`new` / `delete`)**  

---

## 🏗️ Structure du Projet

📂 ex00  
┣ 📜 Bureaucrat.cpp  
┣ 📜 Bureaucrat.hpp  
┣ 📜 Makefile  
┗ 📜 main.cpp  

📂 ex01  
┣ 📜 Bureaucrat.cpp  
┣ 📜 Bureaucrat.hpp  
┣ 📜 Form.cpp  
┣ 📜 Form.hpp  
┣ 📜 Makefile  
┗ 📜 main.cpp  

📂 ex02  
┣ 📜 AForm.cpp  
┣ 📜 AForm.hpp  
┣ 📜 Bureaucrat.cpp  
┣ 📜 Bureaucrat.hpp  
┣ 📜 PresidentialPardonForm.cpp  
┣ 📜 PresidentialPardonForm.hpp  
┣ 📜 RobotomyRequestForm.cpp  
┣ 📜 RobotomyRequestForm.hpp  
┣ 📜 ShrubberyCreationForm.cpp  
┣ 📜 ShrubberyCreationForm.hpp  
┣ 📜 Makefile  
┗ 📜 main.cpp  

📂 ex03  
┣ 📜 AForm.cpp  
┣ 📜 AForm.hpp  
┣ 📜 Bureaucrat.cpp  
┣ 📜 Bureaucrat.hpp  
┣ 📜 Intern.cpp  
┣ 📜 Intern.hpp  
┣ 📜 PresidentialPardonForm.cpp  
┣ 📜 PresidentialPardonForm.hpp  
┣ 📜 RobotomyRequestForm.cpp  
┣ 📜 RobotomyRequestForm.hpp  
┣ 📜 ShrubberyCreationForm.cpp  
┣ 📜 ShrubberyCreationForm.hpp  
┣ 📜 Makefile  
┗ 📜 main.cpp  

---

## 🔥 Difficultés Rencontrées

- **Gestion des exceptions** : Assurer la capture et le bon affichage des erreurs.  
- **Compréhension de l’héritage abstrait (`AForm`)** : Structurer correctement les classes filles.  
- **Bonne implémentation de `execute()`** : Vérifier que l'exécution est valide avant de l'autoriser.  
- **Utilisation de `Intern` sans `if/else` massif** : Choisir une solution plus propre et optimisée.  
- **Optimisation de la gestion mémoire (`new` / `delete`)** : Éviter les fuites et bien gérer les objets dynamiques.  

---

## 🏗️ Mise en place

1. **Cloner le dépôt** :  
  ```bash
  git clone https://github.com/ton-repo/cpp05.git
  cd cpp05
  ```

2. **Compiler et exécuter chaque exercice** :

**Exercice 00** :   
   ```bash
   cd ex00
   make
   ./bureaucrat
   make fclean
   ```

**Exercice 01** :  
  ```bash
   cd ex01
   make
   ./forms
   make fclean
   ```

**Exercice 02** :  
   ```bash
   cd ex02
   make
   ./forms_exec
   make fclean
   ```

**Exercice 03** :  
   ```bash
   cd ex03
   make
   ./intern
   make fclean
   ```

---

## 👨‍💻 Équipe  

👤 Grégoire Chamorel (Gchamore)  

---

## 📜 Projet réalisé dans le cadre du cursus 42.  

Tu peux bien sûr modifier ce README selon tes besoins, ajouter plus de détails sur ton approche et des instructions d’installation précises. 🚀  
