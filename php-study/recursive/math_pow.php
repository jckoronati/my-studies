<?php

$base =(int) readline("\nValor base para ser calculado: ");

$elevate =(int) readline("\nValor para ser elevado: ");

$result = mathPow($base, $elevate);

echo "\n Resultado da potenciação: " . $result;

echo "\n";

function mathPow(int $baseValue, int $elevateValue) {
    if ($elevateValue == 1) 
        return $baseValue;
    return $baseValue*mathPow($baseValue, $elevateValue-1);
}