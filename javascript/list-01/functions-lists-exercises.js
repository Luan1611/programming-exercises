
// ----------------------------------------------------------------
// Nome: Luan Marqueti
// ----------------------------------------------------------------


// Retorna uma lista com os "qtde" primeiros números primos, começando em 1.

function primos(qtde) {

    let vetorPrimos = Array();

    if (qtde <= 0) {

        return vetorPrimos;

    } else {

        let numeroSequenciaNaturais = 1;

        while (vetorPrimos.length < qtde) {

            let ePrimo = true;
            let divisor = 2;

            if (numeroSequenciaNaturais === 1 || numeroSequenciaNaturais === 2) {
                vetorPrimos.push(numeroSequenciaNaturais);
                numeroSequenciaNaturais++;
            } else {
                while (numeroSequenciaNaturais > divisor) {
                    if (numeroSequenciaNaturais % divisor === 0) {
                        ePrimo = false;
                    }
                    divisor++;
                }
                if (ePrimo === true) {
                    vetorPrimos.push(numeroSequenciaNaturais);
                    
                }
                numeroSequenciaNaturais++;
            }
        }

        return vetorPrimos;
    }

}


// Retorna a lista de palavras palíndromas
// Deve ser implementada usando map/filter/reduce

function palindromo(palavras) {

    function verificarSeEPalindroma(elementoArray) {

            if (elementoArray.length === 1) {
                return true;
            }
            if (elementoArray.toUpperCase() === elementoArray.split("").reverse().join("").toUpperCase()) {
                return true;
            }
            return false;

    }

    let arrayPalindromas = palavras.filter(verificarSeEPalindroma);
    return arrayPalindromas;
    
}


// Retorna se dois aviões estão com perigo de colisão.
// Em geral, a margem de segurança entre dois aviões é de 1000 pés.
// Cada pé é igual a 0.3048 metros.

function perigoAcidente(altura_pes_aviao1, altura_met_aviao2) {

    let altura_pes_aviao2 = (altura_met_aviao2 / 0.3048);

    if (altura_pes_aviao1 >= 0 && altura_pes_aviao2 >= 0 || altura_pes_aviao1 < 0 && altura_pes_aviao2 < 0) {
        if (Math.abs(altura_pes_aviao1 - altura_pes_aviao2) < 1000) {
            return true;
        }
        return false;
    } else {
        if (Math.abs(altura_pes_aviao1) + Math.abs(altura_pes_aviao2) < 1000) {
            return true;
        }
        return false;
    }
}


// Função que retorna uma lista sem nenhum item duplicado.

function apenasUnicos(lista) {

    function verificarSePossuiElementoRepetido(elementoLista, indice, lista) {

        for (let i = 0; i < lista.length; i++) {
            if (elementoLista === lista[i] && indice !== i) {
                return false;
            }
        }
        return true;
    }

    let listaValoresUnicos = lista.filter(verificarSePossuiElementoRepetido);

    return listaValoresUnicos;

}


// Retorna a soma dos "qtde" primeiros números pares (zero é um número par!)

function somaNumerosPares(qtde) {

    let par = 0;
    let soma = 0;

    for (let i = 0; i < qtde; i++) {
        soma += par;
        par += 2;
    }

    return soma;

}


// Recebe uma lista numérica e retorna uma lista cujos valores foram multiplicados por 2.
// Deve ser implementada usando map/filter/reduce

function dobro(valores) {

    function multiplicarElementos(elemento) {
        return elemento * 2;
    }

    let listaProduto = valores.map(multiplicarElementos);

    return listaProduto;
}


// Recebe duas listas e retorna uma lista com a união das listas de entrada, sem repetições.

function uniao(v1, v2) {

    let listaUniao = [];
    
    for (let i = 0; i < v1.length; i++) {
        let elementoJaExisteNaListaUniao = false;
        for (let j = 0; j < listaUniao.length; j++) {
            if (v1[i] === listaUniao[j]) {
                elementoJaExisteNaListaUniao = true;
            }
        }
        if (elementoJaExisteNaListaUniao === false) {
            listaUniao.push(v1[i]);
        } 
    }

    for (let i = 0; i < v2.length; i++) {
        let elementoJaExisteNaListaUniao = false;
        for (let j = 0; j < listaUniao.length; j++) {
            if (v2[i] === listaUniao[j]) {
                elementoJaExisteNaListaUniao = true;
            }
        }
        if (elementoJaExisteNaListaUniao === false) {
            listaUniao.push(v2[i]);
        }
    }

    return listaUniao;

}


// Função que recebe duas listas e retorna os elementos da primeira lista que não estejam na segunda lista.

function diff(v1, v2) {

    let listaSubtracaoV1MenosV2 = [];

    for (elementoV1 of v1) {
        elementoExisteNaSegundaLista = false;
        for (elementoV2 of v2) {
            if (elementoV1 === elementoV2) {
                elementoExisteNaSegundaLista = true;
            }
        }
        if (elementoExisteNaSegundaLista === false) {
            listaSubtracaoV1MenosV2.push(elementoV1);
        }
    }

    return listaSubtracaoV1MenosV2;
}


// Recebe duas listas numéricas e retorna o vetor cuja soma dos valores é maior que a outra lista. Caso ambas as listas tenham mesmo valor, retorna FALSE. Considere vetor vazio com soma zero.
// Deve ser implementada usando map/filter/reduce

function maior(v1, v2) {

    function obterSomaDosElementosDaLista(acumulador, elemento) {
        return acumulador + elemento;
    }

    let somaV1;
    let somaV2;

    if (v1.length === 0) {
        somaV1 = 0;
    } else {
        somaV1 = v1.reduce(obterSomaDosElementosDaLista);
    }
    
    if (v2.length === 0) {
        somaV2 = 0;
    } else {
        somaV2 = v2.reduce(obterSomaDosElementosDaLista);
    }

    if (somaV1 > somaV2) {
        return v1;
    } else {
        if (somaV2 > somaV1) {
            return v2;
        }
        return false;
    }

}


// Recebe um valor e uma lista. Retorna a lista sem nenhuma ocorrência do valor de entrada.
// Deve ser implementada usando map/filter/reduce

function removeValores(valor, lista) {

    function removerValorSePresenteNaLista(elemento) {
        if (valor === elemento) {
            return false;
        }
        return true;
    }

    let listaSemValorEspecificado = lista.filter(removerValorSePresenteNaLista);

    return listaSemValorEspecificado;
}