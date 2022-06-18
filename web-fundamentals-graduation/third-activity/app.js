import { Account } from "./domain/Account.js";
import fs from 'fs';
import readline from 'readline';

console.log("---BANCO XPTO---");

main();

function main() {        
    const readlineInterface = readline.createInterface({
        input: process.stdin,
        output: process.stdout
    });


    readlineInterface.question("1 - Criar conta \n2 - Sair \n", (condition) => {
        if (condition == 1) {
            readlineInterface.question("--- Qual número da conta?", (number) => {
                readlineInterface.question("--- Qual o saldo inicial dessa conta? ", (initialBalance) => {
                    const account = new Account(parseInt(number), parseFloat(initialBalance));
                    const accountsList = fs.readFileSync("./data/account.json", "utf-8");
                    const accountsObject = JSON.parse(accountsList);
                
                    accountsObject.push(account);
                    fs.writeFileSync("./data/account.json", JSON.stringify(accountsObject, null, 4), "utf8");

                    readlineInterface.close();
                    
                    main();
                });
            });
        }

        if (condition == 2) {
            console.log("Goodbye, o XPTO agradece seu uso.");
            process.exit(0);
        }
    });
}