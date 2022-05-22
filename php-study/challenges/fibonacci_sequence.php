<?php

$value = (int) readline("Insira o tamanho da sequência: ");

echo "\n";

main($value);

echo "\n";

function main(int $value): void
{
    $sequence = createSequence($value);

    $sequenceToText = implode(", ", $sequence);

    echo $sequenceToText . "\n";
}

function createSequence(int $value): array
{
    $fibonacci = [];

    for ($i=0; $i < $value; $i++) { 
        if ($i == 0 || $i == 1) {
            $fibonacci[$i] = $i;
            continue;
        }

        $count = $i;
        $antepenultimatePosition = $count - 2;
        $previousPosition = $count - 1;
        
        $antepenultimateValue = $fibonacci[$antepenultimatePosition];
        $previousValue = $fibonacci[$previousPosition];

        $fibonacci[$i] = $previousValue + $antepenultimateValue;
    }

    return $fibonacci;
}
