class Produto():
    
    def __init__(self, nome, preco, volume, id, estoque):
        
        self._nome = nome
        self._preco = preco
        self._volume = volume
        self._id = id
        self._estoque = estoque

    @property
    def nome(self):
        return self._nome
    
    @property
    def preco(self):
        return self._preco
    
    @property
    def id(self):
        return self._id
    
    @property
    def volume(self):
        return self._volume
    
    @property
    def estoque(self):
        return self._estoque
    
    @nome.setter
    def nome(self, nome):
        self._nome = nome
    
    @preco.setter
    def preco(self, preco):
        self._preco = preco

    @volume.setter
    def volume(self, volume):
        self._volume = volume
    
    @estoque.setter
    def estoque(self, estoque):
        self._estoque = estoque

    def exibirProduto(self):
        print("Produto: ", self._nome)
        print("Preço: R$ %.2f" %(self._preco))
        print("Volume: ", self._volume)
        print("Quantidade em estoque: ", self._estoque)
        print("ID do prouto: ", self._id)

