/**
 * @file CScenario.hpp
 * @author prevost
 * @brief 
 * @version 0.1
 * @date 2024-09-30
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <iostream>
#include <string>

#include <clibrary.hpp>


/// Classe Cbook :


/// @brief Instanciation de trois objets `CBook` statiques. Utilisation de la méthode Display() sur les objets. 
/// Sortie de programme. Validation par `sanitizer`.
void scenario1();

/// @brief Déclaration d'un tableau statique de trois pointeurs sur objets dynamiques `CBook`. Instanciation dynamique des 3 objets `CBook`. 
/// Utilisation de la méthode Display() sur les objets. Destruction dynamique des objets. Sortie de programme. Validation par `sanitizer`.
void scenario2(size_t listSize);

/// @brief Déclaration d'un tableau statique de 3 objets statiques `CBook`. 
/// Utilisation de la méthode Display() sur les objets. Sortie de programme. Validation par `sanitizer`.
void scenario3(size_t listSize);

/// @brief Instanciation d'un tableau dynamique initial pour 3 objets dynamiques `CBook`. Instanciation dynamique des 3 objets `CBook`. 
/// Utilisation de la méthode Display() sur les objets. Destruction dynamique des objets et du tableau. Sortie de programme. 
/// Validation par `sanitizer`. Le cycle de vie devra être entièrement géré par vos soins.

void scenario4(size_t listSize);

/// @brief Suite du scénario 4. Augmentation du tableau dynamique pour 2 autres objets `CBook` supplémentaires. 
/// Instanciation dynamique des 2 objets `CBook` supplémentaires. Utilisation de la méthode Display() sur les objets. 
/// Destruction dynamique des objets et du tableau. Sortie de programme. Validation par `sanitizer`. 
/// Le cycle de vie devra être entièrement géré par vos soins.
void scenario5(size_t listSize, size_t newListSize);


/// Classe CLibrary :


/// @brief Instanciation d'un objet statique `CLibrary` d'une capacité initiale de 3. Insertion de 3 objets `CBook`. 
/// Vérification de la cardinalité de l'objet `CLibrary`.  Affichage du contenu de la bibliothèque. 
/// Insertion de 3 nouveaux objets `CBook`. Vérification de la cardinalité. Affichage du contenu de la bibliothèque. 
/// Sortie de programme. Validation par `sanitizer`.
void scenario6();

/// @brief Suite du scénario 6. Retrait d'un livre sur critères `titre` & `auteur`, stockage de l'objet retourné dans un premier pointeur temporaire. 
/// Listage de la bibliothèque pour vérification. Retrait de 3 livres par index : index 0, index terminal, index quelconque. 
/// Stockage des ouvrages sortis dans trois autres pointeurs temporaires. Listage de la  bibliothèque pour vérification. 
/// Les objets sortis devront être détruits localement par vos soins. Sortie de programme. Validation par `sanitizer`.
void scenario7();

/// @brief Suite du scénario 7. Réinsertion des ouvrages sortis dans un ordre différent de celui de leur sortie. 
/// Listage de la bibliothèque pour vérification. Sortie de programme. Validation par `sanitizer`.
void scenario8();

/// @brief Le scénario 8 mais sur un objet `CLibrary` instancié dynamiquement.
void scenario9();