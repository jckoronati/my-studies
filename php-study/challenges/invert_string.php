<?php

$word = readline("Digite uma palavra: ");

echo invertAWord($word);

echo "\n";

function invertAWord(string $word): string
{   
    $splittedString = str_split($word);

    $reverse = array_reverse($splittedString);
    $invertedWord = implode($reverse);

    return $invertedWord;
}