<?php

$value = readline("Verificar se é palindromo: ");

$isPalindrome = isPalindrome($value);

if ($isPalindrome) {
    echo "\n A palavra " . $value . " é um palindrome \n";
} else {
    echo "\n A palavra " . $value . " não é um palindrome \n";
}

function isPalindrome(string $word): bool
{
    $invertedString = invertAString($word);

    if ($word == $invertedString)
        return true;

    return false;
}

function invertAString(string $word): string 
{
    $stringToArray = str_split($word);
    $count = count($stringToArray) - 1;
    $invertedString = "";

    for ($i = $count; $i >= 0; $i--) { 
        $invertedString .= $stringToArray[$i];
    }

    return $invertedString;
}