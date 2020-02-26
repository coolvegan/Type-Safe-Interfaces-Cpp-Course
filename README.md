# Type-Safe-Interfaces-Cpp-Course

________________________________________________________________________________
|         |                   |                             |                   |
|_________|_struct____________|__enum class_________________|_std::variant______|
|         |                   |                             |                   |
| Konzept |Zustandsaggregation| Auswahl einer Möglichkeit   | Auswahl von Typen |  
|         |diverser Datentypen| von Möglichkeit             |                   |
|_________|___________________|_____________________________|___________________|
|         |Die Anzahl der     | Die Anzahl der max. Zustände| wie enum class    |
| Gattung |max. Zustände ist  | ist gleich der Summe der    |                   |
|         |gleich dem         | möglichen Zuständer ihrer   |                   |
|         |Produkt der        | gekapselten Member          |                   |
|         |möglichen Zustände |                             |                   |
|         |aller gekapselten  |                             |                   |
|         |Typen              |                             |                   |
|_________|___________________|_____________________________|___________________|
