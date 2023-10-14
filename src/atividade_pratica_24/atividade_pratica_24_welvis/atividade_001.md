Cliente & Pacote: Essas classes têm uma relação associativa, onde vários pacotes podem estar associados a um cliente, e, no mínimo, um cliente pode estar associado a, pelo menos, um pacote.

Dependente: Essa entidade mantém uma relação de Composição com a entidade cliente, o que significa que a existência de um dependente requer a presença de um cliente.

Evento: A relação entre essa entidade e a entidade pacote é de Agregação. Evento serve como a superclasse que dá origem a subclasses, tais como roteiro, deslocamento e pernoite.

Roteiro, Deslocamento e Pernoite: Essas entidades são subclasses de Evento.