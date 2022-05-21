<?php

$value = readline('Digite um valor ');

prints((int) $value);

echo "\n";

function prints(int $number): void
{
    if ($number == 0) {
        echo "\n" . $number . "\n";
    } else {
        echo $number . " ";
        prints($number - 1);
        echo $number . " ";
    }
}
