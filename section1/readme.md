# Zusammenfassung Variant
* ein Variant repräsentiert eine Wahl zwischen Typen
* kann als Modell für "closed set polymorphismus" genutzt werden
  * closed set polymorphismus heißt, alle Möglichkeiten sind zur Compilezeit bekannt

* Variants können als eine Art typ-sicheres getaggtes union betrachtet werden

* Möglichen Zustände ergeben sich aus der Summe der Zustände jedes Typs

* Keine dynamische Allocation, value Semantics - std::move und std::copy können eingesetzt werden

#### example
using variant = std::variant<int, float>;
variant v1{5};
variant v2{10.f};

v1 = v2; //v1 enthält 10.f

